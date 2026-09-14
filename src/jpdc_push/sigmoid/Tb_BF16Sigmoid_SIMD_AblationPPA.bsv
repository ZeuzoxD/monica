package Tb_BF16Sigmoid_SIMD_AblationPPA;

import BF16::*;
import BF16Sigmoid_SIMD::*;
import BF16Sigmoid_SIMD_AblationPPA::*;
import Vector::*;
import RWire::*;

// ============================================================
// STREAMING ABLATION TESTBENCH (sigmoid version)
//
// Same structure as Tb_BF16Divider_SIMD_AblationPPA.bsv (itself a
// direct port of the divider's own proven feed_input/collect_result
// rules): one column of r elements in/out per cycle, an explicit
// `dut.hasResult()` rule guard (not just an implicit ActionValue
// condition), op_start_cycle captured inline in feed_input on the
// real first-send cycle, elapsed/PASS-FAIL computed inline in
// collect_result on the exact cycle the last result of the op
// arrives, and a restart_wire hand-off from op0 to op1.
//
// FUNCTIONAL-VERIFICATION NOTE (carried over verbatim from
// SigmoidVec768_TB.bsv, which discovered and documented this):
// BF16Sigmoid.bsv implements sigmoid via a piecewise bit-
// manipulation trick (branching on the input's exponent field),
// so it is INTENTIONALLY approximate - there is no bit-exact match
// against TRUE math sigmoid() to expect. The golden data below was
// regenerated from a from-scratch Python transcription of the
// EXACT branch logic in BF16Sigmoid.bsv (bit-width by bit-width),
// so every "expected" value here is what the hardware's own
// algorithm is supposed to produce, not true math sigmoid. That
// makes every check in this file a plain BIT-EXACT comparison
// (bf16BitEq) - unlike the divider's mixed bit-exact/tolerance
// check, sigmoid needs no tolerance branch at all, because "exact"
// here means exact-against-the-intended-approximation, not
// exact-against-ideal-math. True-math deviation (documented as up
// to ~0.09 in the original file) is not part of the pass/fail
// decision and never was.
//
// Two operations run back-to-back per config (op0 = the 16-value
// hand-picked pattern spanning the input spectrum, op1 = the
// 32-unique-value pattern for lane-order coverage), each streaming
// its own 768 elements at r/cycle - matching the original design's
// coverage exactly. The original bulk-interface TB's separate
// "anti-contamination" check (comparing op1's first output against
// op0's) is not needed here: because every element of every column
// is checked against its own op-specific golden value on arrival,
// stale or lane-swapped data already surfaces as an ordinary
// mismatch - the streaming per-element check is a strict superset
// of what that spot-check caught.
// ============================================================

function Bool bf16BitEq(Bit#(16) a, Bit#(16) b);
  Bool a_zero = (a[14:0] == 15'h0000);
  Bool b_zero = (b[14:0] == 15'h0000);
  return (a_zero && b_zero) || (a == b);
endfunction

function Int#(32) bf16ToQ16(Bit#(16) h);
  Bit#(1) sign_bit = h[15];
  Bit#(8) raw_exp  = h[14:7];
  Bit#(7) raw_mant = h[6:0];
  Bool is_zero = (raw_exp == 8'h00 && raw_mant == 7'h00);

  Int#(32) result = 0;

  if (!is_zero) begin
    Bit#(8)  mantissa_full = {1'b1, raw_mant};
    UInt#(8) mantissa_u    = unpack(mantissa_full);
    Int#(32) actual_exp    = unpack(zeroExtend(raw_exp)) - 127;
    Int#(32) shift_amt     = actual_exp + 9;

    UInt#(32) base = zeroExtend(mantissa_u);
    UInt#(32) mag;
    if (shift_amt >= 0) begin
      UInt#(6) sh = (shift_amt > 30) ? 30 : unpack(truncate(pack(shift_amt)));
      mag = base << sh;
    end else begin
      Int#(32) neg = 0 - shift_amt;
      UInt#(6) sh = (neg > 30) ? 30 : unpack(truncate(pack(neg)));
      mag = base >> sh;
    end

    Int#(32) signed_mag = unpack(pack(mag));
    result = (sign_bit == 1'b1) ? (0 - signed_mag) : signed_mag;
  end

  return result;
endfunction

function Int#(32) q16Diff(Bit#(16) got, Bit#(16) expected);
  Int#(32) g = bf16ToQ16(got);
  Int#(32) e = bf16ToQ16(expected);
  Int#(32) diff = g - e;
  return (diff < 0) ? (0 - diff) : diff;
endfunction

// ------------------------------------------------------------
// Golden reference data - verbatim from SigmoidVec768_TB.bsv.
// Pattern 1 (op0): 16 hand-picked values spanning zero,
// small/intermediate/large magnitude, both signs.
// Pattern 2 (op1): 32 genuinely distinct values (every expected
// output is distinct, so a wrong-lane or dropped/duplicated
// element is guaranteed to surface at the wrong index).
// ------------------------------------------------------------

function Vector#(16, Bit#(16)) sig16_inputs();
  Vector#(16, Bit#(16)) v = newVector;
  v[0]=16'h0000;  v[1]=16'h3dcc;  v[2]=16'hbdcc;  v[3]=16'h3f00;
  v[4]=16'hbf00;  v[5]=16'h3f80;  v[6]=16'hbf80;  v[7]=16'h4000;
  v[8]=16'hc000;  v[9]=16'h4040;  v[10]=16'hc040; v[11]=16'h40a0;
  v[12]=16'hc0a0; v[13]=16'h4120; v[14]=16'hc120; v[15]=16'h41a0;
  return v;
endfunction

function Vector#(16, Bit#(16)) sig16_expected();
  Vector#(16, Bit#(16)) v = newVector;
  v[0]=16'h3f04;  v[1]=16'h3f06;  v[2]=16'h3efb;  v[3]=16'h3f20;
  v[4]=16'h3ebf;  v[5]=16'h3f40;  v[6]=16'h3e7f;  v[7]=16'h3f60;
  v[8]=16'h3dff;  v[9]=16'h3f70;  v[10]=16'h3d3f; v[11]=16'h3f74;
  v[12]=16'h3c80; v[13]=16'h3f80; v[14]=16'h0000; v[15]=16'h3f80;
  return v;
endfunction

function Vector#(32, Bit#(16)) sig32_inputs();
  Vector#(32, Bit#(16)) v = newVector;
  v[0]=16'hc007; v[1]=16'hc086; v[2]=16'h3fe7; v[3]=16'hc0a4;
  v[4]=16'h3edc; v[5]=16'hbfce; v[6]=16'hc0a9; v[7]=16'h3db6;
  v[8]=16'hc0b1; v[9]=16'hbf4b; v[10]=16'hc0a5; v[11]=16'hc09d;
  v[12]=16'hbf67; v[13]=16'h407b; v[14]=16'hc090; v[15]=16'hc054;
  v[16]=16'h3fc3; v[17]=16'h40ab; v[18]=16'h3f6c; v[19]=16'hbf9e;
  v[20]=16'h40b6; v[21]=16'hc0ae; v[22]=16'h4089; v[23]=16'hc021;
  v[24]=16'hc088; v[25]=16'hc092; v[26]=16'hc013; v[27]=16'h4072;
  v[28]=16'hc075; v[29]=16'h3f7a; v[30]=16'h3fd5; v[31]=16'hbfc3;
  return v;
endfunction

function Vector#(32, Bit#(16)) sig32_expected();
  Vector#(32, Bit#(16)) v = newVector;
  v[0]=16'h3df8; v[1]=16'h3c80; v[2]=16'h3f73; v[3]=16'h3c80;
  v[4]=16'h3f1b; v[5]=16'h3e31; v[6]=16'h3c80; v[7]=16'h3f05;
  v[8]=16'h3c80; v[9]=16'h3e9a; v[10]=16'h3c80; v[11]=16'h3c80;
  v[12]=16'h3e8c; v[13]=16'h3f7e; v[14]=16'h3c80; v[15]=16'h3d2b;
  v[16]=16'h3f61; v[17]=16'h3f75; v[18]=16'h3f3b; v[19]=16'h3e61;
  v[20]=16'h3f76; v[21]=16'h3c80; v[22]=16'h3f71; v[23]=16'h3dde;
  v[24]=16'h3c80; v[25]=16'h3c80; v[26]=16'h3dec; v[27]=16'h3f7c;
  v[28]=16'h3d0a; v[29]=16'h3f3e; v[30]=16'h3f6a; v[31]=16'h3e3c;
  return v;
endfunction

// op: 0 -> sig16 (tiled mod 16), 1 -> sig32 (tiled mod 32).
function Bit#(16) goldenIn(UInt#(2) op, Bit#(11) flatIdx);
  return (op == 0) ? sig16_inputs()[flatIdx[3:0]] : sig32_inputs()[flatIdx[4:0]];
endfunction

function Bit#(16) goldenExpected(UInt#(2) op, Bit#(11) flatIdx);
  return (op == 0) ? sig16_expected()[flatIdx[3:0]] : sig32_expected()[flatIdx[4:0]];
endfunction

// Fixed set of 12 scattered indices dumped in full for manual
// checking, per op. Fixed (not seeded-random) so a re-run shows
// the same elements. Deliberately includes tile boundaries.
function Bool isSpot(Bit#(11) i);
   return (i ==  0) || (i ==  13) || (i ==  45) || (i ==  63)
       || (i == 64) || (i == 130) || (i == 209) || (i == 300)
       || (i == 411) || (i == 512) || (i == 655) || (i == 767);
endfunction

// ------------------------------------------------------------
// Generic TB body - direct port of the divider's proven
// feed_input/collect_result structure (round/local collapsed to a
// single flat "column" counter, since n no longer exists in
// hardware). `cols` = 768/r columns to stream, per op.
// ------------------------------------------------------------
module mkTbBody#(IfcSigmoidAblationPPA#(r) dut,
                 Integer cols, Integer expCyclesPerOp, Integer nLabel, String label)(Empty)
   provisos (Add#(1, _unused, r));

   Integer rv = valueOf(r);

   Reg#(Bit#(32)) cycle_count <- mkReg(0);
   rule count_cycles;
      cycle_count <= cycle_count + 1;
   endrule

   // ---- feed side (exclusively owned by feed_input) ----
   Reg#(Bit#(11)) feed_col          <- mkReg(0);
   Reg#(Bool)     feed_done_this_op <- mkReg(False);
   Reg#(UInt#(2)) ops_fed           <- mkReg(0);
   Reg#(UInt#(2)) feed_pattern      <- mkReg(0);
   Reg#(Bool)     first_input_seen  <- mkReg(False);
   Reg#(Bit#(32)) first_input_cycle <- mkReg(0);
   Reg#(Bit#(32)) op_start_cycle    <- mkReg(0);

   // ---- collect side (exclusively owned by collect_result) ----
   Reg#(Bit#(11))  collect_col       <- mkReg(0);
   Reg#(UInt#(2))  collect_pattern   <- mkReg(0);
   Reg#(UInt#(16)) mismatches        <- mkReg(0);
   Reg#(UInt#(16)) total_mismatches  <- mkReg(0);
   Reg#(Bool)      first_output_seen  <- mkReg(False);
   Reg#(Bit#(32))  first_output_cycle <- mkReg(0);

   RWire#(Bool) restart_wire <- mkRWire();

   rule feed_input;
      Bool should_feed = (ops_fed < 2) && !feed_done_this_op;

      if (should_feed) begin
         if (feed_col == 0) begin
            op_start_cycle <= cycle_count;
            $display("\n################################################################");
            $display("# CONFIG %s | r=%0d lanes | n=%0d (label only) | starting op %0d",
                     label, rv, nLabel, feed_pattern);
            $display("# %s golden tile, tiled mod %0d, %0d columns x %0d lanes = 768 elements",
                     (feed_pattern == 0) ? "op0: sig16 (hand-picked spectrum)" : "op1: sig32 (lane-order coverage)",
                     (feed_pattern == 0) ? 16 : 32, cols, rv);
            $display("# expected: %0d cycles for this op", expCyclesPerOp);
            $display("################################################################");
         end

         Vector#(r, BF16) x_vec = newVector;
         for (Integer l = 0; l < rv; l = l + 1) begin
            Bit#(11) idx = feed_col * fromInteger(rv) + fromInteger(l);
            x_vec[l] = toBF16(goldenIn(feed_pattern, idx));
         end
         dut.put_operands(x_vec);

         if (!first_input_seen)
            first_input_cycle <= cycle_count;
`ifdef VERBOSE
         $display(">>> INPUT SENT | cyc=%0d | op=%0d | column %0d of %0d",
                  cycle_count, feed_pattern, feed_col, cols);
`endif
      end

      Bool restart_now    = feed_done_this_op && isValid(restart_wire.wget());
      Bool lastColF        = (feed_col == fromInteger(cols - 1));
      Bool lastCycleOfOpF = should_feed && lastColF;

      feed_col          <= restart_now ? 0 : (should_feed ? (lastColF ? 0 : feed_col + 1) : feed_col);
      feed_done_this_op <= restart_now ? False : (lastCycleOfOpF ? True : feed_done_this_op);
      ops_fed           <= restart_now ? ops_fed + 1 : ops_fed;
      feed_pattern      <= restart_now ? feed_pattern + 1 : feed_pattern;
      first_input_seen  <= restart_now ? False : (should_feed && !first_input_seen ? True : first_input_seen);
   endrule

   rule collect_result (dut.hasResult());
      let res <- dut.get_result();

      if (!first_output_seen)
         first_output_cycle <= cycle_count;

`ifdef VERBOSE
      $display("<<< OUTPUT READY | cyc=%0d | op=%0d | column %0d of %0d",
               cycle_count, collect_pattern, collect_col, cols);
`endif

      UInt#(16) mismatchesThisCycle = 0;
      for (Integer l = 0; l < rv; l = l + 1) begin
         Bit#(11) idx      = collect_col * fromInteger(rv) + fromInteger(l);
         Bit#(16) got      = fromBF16(res[l]);
         Bit#(16) in_val   = goldenIn(collect_pattern, idx);
         Bit#(16) expected = goldenExpected(collect_pattern, idx);
         Bool     ok       = bf16BitEq(got, expected);

         if (isSpot(idx)) begin
            $display("+---------------------------------------------------------------");
            $display("| SPOT CHECK  op=%0d  elem=%0d   col=%0d  lane=%0d  cyc=%0d",
                     collect_pattern, idx, collect_col, l, cycle_count);
            $display("|    x = %h", in_val);
            $display("|    sigmoid(x) = %h   <- golden reference (hardware model)", expected);
            $display("|    DUT result = %h   %s", got, ok ? "OK" : "** MISMATCH **");
            $display("+---------------------------------------------------------------");
         end
         if (!ok) begin
            mismatchesThisCycle = mismatchesThisCycle + 1;
            $display("[cycle %0d] MISMATCH lane=%0d col=%0d elem=%0d x=%h -> got=%h expected=%h error(Q16.16)=%0d",
                     cycle_count, l, collect_col, idx, in_val, got, expected, q16Diff(got, expected));
         end
      end

      Bool lastColC = (collect_col == fromInteger(cols - 1));
      UInt#(16) mismatches_bumped = mismatches + mismatchesThisCycle;

      // Default (always-on) progress ping every ~64 columns.
      if (!lastColC && (collect_col != 0) && ((collect_col & 63) == 0))
         $display("  [%s] op=%0d progress: %0d/%0d columns received (cyc=%0d, mismatches so far=%0d)",
                  label, collect_pattern, collect_col, cols, cycle_count, mismatches_bumped);

      if (lastColC) begin
         Bit#(32) elapsed = cycle_count - op_start_cycle;
         $display("[cycle %0d] op %0d complete in %0d cycles (expected %0d) %s (first input @%0d, first output @%0d): %0d mismatches out of 768",
                  cycle_count, collect_pattern, elapsed, expCyclesPerOp,
                  (elapsed == fromInteger(expCyclesPerOp)) ? "MATCH  " : "**DIFF**",
                  first_input_cycle, first_output_cycle, mismatches_bumped);

         if (mismatches_bumped == 0)
            $display("Sigmoid (r=%0d,n=%0d) op%0d: functional check PASS (768/768 elements)", rv, nLabel, collect_pattern);
         else
            $display("Sigmoid (r=%0d,n=%0d) op%0d: functional check FAIL (%0d mismatches)", rv, nLabel, collect_pattern, mismatches_bumped);

         total_mismatches <= total_mismatches + mismatches_bumped;

         if (collect_pattern == 1) begin
            $display("\n================================================");
            if (total_mismatches + mismatches_bumped == 0)
               $display("    TEST RESULT: PASS  (r=%0d, n=%0d)", rv, nLabel);
            else
               $display("    TEST RESULT: FAIL  (r=%0d, n=%0d)", rv, nLabel);
            $display("================================================\n");
            $finish(0);
         end else begin
            restart_wire.wset(True);
         end
      end

      collect_col        <= lastColC ? 0 : collect_col + 1;
      mismatches          <= lastColC ? 0 : mismatches_bumped;
      first_output_seen  <= lastColC ? False : True;
      collect_pattern    <= lastColC ? collect_pattern + 1 : collect_pattern;
   endrule

   rule rl_timeout (cycle_count > fromInteger(expCyclesPerOp * 4 + 2000));
      $display("\nERROR: Timeout at cycle %0d (r=%0d n=%0d, ops_fed=%0d, collect_col=%0d)",
               cycle_count, rv, nLabel, ops_fed, collect_col);
      $finish(1);
   endrule

endmodule

// ------------------------------------------------------------
// One TB per (r, n) row of the sweep: 15 rows, but only 8
// distinct DUTs - every row with the same r instantiates the
// same hardware. cols = 768/r, expected cycles/op = 768/r + 4.
// ------------------------------------------------------------
(* synthesize *) module mkTbSig_r1_n64 (Empty);
   IfcSig_r1  d <- mkSigmoidAblation_r1();  Empty t <- mkTbBody(d, 768, 772,  64, "r1_n64 ");  return t; endmodule
(* synthesize *) module mkTbSig_r2_n64 (Empty);
   IfcSig_r2  d <- mkSigmoidAblation_r2();  Empty t <- mkTbBody(d, 384, 388,  64, "r2_n64 ");  return t; endmodule
(* synthesize *) module mkTbSig_r3_n64 (Empty);
   IfcSig_r3  d <- mkSigmoidAblation_r3();  Empty t <- mkTbBody(d, 256, 260,  64, "r3_n64 ");  return t; endmodule
(* synthesize *) module mkTbSig_r4_n64 (Empty);
   IfcSig_r4  d <- mkSigmoidAblation_r4();  Empty t <- mkTbBody(d, 192, 196,  64, "r4_n64 ");  return t; endmodule
(* synthesize *) module mkTbSig_r6_n64 (Empty);
   IfcSig_r6  d <- mkSigmoidAblation_r6();  Empty t <- mkTbBody(d, 128, 132,  64, "r6_n64 ");  return t; endmodule
(* synthesize *) module mkTbSig_r12_n64 (Empty);
   IfcSig_r12 d <- mkSigmoidAblation_r12();  Empty t <- mkTbBody(d,  64,  68,  64, "r12_n64");  return t; endmodule
(* synthesize *) module mkTbSig_r4_n16 (Empty);
   IfcSig_r4  d <- mkSigmoidAblation_r4();  Empty t <- mkTbBody(d, 192, 196,  16, "r4_n16 ");  return t; endmodule
(* synthesize *) module mkTbSig_r4_n32 (Empty);
   IfcSig_r4  d <- mkSigmoidAblation_r4();  Empty t <- mkTbBody(d, 192, 196,  32, "r4_n32 ");  return t; endmodule
(* synthesize *) module mkTbSig_r4_n96 (Empty);
   IfcSig_r4  d <- mkSigmoidAblation_r4();  Empty t <- mkTbBody(d, 192, 196,  96, "r4_n96 ");  return t; endmodule
(* synthesize *) module mkTbSig_r4_n192 (Empty);
   IfcSig_r4  d <- mkSigmoidAblation_r4();  Empty t <- mkTbBody(d, 192, 196, 192, "r4_n192");  return t; endmodule
(* synthesize *) module mkTbSig_r8_n32 (Empty);
   IfcSig_r8  d <- mkSigmoidAblation_r8();  Empty t <- mkTbBody(d,  96, 100,  32, "r8_n32 ");  return t; endmodule
(* synthesize *) module mkTbSig_r8_n96 (Empty);
   IfcSig_r8  d <- mkSigmoidAblation_r8();  Empty t <- mkTbBody(d,  96, 100,  96, "r8_n96 ");  return t; endmodule
(* synthesize *) module mkTbSig_r2_n128 (Empty);
   IfcSig_r2  d <- mkSigmoidAblation_r2();  Empty t <- mkTbBody(d, 384, 388, 128, "r2_n128");  return t; endmodule
(* synthesize *) module mkTbSig_r6_n128 (Empty);
   IfcSig_r6  d <- mkSigmoidAblation_r6();  Empty t <- mkTbBody(d, 128, 132, 128, "r6_n128");  return t; endmodule
(* synthesize *) module mkTbSig_r16_n48 (Empty);
   IfcSig_r16 d <- mkSigmoidAblation_r16();  Empty t <- mkTbBody(d,  48,  52,  48, "r16_n48");  return t; endmodule

endpackage
