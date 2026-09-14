package BF16Sigmoid_SIMD_AblationPPA;

import BF16::*;
import BF16Sigmoid_SIMD::*;
import Vector::*;

// ============================================================
// STREAMING PPA ABLATION DUT (sigmoid version)
//
//   r = number of parallel lanes. Each lane is one
//       mkBF16Sigmoid_SIMD, i.e. one frozen 4-stage BF16
//       sigmoid pipeline.
//
// This is a straight port of SigmoidVecN.bsv (mkSigmoidVectorN),
// which was ALREADY built in exactly this shape - a pure fan-out /
// fan-in over r independent lanes, no operand storage, no round/
// local bookkeeping, streaming one column of r elements per cycle.
// Only the naming and the 8 fixed-r synthesis targets are new here
// (SigmoidVecN.bsv itself is retired - its logic lives on here so
// there is one place, matching the divider file layout, rather
// than two files doing the same job).
//
// isIdle() (inputs_fed == outputs_collected) is dropped: nothing
// downstream in this design uses it (SigmoidVec768_Generic.bsv's
// caller-side busy/round/local bookkeeping, the thing that DID
// need it, is exactly the redundant-n layer this refactor removes
// - see README.md). get_result()'s own implicit guard already
// prevents under- or over-collection.
//
// Steady-state throughput is r elements/cycle; end-to-end latency
// is 5 cycles (mkBF16Sigmoid's 4 pipeline-stage registers,
// stage1->stage2->stage3->stage4, plus one more register hop for
// result_valid/result_data to latch after stage4 computes - same
// register chain shape as BF16Divider_pipeline, traced directly
// from BF16Sigmoid.bsv). Using 0-indexed column numbering (the
// last column is column cols-1, its result arrives 5 cycles
// later):
//
//        cycles = (768/r - 1) + 5 = 768/r + 4
//
// NOTE ON THE n AXIS
// -------------------
// SigmoidVec768_Generic.bsv (not carried into this design) wrapped
// this exact module in a busy/input_buffer/output_buffer state
// machine using round/local/flat-index counters to describe an
// (r, n) SIMD/BRAM addressing scheme - the identical pattern
// BF16DividerSIMD_Generic.bsv used, and which was already measured
// to be functionally redundant for the divider (see
// BF16Divider_SIMD_AblationPPA.bsv's note). Same conclusion here:
// n never gated anything real, so it is dropped from the hardware
// and survives only as a testbench label, which is why this file
// exposes 8 synthesis targets (one per distinct r) rather than 15.
// ============================================================

interface IfcSigmoidAblationPPA#(numeric type r);
   method Action put_operands(Vector#(r, BF16) x);
   method ActionValue#(Vector#(r, BF16)) get_result();
   method Bool hasResult();
endinterface

module mkSigmoidAblationPPA_Generic(IfcSigmoidAblationPPA#(r))
   provisos (Add#(1, _unusedR, r));   // r >= 1

   Vector#(r, IfcBF16Sigmoid_SIMD) lanes <- replicateM(mkBF16Sigmoid_SIMD());

   method Action put_operands(Vector#(r, BF16) x);
      for (Integer l = 0; l < valueOf(r); l = l + 1)
         lanes[l].put_operand(x[l]);
   endmethod

   method ActionValue#(Vector#(r, BF16)) get_result();
      Vector#(r, BF16) res = newVector;
      for (Integer l = 0; l < valueOf(r); l = l + 1) begin
         let v <- lanes[l].get_result();
         res[l] = v;
      end
      return res;
   endmethod

   // Combined readiness = AND of all r lanes, exactly like the
   // original SigmoidVecN.bsv did for lane 0 alone under the
   // assumption all lanes stay in lockstep (identical fixed latency,
   // fed on the identical schedule). Checked explicitly here rather
   // than relying only on get_result()'s implicit guard - the same
   // hardening applied to the divider after its collect-rule bug.
   method Bool hasResult();
      Bool ready = True;
      for (Integer l = 0; l < valueOf(r); l = l + 1)
         ready = ready && lanes[l].hasResult();
      return ready;
   endmethod

endmodule

// ============================================================
// SYNTHESIS TARGETS - one per distinct lane count in the sweep.
//   r  : 1   2   3   4   6   8   12  16
//   cyc: 772 388 260 196 132 100 68  52
// ============================================================
typedef IfcSigmoidAblationPPA#(1)  IfcSig_r1;
typedef IfcSigmoidAblationPPA#(2)  IfcSig_r2;
typedef IfcSigmoidAblationPPA#(3)  IfcSig_r3;
typedef IfcSigmoidAblationPPA#(4)  IfcSig_r4;
typedef IfcSigmoidAblationPPA#(6)  IfcSig_r6;
typedef IfcSigmoidAblationPPA#(8)  IfcSig_r8;
typedef IfcSigmoidAblationPPA#(12) IfcSig_r12;
typedef IfcSigmoidAblationPPA#(16) IfcSig_r16;

(* synthesize *) module mkSigmoidAblation_r1  (IfcSig_r1);  let i <- mkSigmoidAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkSigmoidAblation_r2  (IfcSig_r2);  let i <- mkSigmoidAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkSigmoidAblation_r3  (IfcSig_r3);  let i <- mkSigmoidAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkSigmoidAblation_r4  (IfcSig_r4);  let i <- mkSigmoidAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkSigmoidAblation_r6  (IfcSig_r6);  let i <- mkSigmoidAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkSigmoidAblation_r8  (IfcSig_r8);  let i <- mkSigmoidAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkSigmoidAblation_r12 (IfcSig_r12); let i <- mkSigmoidAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkSigmoidAblation_r16 (IfcSig_r16); let i <- mkSigmoidAblationPPA_Generic; return i; endmodule

endpackage
