# BF16 Sigmoid, restructured to match the divider's uniform ablation design

This is the sigmoid counterpart to `BF16Divider_SIMD_uniform.zip`, built the
same way, file-for-file, so the two engines share one consistent design
pattern (which is exactly what was asked for: "uniform across the design").

## What you gave me, and what each file turned out to be

| File you uploaded | What it actually is | Kept? |
|---|---|---|
| `BF16.bsv` | Shared BF16 type + adder/multiplier/sub primitives. Identical to the one already used for the divider. | **Kept, unchanged.** |
| `BF16Sigmoid.bsv` | The frozen, proven scalar sigmoid pipeline (`mkBF16Sigmoid`) — the sigmoid equivalent of `BF16Divider_pipeline.bsv`. **But**: ~1150 of its 1369 lines were a second, unsynthesized, unreferenced module (`mkBF16SigmoidTB`) — dead code nothing in this chain calls. | **Kept, but the dead `mkBF16SigmoidTB` block was removed** (201 lines left). |
| `SigmoidVecN.bsv` | Already a clean r-lane fan-out (`mkSigmoidVectorN`): no `n`, no round/local bookkeeping, streaming `put_data`/`getResult`/`hasResult`. This was already built in the "uniform" shape. | **Folded into the new `BF16Sigmoid_SIMD_AblationPPA.bsv`** (adds the 8 fixed-r synthesis targets it didn't have); the standalone file is retired so there's one place for this logic, matching the divider's layout. |
| `SigmoidVec768_Generic.bsv` | Wraps the r-lane fan-out above in a `busy`/`input_buffer`/`output_buffer` state machine using `round`/`local`/flat-index counters to describe an (r,n) scheme — **the exact same pattern** `BF16DividerSIMD_Generic.bsv` used, which was already measured redundant for the divider. Also depends on `SigmoidVec768.bsv` (see below), which wasn't uploaded. | **Not carried forward** — superseded by the streaming design, same reasoning as the divider's old `Generic` file. |
| `SigmoidVec768_Configs.bsv` | 15 thin wrappers instantiating the old `Generic` body per (r,n). | **Not carried forward** — superseded by the new file's 8 direct synthesis targets. |
| `SigmoidVec768_Configs_TB.bsv` | 15 TB wrappers around the old bulk body, via `mkSigmoidTBBody` (see next row) and the missing `SigmoidVec768.bsv`. | **Not carried forward.** |
| `SigmoidVec768_TB.bsv` | Two things bundled together: (1) the golden `sig16`/`sig32` reference data plus an important documented finding — the check is bit-exact against sigmoid's own **hardware approximation model**, not true math sigmoid; (2) the *original* `mkSigmoidVector768_L1..L32` baseline targets, which depend on the missing `SigmoidVec768.bsv`. | **Golden data + rationale carried over verbatim** into the new TB. **Baseline `_L*` targets not carried forward** (that's the separately-verified original design, analogous to the divider's untouched `BF16DividerSIMD_r1n64.bsv` — not part of this refactor). |

**`SigmoidVec768.bsv` itself was never uploaded**, in any of these seven
files or before. It defines `SigmoidVector768Ifc` (`putVectors`/`getResult`/
`hasResult`) and the original `mkBF16SigmoidVector768`/`mkSigmoidVector768_L1..L32`
targets. I didn't need its contents to build this new design — the exact
3-method contract is fully pinned down by how the other six files call it —
but flagging it in case you were expecting it to be part of this deliverable
too. It isn't; the new design doesn't depend on it.

## The new files (mirror the divider set exactly)

| Divider file | Sigmoid file | Role |
|---|---|---|
| `BF16Divider_pipeline.bsv` | `BF16Sigmoid.bsv` (cleaned) | Frozen scalar arithmetic, one operand in this case instead of two. |
| `BF16Divider_SIMD.bsv` | `BF16Sigmoid_SIMD.bsv` | One lane: `put_operand`/`get_result`/`hasResult` wrapping the scalar pipeline. (Sigmoid already had this exact shape as `put_data`/`getResult`/`hasResult` — this is a thin rename for naming consistency with the divider family.) |
| `BF16Divider_SIMD_AblationPPA.bsv` | `BF16Sigmoid_SIMD_AblationPPA.bsv` | Generic r-lane fan-out (absorbs `SigmoidVecN.bsv`'s logic) + 8 `(*synthesize*)` targets, one per distinct `r`. |
| `Tb_BF16Divider_SIMD_AblationPPA.bsv` | `Tb_BF16Sigmoid_SIMD_AblationPPA.bsv` | Streaming TB: one column of `r` elements in/out per cycle, explicit `dut.hasResult()` rule guard, 15 `(*synthesize*)` wrappers over 8 distinct DUTs. |
| `run_ppa_divider.sh` | `run_ppa_sigmoid.sh` | Same four subcommands (`sim`/`verilog`/`verbose`/`spot`). |

## The one substantive difference in the TB: bit-exact only, no tolerance

The divider's TB mixes bit-exact checks (power-of-two divisors) with a
tolerance check (everything else), because true division has an exact
answer and the hardware's Goldschmidt-style approximation can land a few
ULPs off. Sigmoid is different: `BF16Sigmoid.bsv`'s own documented design
note (carried into this TB verbatim) explains that its algorithm is
*intentionally* an approximation of true sigmoid, verified via a from-scratch
Python transcription of its exact bit-manipulation branches — meaning the
golden data here already **is** what the hardware is supposed to produce,
not true math sigmoid. So every check in the new TB is a plain `bf16BitEq`
comparison, no tolerance branch. This is not a weaker check than the
divider's; it's simply the correct one for what this hardware actually
promises to compute.

The original bulk-interface TB also had a separate "anti-contamination"
check (comparing op1's first output against op0's, to catch stale data
leaking between operations). That's not needed in the streaming design:
because every element of every column is checked against its own
op-specific golden value the moment it arrives, a stale-data or lane-order
bug already shows up as an ordinary per-element mismatch — a strict
superset of what that spot-check caught.

## Timing (same fix as the divider, same result)

`BF16Sigmoid.bsv` has the identical register-chain shape as
`BF16Divider_pipeline.bsv` (`stage1→stage2→stage3→stage4→result_valid`,
5 hops), so the same formula applies: `cycles/op = 768/r + 4`. The TB
uses the same fix that corrected the divider's initial `+2` timing bug —
`op_start_cycle` captured inline in `feed_input` on the real first-send
cycle, elapsed/PASS-FAIL computed inline in `collect_result` on the exact
cycle the last result arrives, and an explicit `dut.hasResult()` guard on
the collect rule rather than relying only on `get_result()`'s implicit
condition.

## Building

Same caveat as the divider deliverable: I don't have `bsc`/Verilator in
this sandbox, so I've only checked bracket/keyword balance by hand, not
actually compiled or simulated this.

```sh
./run_ppa_sigmoid.sh sim       # build + simulate all 15 configs, print PASS/FAIL
./run_ppa_sigmoid.sh verilog   # emit the 8 distinct synthesizable .v files
./run_ppa_sigmoid.sh verbose r4_n64   # one config, full per-cycle trace
./run_ppa_sigmoid.sh spot r4_n64      # just the 12 manual spot-check blocks
```

## Expected results (same 15 rows, same cycle numbers as the divider)

| r | n | cols | cycles/op |
|---|---|------|-----------|
| 1  | 64  | 768 | 772 |
| 2  | 64  | 384 | 388 |
| 3  | 64  | 256 | 260 |
| 4  | 64  | 192 | 196 |
| 6  | 64  | 128 | 132 |
| 12 | 64  | 64  | 68  |
| 4  | 16  | 192 | 196 |
| 4  | 32  | 192 | 196 |
| 4  | 96  | 192 | 196 |
| 4  | 192 | 192 | 196 |
| 8  | 32  | 96  | 100 |
| 8  | 96  | 96  | 100 |
| 2  | 128 | 384 | 388 |
| 6  | 128 | 128 | 132 |
| 16 | 48  | 48  | 52  |
