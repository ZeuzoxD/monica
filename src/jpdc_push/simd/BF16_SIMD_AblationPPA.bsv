package BF16_SIMD_AblationPPA;

import BF16::*;
import BF16_SIMD::*;
import Vector::*;
import FIFOF::*;
import SpecialFIFOs::*;

// ============================================================
// STREAMING PPA ABLATION DUT
//
// One generic module, two ablation axes:
//
//   r = number of parallel lanes. Each lane is one mkBF16_SIMD,
//       i.e. exactly 2 multipliers + 1 adder computing a*b + c*d.
//
//   n = depth of the per-lane elastic INPUT buffer, in elements.
//       Built from mkSizedBypassFIFOF, so an empty buffer is
//       combinationally transparent: it costs AREA and POWER but
//       adds ZERO cycles of latency. That is what makes n an
//       independent PPA axis - cycles/op depend only on r.
//
// Strictly streaming: put_operands accepts one column of r
// elements per cycle and get_result produces one column per
// cycle. There is no batch load, no operand storage, no state
// machine, and no notion of a "pass" anywhere in the hardware.
// Total work of 768 elements is a testbench-side loop of 768/r
// columns.
//
// Steady-state throughput is r elements/cycle; end-to-end
// latency is 4 cycles. Hence for the full 768-element tensor:
//
//        cycles = 768/r + 4        (independent of n)
// ============================================================

typedef Tuple4#(BF16, BF16, BF16, BF16) Operands;

// n is a phantom parameter on the interface: it does not appear in
// any method signature, it only selects the internal buffer depth.
interface IfcAblationPPA#(numeric type r, numeric type n);
   method Action put_operands(Vector#(r, BF16) a, Vector#(r, BF16) b,
                              Vector#(r, BF16) c, Vector#(r, BF16) d);
   method ActionValue#(Vector#(r, BF16)) get_result();
endinterface

module mkAblationPPA_Generic(IfcAblationPPA#(r, n))
   provisos (Add#(1, _unusedR, r),    // r >= 1
             Add#(2, _unusedN, n));   // n >= 2 (mkSizedBypassFIFOF minimum)

   Vector#(r, IfcBF16_SIMD)     lanes <- replicateM(mkBF16_SIMD());
   Vector#(r, FIFOF#(Operands)) ibuf  <- replicateM(mkSizedBypassFIFOF(valueOf(n)));

   // Hand one buffered column to the lanes each cycle. Because ibuf is a
   // BYPASS fifo, enq (in put_operands) is ordered before deq here, so on
   // an empty buffer the operands reach the lane in the SAME cycle they
   // were presented - the buffer adds depth, never delay.
   rule rl_drain;
      for (Integer l = 0; l < valueOf(r); l = l + 1) begin
         match {.a, .b, .c, .d} = ibuf[l].first;
         ibuf[l].deq;
         lanes[l].put_operands(a, b, c, d);
      end
   endrule

   method Action put_operands(Vector#(r, BF16) a, Vector#(r, BF16) b,
                              Vector#(r, BF16) c, Vector#(r, BF16) d);
      for (Integer l = 0; l < valueOf(r); l = l + 1)
         ibuf[l].enq(tuple4(a[l], b[l], c[l], d[l]));
   endmethod

   method ActionValue#(Vector#(r, BF16)) get_result();
      Vector#(r, BF16) res = newVector;
      for (Integer l = 0; l < valueOf(r); l = l + 1) begin
         let v <- lanes[l].get_result();
         res[l] = v;
      end
      return res;
   endmethod

endmodule

// ============================================================
// SYNTHESIS WRAPPERS - one per (r, n) config in the sweep.
// Each is a separate synthesis boundary, so each gives its own
// area/power number from the generated Verilog.
// ============================================================

// --- axis 1: sweep r at fixed n = 64 ---
typedef IfcAblationPPA#(1,  64)  Ifc_r1_n64;
typedef IfcAblationPPA#(2,  64)  Ifc_r2_n64;
typedef IfcAblationPPA#(3,  64)  Ifc_r3_n64;
typedef IfcAblationPPA#(4,  64)  Ifc_r4_n64;
typedef IfcAblationPPA#(6,  64)  Ifc_r6_n64;
typedef IfcAblationPPA#(12, 64)  Ifc_r12_n64;
// --- axis 2: sweep n at fixed r = 4 ---
typedef IfcAblationPPA#(4,  16)  Ifc_r4_n16;
typedef IfcAblationPPA#(4,  32)  Ifc_r4_n32;
typedef IfcAblationPPA#(4,  96)  Ifc_r4_n96;
typedef IfcAblationPPA#(4,  192) Ifc_r4_n192;
// --- mixed corners ---
typedef IfcAblationPPA#(8,  32)  Ifc_r8_n32;
typedef IfcAblationPPA#(8,  96)  Ifc_r8_n96;
typedef IfcAblationPPA#(2,  128) Ifc_r2_n128;
typedef IfcAblationPPA#(6,  128) Ifc_r6_n128;
typedef IfcAblationPPA#(16, 48)  Ifc_r16_n48;

(* synthesize *) module mkAblation_r1_n64  (Ifc_r1_n64);   let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r2_n64  (Ifc_r2_n64);   let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r3_n64  (Ifc_r3_n64);   let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r4_n64  (Ifc_r4_n64);   let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r6_n64  (Ifc_r6_n64);   let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r12_n64 (Ifc_r12_n64);  let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r4_n16  (Ifc_r4_n16);   let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r4_n32  (Ifc_r4_n32);   let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r4_n96  (Ifc_r4_n96);   let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r4_n192 (Ifc_r4_n192);  let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r8_n32  (Ifc_r8_n32);   let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r8_n96  (Ifc_r8_n96);   let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r2_n128 (Ifc_r2_n128);  let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r6_n128 (Ifc_r6_n128);  let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r16_n48 (Ifc_r16_n48);  let i <- mkAblationPPA_Generic; return i; endmodule

endpackage
