package BF16_SIMD;

import BF16::*;
import Vector::*;
import FIFOF::*;
import SpecialFIFOs::*;

interface IfcBF16_SIMD;
   method Action put_operands(BF16 a, BF16 b, BF16 c, BF16 d);
   method ActionValue#(BF16) get_result();
endinterface

(* synthesize *)
module mkBF16_SIMD(IfcBF16_SIMD);

   BF16MultiplierIFC mult1 <- mkBF16Multiplier();
   BF16MultiplierIFC mult2 <- mkBF16Multiplier();
   BF16AdderIFC      adder <- mkBF16Adder();

   FIFOF#(Tuple4#(BF16, BF16, BF16, BF16)) in_fifo  <- mkFIFOF();
   FIFOF#(Tuple2#(Bit#(16), Bit#(16)))     mid_fifo <- mkFIFOF();
   FIFOF#(BF16)                            out_fifo <- mkFIFOF();

`ifdef SIMD_DEBUG
   Reg#(Bit#(32)) cyc <- mkReg(0);
   rule rl_tick_dbg;
      cyc <= cyc + 1;
   endrule
`endif

   rule rl_multiply;
      match {.a, .b, .c, .d} = in_fifo.first;
      in_fifo.deq;
      let r1 = mult1.multiply(fromBF16(a), fromBF16(b));
      let r2 = mult2.multiply(fromBF16(c), fromBF16(d));
      mid_fifo.enq(tuple2(r1, r2));
`ifdef SIMD_DEBUG
      $display("[cyc %0d] DUT.rl_multiply FIRED  mult1=%h mult2=%h", cyc, r1, r2);
`endif
   endrule

   rule rl_add;
      match {.r1, .r2} = mid_fifo.first;
      mid_fifo.deq;
      let sum = adder.add(r1, r2);
      out_fifo.enq(toBF16(sum));
`ifdef SIMD_DEBUG
      $display("[cyc %0d] DUT.rl_add      FIRED  sum=%h", cyc, sum);
`endif
   endrule

   method Action put_operands(BF16 a, BF16 b, BF16 c, BF16 d);
      in_fifo.enq(tuple4(a, b, c, d));
   endmethod

   method ActionValue#(BF16) get_result();
      let r = out_fifo.first;
      out_fifo.deq;
      return r;
   endmethod

endmodule
endpackage