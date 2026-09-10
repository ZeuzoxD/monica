package BF16_SIMD_AblationPPA;

import BF16::*;
import BF16_SIMD::*;
import Vector::*;

// ============================================================
// STREAMING PPA ABLATION DUT
//
//   r = number of parallel lanes. Each lane is one mkBF16_SIMD,
//       i.e. exactly 2 multipliers + 1 adder computing a*b + c*d.
//
// That is the entire design. It is a pure fan-out / fan-in over r
// independent lanes: put_operands hands one column of r elements
// straight to the lanes, get_result collects one column back. No
// operand storage, no state machine, no input buffering, no
// notion of a "pass" - each lane's own in/mid/out FIFOs are the
// only state, and they are what makes it a pipeline.
//
// Strictly streaming: one column in per cycle, one column out per
// cycle, r elements wide. The 768-element workload is a
// testbench-side loop of 768/r columns.
//
// Steady-state throughput is r elements/cycle; end-to-end latency
// is 4 cycles. For the full 768-element tensor:
//
//        cycles = 768/r + 4
//
// NOTE ON THE n AXIS
// ------------------
// An earlier revision carried a per-lane elastic input buffer of
// depth n (mkSizedBypassFIFOF) purely so that the n column of the
// config sweep had a hardware meaning. It was measured to be
// functionally redundant - the lanes already hold their own input
// FIFOs, and the testbench feeds exactly one column per cycle, so
// the buffer never held more than one entry and removing it left
// every cycle count and every result bit-identical.
//
// It was NOT free: r*n*64 bits of storage against r*224 bits of
// real lane state, i.e. up to 55x the compute it was attached to.
// Keeping it would have meant the synthesised area and power
// numbers described the buffer rather than the datapath - the
// same defect that made the old batch ablation's area curve flat.
//
// So n is gone from the hardware. It survives only as a testbench
// label, which is why this file exposes 8 synthesis targets (one
// per distinct r) rather than 15: the 15-row sweep contains only
// 8 distinct designs.
// ============================================================

interface IfcAblationPPA#(numeric type r);
   method Action put_operands(Vector#(r, BF16) a, Vector#(r, BF16) b,
                              Vector#(r, BF16) c, Vector#(r, BF16) d);
   method ActionValue#(Vector#(r, BF16)) get_result();
endinterface

module mkAblationPPA_Generic(IfcAblationPPA#(r))
   provisos (Add#(1, _unusedR, r));   // r >= 1

   Vector#(r, IfcBF16_SIMD) lanes <- replicateM(mkBF16_SIMD());

   // Same-cycle parallel dispatch: one method invocation drives all
   // r lanes, so column k enters every lane on the same edge.
   method Action put_operands(Vector#(r, BF16) a, Vector#(r, BF16) b,
                              Vector#(r, BF16) c, Vector#(r, BF16) d);
      for (Integer l = 0; l < valueOf(r); l = l + 1)
         lanes[l].put_operands(a[l], b[l], c[l], d[l]);
   endmethod

   // Implicit guard is the AND of all r lanes' out_fifo.notEmpty.
   // Safe because every lane has identical fixed latency and is fed
   // on the identical schedule, so they always fill in lockstep.
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
// SYNTHESIS TARGETS - one per distinct lane count in the sweep.
// Each is its own synthesis boundary => its own area/power point.
//   r  : 1   2   3   4   6   8   12  16
//   cyc: 772 388 260 196 132 100 68  52
// ============================================================
typedef IfcAblationPPA#(1)  Ifc_r1;
typedef IfcAblationPPA#(2)  Ifc_r2;
typedef IfcAblationPPA#(3)  Ifc_r3;
typedef IfcAblationPPA#(4)  Ifc_r4;
typedef IfcAblationPPA#(6)  Ifc_r6;
typedef IfcAblationPPA#(8)  Ifc_r8;
typedef IfcAblationPPA#(12) Ifc_r12;
typedef IfcAblationPPA#(16) Ifc_r16;

(* synthesize *) module mkAblation_r1  (Ifc_r1);  let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r2  (Ifc_r2);  let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r3  (Ifc_r3);  let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r4  (Ifc_r4);  let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r6  (Ifc_r6);  let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r8  (Ifc_r8);  let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r12 (Ifc_r12); let i <- mkAblationPPA_Generic; return i; endmodule
(* synthesize *) module mkAblation_r16 (Ifc_r16); let i <- mkAblationPPA_Generic; return i; endmodule

endpackage
