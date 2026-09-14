package TorchMaximum_SIMD_AblationPPA;

import BF16::*;
import TorchMaximum_SIMD::*;
import Vector::*;

// ============================================================
// STREAMING PPA ABLATION DUT (elementwise-max version)
//
//   r = number of parallel max/compare lanes.
//
// This absorbs the role TorchMaximumN.bsv played for the original
// (r,n) design: a pure fan-out/fan-in over r independent lanes.
// It is not carried forward as a separate file - its logic lives
// on here, matching the divider/sigmoid file layout (one file per
// role, not two files doing the same job).
//
// UNLIKE the divider/sigmoid ablation DUTs, this module has ZERO
// registers and ZERO rules. get_max() is a plain combinational
// value method: every lane's mkTorchMaximum_SIMD is itself
// combinational, so composing r of them is still combinational -
// there is no clock edge anywhere in this module. Whatever calls
// get_max() gets its answer in the same cycle it asked, always.
// That is a real, correct PPA property of this engine (max is a
// pure selection, not an iterative computation), not a
// simplification on my part.
//
// Consequently there is no put_operands/get_result split and no
// hasResult() here (unlike the divider/sigmoid AblationPPA
// interfaces) - there is nothing for either to report. A caller
// that wants a "hasResult()" answer for this DUT already has it:
// True, always, unconditionally. Adding a method that can only
// ever return one value would be noise, not information.
//
// NOTE ON THE n AXIS
// -------------------
// TorchMaximumVec768_Generic.bsv (not carried into this design)
// wrapped this same fan-out in a busy/input_a/input_b/output_buffer
// state machine using round/local/flat-index counters, identical
// in spirit to BF16DividerSIMD_Generic.bsv and
// SigmoidVec768_Generic.bsv - both already shown to carry that
// bookkeeping as pure overhead with zero effect on any cycle count
// or result. Same conclusion applies here (if anything more
// clearly: this DUT has no internal state at all for n to describe
// in the first place). n survives only as a testbench label, hence
// 8 synthesis targets (one per distinct r) covering all 15 (r,n)
// sweep rows.
// ============================================================

interface IfcMaxAblationPPA#(numeric type r);
   method Vector#(r, BF16) get_max(Vector#(r, BF16) a, Vector#(r, BF16) b);
endinterface

module mkMaxAblationPPA_Generic(IfcMaxAblationPPA#(r))
   provisos (Add#(1, _unusedR, r));   // r >= 1

   Vector#(r, IfcTorchMaximum_SIMD) lanes <- replicateM(mkTorchMaximum_SIMD());

   method Vector#(r, BF16) get_max(Vector#(r, BF16) a, Vector#(r, BF16) b);
      Vector#(r, BF16) res = newVector;
      for (Integer l = 0; l < valueOf(r); l = l + 1)
         res[l] = lanes[l].get_max(a[l], b[l]);
      return res;
   endmethod

endmodule

// ============================================================
// SYNTHESIS TARGETS - one per distinct lane count in the sweep.
//   r   : 1   2   3   4   6   8   12  16
//   cyc : 767 383 255 191 127 95  63  47   <- = 768/r - 1 (see note below)
//
// Why "-1" and not "768/r" exactly, or "768/r + 4" like the
// divider/sigmoid: the testbench measures elapsed = cyc(at the
// LAST column processed) - cyc(at the FIRST column processed),
// using the identical convention the divider/sigmoid TBs use
// (elapsed = (cols-1) + latency). Divider/sigmoid have latency=5
// registered cycles, giving cols+4. This engine has latency=0
// (purely combinational, feed and result land in the SAME cycle),
// giving (cols-1)+0 = cols-1. It is the same formula throughout
// the family; only the latency term differs, and here it's
// genuinely zero.
// ============================================================
typedef IfcMaxAblationPPA#(1)  IfcMax_r1;
typedef IfcMaxAblationPPA#(2)  IfcMax_r2;
typedef IfcMaxAblationPPA#(3)  IfcMax_r3;
typedef IfcMaxAblationPPA#(4)  IfcMax_r4;
typedef IfcMaxAblationPPA#(6)  IfcMax_r6;
typedef IfcMaxAblationPPA#(8)  IfcMax_r8;
typedef IfcMaxAblationPPA#(12) IfcMax_r12;
typedef IfcMaxAblationPPA#(16) IfcMax_r16;

(* synthesize *) module mkMaxAblation_r1  (IfcMax_r1);  let i <- mkMaxAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkMaxAblation_r2  (IfcMax_r2);  let i <- mkMaxAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkMaxAblation_r3  (IfcMax_r3);  let i <- mkMaxAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkMaxAblation_r4  (IfcMax_r4);  let i <- mkMaxAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkMaxAblation_r6  (IfcMax_r6);  let i <- mkMaxAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkMaxAblation_r8  (IfcMax_r8);  let i <- mkMaxAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkMaxAblation_r12 (IfcMax_r12); let i <- mkMaxAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkMaxAblation_r16 (IfcMax_r16); let i <- mkMaxAblationPPA_Generic; return i; endmodule

endpackage
