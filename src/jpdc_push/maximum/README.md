# TorchMaximum (elementwise BF16 max), restructured to match the divider/sigmoid uniform ablation design

Third engine in the same family as `BF16Divider_SIMD_uniform.zip` and
`BF16Sigmoid_SIMD_uniform.zip`. Same file layout, same naming pattern —
but this engine is architecturally different in one important way, so
read the "zero latency" section before assuming the numbers should match
the other two.

## What you gave me, and what each file turned out to be

| File you uploaded | What it actually is | Kept? |
|---|---|---|
| `TorchMaximum.bsv` | The frozen scalar primitive — but unlike `BF16Divider_pipeline.bsv`/`BF16Sigmoid.bsv`, `getMax(a,b)` is a **plain combinational value method**: no registers, no rule, zero clock latency. | **Kept, unchanged.** |
| `TorchMaximumVec768_Generic.bsv` | Same `busy`/`round`/`local`/flat-index state-machine pattern as `BF16DividerSIMD_Generic.bsv`/`SigmoidVec768_Generic.bsv` — already shown redundant for both of those. Its own comments already note the DUT it wraps is purely combinational and needs no feed/collect split; it just doesn't go the extra step of dropping the redundant `n` bookkeeping around it. Also defines `TorchMaximumVector768Ifc` itself (no separate missing baseline file this time, unlike sigmoid's `SigmoidVec768.bsv`). | **Not carried forward** — same reasoning as the other two engines' old `Generic` files. |
| `TorchMaximumVec768_Configs.bsv` | 15 thin wrappers around the old bulk body. | **Not carried forward** — superseded by 8 direct synthesis targets. |
| `TorchMaximumVec768_Configs_TB.bsv` | Golden `max16`/`max32` data + bulk-interface TB. | **Golden data carried over verbatim**; TB structure rebuilt for streaming (see below). |

**`TorchMaximumN.bsv`** (the r-lane fan-out, referenced by all three of
the other files) **was not uploaded**, same situation as sigmoid's
`SigmoidVecN.bsv` last time — but again, its exact interface
(`TorchMaximumNIfc#(r)` / `findMax`, a plain combinational Vector-to-Vector
method) is fully pinned down by how the other three files call it, so I
didn't need its contents. Its role is absorbed directly into the new
`TorchMaximum_SIMD_AblationPPA.bsv`.

## The new files

| Divider file | Max file | Role |
|---|---|---|
| `BF16Divider_pipeline.bsv` | `TorchMaximum.bsv` | Frozen arithmetic — here, a pure combinational selection, not a pipeline. |
| `BF16Divider_SIMD.bsv` | `TorchMaximum_SIMD.bsv` | One lane: `get_max(a,b)` — still a plain value method, no `put`/`get` split (see below for why). |
| `BF16Divider_SIMD_AblationPPA.bsv` | `TorchMaximum_SIMD_AblationPPA.bsv` | Generic r-lane fan-out (absorbs `TorchMaximumN`'s role) + 8 synthesis targets. |
| `Tb_BF16Divider_SIMD_AblationPPA.bsv` | `Tb_TorchMaximum_SIMD_AblationPPA.bsv` | Streaming TB — but a **single rule**, not a feed/collect pair (see below). |
| `run_ppa_divider.sh` | `run_ppa_max.sh` | Same four subcommands. |

## Why this engine has no `put_operands`/`get_result`/`hasResult` split

The divider and sigmoid are genuinely pipelined (5 register hops each).
Max is not — `getMax`/`findMax` are plain value methods with zero clock
latency, a property already called out in the original `Generic.bsv`'s
own comments ("no reason for a feed/collect rule split"). Forcing this
into the same `Action`+`ActionValue`+`hasResult()` shape as the other two
would do one of two wrong things: either add a real register stage that
doesn't exist (silently changing the hardware's actual, zero-cycle
latency — the opposite of what a PPA ablation should do), or add a
`hasResult()` that can only ever return `True` (noise, not information).
So this engine keeps a single combinational `get_max(a, b)` method
end-to-end, and the testbench uses **one rule** instead of two — the input
column and its checked result happen in the same cycle, matching the real
hardware exactly.

## Timing: `768/r - 1`, not `768/r + 4`

The measurement convention is identical to the divider/sigmoid TBs:
`elapsed = cyc(at the last column) - cyc(at the first column)`, both
captured inline in the same rule. For `cols` columns processed one per
cycle with a pipeline latency of `L`, that convention always gives
`(cols - 1) + L`. Divider/sigmoid have `L = 5`, giving `768/r + 4`. Max has
`L = 0` (result lands the same cycle as its inputs), giving `768/r - 1`.
It's the same formula throughout the family; only the latency term
changes, and here it's genuinely zero — this is a real property of the
hardware, not a simplification.

| r | n | cols | cycles/op |
|---|---|------|-----------|
| 1  | 64  | 768 | 767 |
| 2  | 64  | 384 | 383 |
| 3  | 64  | 256 | 255 |
| 4  | 64  | 192 | 191 |
| 6  | 64  | 128 | 127 |
| 12 | 64  | 64  | 63  |
| 4  | 16  | 192 | 191 |
| 4  | 32  | 192 | 191 |
| 4  | 96  | 192 | 191 |
| 4  | 192 | 192 | 191 |
| 8  | 32  | 96  | 95  |
| 8  | 96  | 96  | 95  |
| 2  | 128 | 384 | 383 |
| 6  | 128 | 128 | 127 |
| 16 | 48  | 48  | 47  |

## The correctness check: bit-exact `==`, not `bf16BitEq`

The divider/sigmoid TBs use `bf16BitEq`, which treats `+0`/`-0` as equal —
appropriate there because those engines' arithmetic can legitimately
produce either zero encoding. Max is different: it's an exact *selection*
between two given bit patterns, and the golden data was generated by
replicating `maxBF16`'s own decision rule (including exactly which zero
encoding it picks in the zero-vs-zero case). Using the zero-tolerant
comparison here would hide a genuine selection bug rather than tolerate a
harmless rounding difference, so this TB uses plain `==` throughout,
matching `TorchMaximumVec768_Configs_TB.bsv` exactly. This test still only
checks that the **(r)-lane wrapper** routes/addresses all 768 elements
correctly — it doesn't re-validate `maxBF16`'s own comparison logic for
every edge case (e.g. signed-zero handling), which is treated as
already-proven/frozen, same as the divider's and sigmoid's own arithmetic.

The original bulk-interface TB's separate anti-contamination check is
dropped for the same reason it was dropped for sigmoid: every element of
every column is checked against its own op-specific golden value the
moment it arrives, so a stale-data or lane-order bug already surfaces as
an ordinary mismatch.

## Building

Same caveat as the other two: no `bsc`/Verilator in this sandbox, so only
bracket/keyword balance and the golden data were checked by hand (the
golden tables are byte-for-byte identical to
`TorchMaximumVec768_Configs_TB.bsv` — diffed directly, not just eyeballed).

```sh
./run_ppa_max.sh sim       # build + simulate all 15 configs, print PASS/FAIL
./run_ppa_max.sh verilog   # emit the 8 distinct synthesizable .v files
./run_ppa_max.sh verbose r4_n64   # one config, full per-cycle trace
./run_ppa_max.sh spot r4_n64      # just the 12 manual spot-check blocks
```
