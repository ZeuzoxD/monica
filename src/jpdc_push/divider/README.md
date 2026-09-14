# BF16 Divider, restructured to match the a*b+c*d SIMD ablation design

This replaces `BF16DividerSIMD_Generic.bsv` / `BF16DividerSIMD_Configs.bsv` /
`BF16DividerSIMD_Configs_TB.bsv` with a design that is now structurally
**identical** in shape to your friend's `BF16_SIMD.bsv` /
`BF16_SIMD_AblationPPA.bsv` / `Tb_BF16_SIMD_AblationPPA.bsv` / `run_ppa.sh`.
`BF16DividerVectorN.bsv` is superseded (the AblationPPA file replicates
lanes directly, same as the friend's file does — no intermediate
vector-wrapper layer) and is not part of this stack.

## File-for-file mapping

| Their file | This file | Role |
|---|---|---|
| `BF16.bsv` | `BF16.bsv` (copied verbatim from their tarball) | Shared type + adder/multiplier/sub primitives. Identical package both sides already depended on. |
| `BF16_SIMD.bsv` | `BF16Divider_SIMD.bsv` | **One lane.** `put_operands`/`get_result` wrapping the arithmetic. Theirs wraps 2 mults + 1 add; this wraps the frozen 4-stage `mkBF16Divider` (`BF16Divider_pipeline.bsv`, untouched). |
| `BF16_SIMD_AblationPPA.bsv` | `BF16Divider_SIMD_AblationPPA.bsv` | Generic `r`-lane fan-out (`replicateM` + for-loop, no round/local/flat-index bookkeeping) + 8 `(*synthesize*)` targets, one per distinct `r`. |
| `Tb_BF16_SIMD_AblationPPA.bsv` | `Tb_BF16Divider_SIMD_AblationPPA.bsv` | Streaming TB: one column of `r` elements in/out per cycle, 15 `(*synthesize*)` wrappers (one per (r,n) row, only 8 distinct DUTs). |
| `run_ppa.sh` | `run_ppa_divider.sh` | Same four subcommands (`sim`/`verilog`/`verbose`/`spot`), same `DUTS`/`CFGS` shape. |

`BF16Divider_pipeline.bsv` carries over completely unchanged — it's your
proven scalar arithmetic, exactly analogous to the mult/add functions
living in their `BF16.bsv`.

## What changed vs. the old Generic/Configs/Configs_TB design

The old design threaded an `n` parameter through as real hardware: every
`put_data`/`getResult` call computed `round`/`local_idx`/`flat_idx` on a
`Vector#(r, Bit#(32))`, sized to describe an (r,n) SIMD/BRAM addressing
scheme. That's exactly what your friend's file's big comment block
describes doing once, measuring, and then removing — their `n`-deep
`mkSizedBypassFIFOF` buffer never held more than one entry, so it was
`r*n*64` bits of state with zero effect on any cycle count or result.

Same story here: the round/local/flat-index counters never gated
anything — `put_operands`/`get_result` fire every cycle regardless of
where they are in a "round," and the cycle counts you already measured
(772/388/260/196/132/100/68/52 for r=1..16) are exactly `768/r + 4`,
independent of `n`, which is the same signature their file calls out.
So `n` is now gone from the hardware and survives only as a testbench
label — hence 15 `(*synthesize*)` TB rows built from only 8 distinct DUTs,
matching their file's ratio exactly.

**On the "+4":** this is NOT the same 4-cycle latency their a\*b+c\*d lane
has. I traced `BF16Divider_pipeline`'s actual register chain
(`stage1`→`stage2`→`stage3`→`stage4`→`result_valid`) and it's **5**
register hops, not 4. The formula still comes out to `768/r + 4` because
of 0-indexing: the last column is column `(768/r - 1)`, and its result
lands 5 cycles later, so `(768/r - 1) + 5 = 768/r + 4`. The first draft
of the testbench I gave you got this arithmetic right but then added 2
*extra*, spurious cycles of its own (a `started` one-shot delay register,
plus splitting "collect the last result" and "report+advance" into two
separate rules) which is why the first run showed `cycles=390` against
an expected `388` for `r2_n128`. That's now fixed: `op_start` is captured
inline in the same rule that does the first real send, and the elapsed
time / MATCH-DIFF / PASS-FAIL report is computed inline in the same rule
that consumes the *last* result of the op — no extra rule-boundary cycles
sneak into the measurement anymore.

## One deliberate difference: the correctness check

Their TB re-runs the *same* combinational mult/add units the DUT uses as
its reference — enough to validate streaming/pipelining/routing, but by
their own comment it's a datapath check, not an IEEE-conformance check.
Division has no equivalently cheap live reference (re-running
`mkBF16Divider` against itself wouldn't catch a bug in `mkBF16Divider`).
So `Tb_BF16Divider_SIMD_AblationPPA.bsv` instead checks every result
against the same golden div8/div32 tables (bit-exact where the divisor is
a power of two, tolerance otherwise) used by every earlier divider
testbench in this project — unweakened, just restructured into the
simpler one-column-per-cycle streaming shape. This is strictly stronger
than the datapath-only check, not a step down.

## Building

Needs the Bluespec Compiler (`bsc`) and Verilator, which aren't available
in the sandbox this was written in — I was not able to actually run these
through `bsc`/`verilator` here, only check bracket/keyword balance by
hand. Please run a real build before trusting it:

```sh
./run_ppa_divider.sh sim       # build + simulate all 15 configs, print PASS/FAIL
./run_ppa_divider.sh verilog   # emit the 8 distinct synthesizable .v files
./run_ppa_divider.sh verbose r4_n64   # one config, full per-cycle trace
./run_ppa_divider.sh spot r4_n64      # just the 12 manual spot-check blocks
```

Or, to slot into your existing `run_all_tests.sh` harness instead, add a
target that loops `TESTS=("Tb_BF16Divider_SIMD_AblationPPA.bsv:mkTbDiv_r<R>n<N>_TB" ...)`
— note the actual module names here are `mkTbDiv_r<R>_n<N>` (no trailing
`_TB`), so adjust the module name if you wire it into that script instead
of `run_ppa_divider.sh`.

## Expected results (same 15 rows, same numbers as before)

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
