package BF16Sigmoid_SIMD;

import BF16::*;
import BF16Sigmoid::*;

// ============================================================
// ONE LANE.
//
// Mirrors BF16Divider_SIMD.bsv (which itself mirrors BF16_SIMD.bsv):
// a single frozen, proven pipeline wrapped behind a uniform
// put_operand/get_result/hasResult method shape. mkBF16Sigmoid
// (BF16Sigmoid.bsv) already exposes exactly this shape
// (put_data/getResult/hasResult) - this wrapper only renames
// put_data -> put_operand so the naming is uniform with the
// divider family (single operand here, vs. two for divide), and
// gives sigmoid its own (*synthesize*) lane boundary consistent
// with the rest of the design.
// ============================================================

interface IfcBF16Sigmoid_SIMD;
   method Action put_operand(BF16 x);
   method ActionValue#(BF16) get_result();
   method Bool hasResult();
endinterface

(* synthesize *)
module mkBF16Sigmoid_SIMD(IfcBF16Sigmoid_SIMD);

   BF16SigmoidIfc sig_core <- mkBF16Sigmoid();

   method Action put_operand(BF16 x);
      sig_core.put_data(x);
   endmethod

   method ActionValue#(BF16) get_result();
      let r <- sig_core.getResult();
      return r;
   endmethod

   method Bool hasResult();
      return sig_core.hasResult();
   endmethod

endmodule
endpackage
