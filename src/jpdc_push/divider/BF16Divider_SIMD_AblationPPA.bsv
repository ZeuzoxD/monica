package BF16Divider_SIMD_AblationPPA;

import BF16::*;
import BF16Divider_SIMD::*;
import Vector::*;

// ============================================================
// STREAMING PPA ABLATION DUT (divider version)
//
//   r = number of parallel lanes. Each lane is one
//       mkBF16Divider_SIMD, i.e. one frozen 4-stage BF16
//       divider pipeline.
//
// That is the entire design. It is a pure fan-out / fan-in over
// r independent lanes: put_operands hands one column of r
// elements straight to the lanes, get_result collects one
// column back. No operand storage, no state machine, no input
// buffering, no notion of a "round" - each lane's own internal
// pipeline registers are the only state.
//
// Strictly streaming: one column in per cycle, one column out
// per cycle, r elements wide. The 768-element workload is a
// testbench-side loop of 768/r columns.
//
// Steady-state throughput is r elements/cycle; end-to-end
// latency is 5 cycles (mkBF16Divider's 4 pipeline-stage
// registers, stage1->stage2->stage3->stage4, plus one more
// register hop for result_valid/result_data to latch after
// stage4 computes - traced directly from BF16Divider_pipeline.bsv,
// NOT assumed to match the a*b+c*d lane this file's structure is
// modeled on, which has a different, shorter register chain).
// For the full 768-element vector, using 0-indexed column
// numbering (the last column is column cols-1, its result
// arrives 5 cycles later):
//
//        cycles = (768/r - 1) + 5 = 768/r + 4
//
// NOTE ON THE n AXIS
// ------------------
// The previous generation of this design (BF16DividerSIMD_Generic
// / _Configs / _Configs_TB) carried an explicit "n" parameter as
// real hardware: a pair of round/local/flat-index counters
// computed on every put_data/getResult call, sized to describe
// an (r, n) SIMD/BRAM addressing scheme.
//
// That metadata was never load-bearing. It was measured to be
// functionally redundant in exactly the way this file's sibling
// (BF16_SIMD_AblationPPA.bsv) measured its own per-lane elastic
// buffer to be redundant: the lane pipelines already hold all
// the state that matters, and the testbench feeds exactly one
// column per cycle, so the round/local counters never described
// anything the hardware itself needed. Every cycle count and
// every result was bit-identical with or without them.
//
// It was NOT free: two 32-bit counters plus a Vector#(r,Bit#(32))
// flat-index computation on every single cycle, attached to
// nothing but a label. Keeping it would have meant the
// synthesised area and power numbers described bookkeeping
// rather than the divider datapath.
//
// So n is gone from the hardware here too. It survives only as
// a testbench label (see Tb_BF16Divider_SIMD_AblationPPA.bsv),
// which is why this file exposes 8 synthesis targets (one per
// distinct r) rather than 15: the 15-row sweep contains only 8
// distinct designs.
// ============================================================

interface IfcDividerAblationPPA#(numeric type r);
   method Action put_operands(Vector#(r, BF16) a, Vector#(r, BF16) b);
   method ActionValue#(Vector#(r, BF16)) get_result();
   method Bool hasResult();
endinterface

module mkDividerAblationPPA_Generic(IfcDividerAblationPPA#(r))
   provisos (Add#(1, _unusedR, r));   // r >= 1

   Vector#(r, IfcBF16Divider_SIMD) lanes <- replicateM(mkBF16Divider_SIMD());

   // Same-cycle parallel dispatch: one method invocation drives all
   // r lanes, so column k enters every lane on the same edge.
   method Action put_operands(Vector#(r, BF16) a, Vector#(r, BF16) b);
      for (Integer l = 0; l < valueOf(r); l = l + 1)
         lanes[l].put_operands(a[l], b[l]);
   endmethod

   // Implicit guard is the AND of all r lanes' internal result-ready
   // signals. Safe because every lane has identical fixed latency
   // and is fed on the identical schedule, so they always fill in
   // lockstep.
   method ActionValue#(Vector#(r, BF16)) get_result();
      Vector#(r, BF16) res = newVector;
      for (Integer l = 0; l < valueOf(r); l = l + 1) begin
         let v <- lanes[l].get_result();
         res[l] = v;
      end
      return res;
   endmethod

   // Combined readiness = AND of all r lanes. Explicit, checkable at the
   // rule level by a caller (exactly how the proven original design
   // gated its collect rule) rather than only implicitly via get_result().
   method Bool hasResult();
      Bool ready = True;
      for (Integer l = 0; l < valueOf(r); l = l + 1)
         ready = ready && lanes[l].hasResult();
      return ready;
   endmethod

endmodule

// ============================================================
// SYNTHESIS TARGETS - one per distinct lane count in the sweep.
// Each is its own synthesis boundary => its own area/power point.
//   r  : 1   2   3   4   6   8   12  16
//   cyc: 772 388 260 196 132 100 68  52
// ============================================================
typedef IfcDividerAblationPPA#(1)  IfcDiv_r1;
typedef IfcDividerAblationPPA#(2)  IfcDiv_r2;
typedef IfcDividerAblationPPA#(3)  IfcDiv_r3;
typedef IfcDividerAblationPPA#(4)  IfcDiv_r4;
typedef IfcDividerAblationPPA#(6)  IfcDiv_r6;
typedef IfcDividerAblationPPA#(8)  IfcDiv_r8;
typedef IfcDividerAblationPPA#(12) IfcDiv_r12;
typedef IfcDividerAblationPPA#(16) IfcDiv_r16;

(* synthesize *) module mkDividerAblation_r1  (IfcDiv_r1);  let i <- mkDividerAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkDividerAblation_r2  (IfcDiv_r2);  let i <- mkDividerAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkDividerAblation_r3  (IfcDiv_r3);  let i <- mkDividerAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkDividerAblation_r4  (IfcDiv_r4);  let i <- mkDividerAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkDividerAblation_r6  (IfcDiv_r6);  let i <- mkDividerAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkDividerAblation_r8  (IfcDiv_r8);  let i <- mkDividerAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkDividerAblation_r12 (IfcDiv_r12); let i <- mkDividerAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkDividerAblation_r16 (IfcDiv_r16); let i <- mkDividerAblationPPA_Generic; return i; endmodule

endpackage
