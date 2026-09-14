package BF16Divider_SIMD;

import BF16::*;
import BF16Divider_pipeline::*;
import Vector::*;
import FIFOF::*;
import SpecialFIFOs::*;

// ============================================================
// ONE LANE.
//
// Mirrors BF16_SIMD.bsv exactly: BF16_SIMD wraps "2 multipliers
// + 1 adder" behind put_operands/get_result; this wraps "the
// frozen 4-stage BF16Divider pipeline" behind the identical
// method shape. Same contract, different arithmetic inside.
//
// All pipelining, staging and hazard handling lives inside
// mkBF16Divider (BF16Divider_pipeline.bsv) -- untouched, still
// the separately-proven scalar divider. This file adds nothing
// but the uniform lane interface.
// ============================================================

interface IfcBF16Divider_SIMD;
   method Action put_operands(BF16 a, BF16 b);
   method ActionValue#(BF16) get_result();
   method Bool hasResult();
endinterface

(* synthesize *)
module mkBF16Divider_SIMD(IfcBF16Divider_SIMD);

   BF16DividerIFC div_core <- mkBF16Divider();

`ifdef SIMD_DEBUG
   Reg#(Bit#(32)) cyc <- mkReg(0);
   rule rl_tick_dbg;
      cyc <= cyc + 1;
   endrule
`endif

   method Action put_operands(BF16 a, BF16 b);
      div_core.put_data(fromBF16(a), fromBF16(b));
`ifdef SIMD_DEBUG
      $display("[cyc %0d] DUT.put_operands FIRED a=%h b=%h", cyc, fromBF16(a), fromBF16(b));
`endif
   endmethod

   method ActionValue#(BF16) get_result();
      let r <- div_core.getResult();
`ifdef SIMD_DEBUG
      $display("[cyc %0d] DUT.get_result   FIRED r=%h", cyc, r);
`endif
      return toBF16(r);
   endmethod

   // Explicit, top-level-checkable readiness - matches the idiom the
   // original (proven) BF16DividerSIMD_Generic.bsv / _Configs_TB.bsv used
   // (`dut.hasResult()` as the collect rule's own guard, checked BEFORE
   // calling getResult()), rather than relying solely on the implicit
   // ready signal threaded through get_result()'s ActionValue binding two
   // module layers up. Both should be equivalent, but this removes any
   // doubt and is what was actually verified working before.
   method Bool hasResult();
      return div_core.hasResult();
   endmethod

endmodule
endpackage
