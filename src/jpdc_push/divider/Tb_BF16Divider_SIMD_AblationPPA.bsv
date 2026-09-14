package Tb_BF16Divider_SIMD_AblationPPA;

import BF16::*;
import BF16Divider_SIMD::*;
import BF16Divider_SIMD_AblationPPA::*;
import Vector::*;

// ============================================================
// STREAMING ABLATION TESTBENCH (divider version)
//
// Feeds a/b for two 768-element vectors, ONE COLUMN OF r
// ELEMENTS PER CYCLE - never a bulk load. Exactly the same
// streaming discipline as Tb_BF16_SIMD_AblationPPA.bsv.
//
// Lane l on column k handles global element idx = k*r + l
// (cyclic distribution), so all r lanes see DIFFERENT data
// every cycle - a lane-indexing bug cannot hide.
//
// DIFFERENCE FROM THE a*b+c*d TESTBENCH:
// BF16_SIMD's reference check re-runs the SAME combinational
// mult/add units the DUT uses, which is enough to validate
// streaming/pipelining/routing (it is a datapath check, not an
// IEEE-conformance check, by their own design note). Division
// has no such cheap reference - re-running mkBF16Divider against
// itself would not catch an arithmetic bug in mkBF16Divider.
// So this testbench instead checks every result against a fixed
// golden table (div8: 5 bit-exact power-of-two-divisor cases +
// 3 tolerance cases, tiled mod 8; div32: 32 further tolerance
// cases, tiled mod 32) - the same golden data and same
// bit-exact/tolerance checks used by every earlier divider
// testbench in this project, unweakened. This is a strictly
// STRONGER check than the datapath-only style, kept because the
// data already existed and there is no reason to drop rigor when
// adopting the simpler streaming shape.
//
// Two operations run back-to-back per config (op0 = div8
// pattern, op1 = div32 pattern), each streaming its own 768
// elements at r/cycle - matching the coverage of every previous
// divider sweep in this project (768 elements x 2 patterns,
// bit-exact where the reference says exact, tolerance
// otherwise).
// ============================================================

Int#(32) abs_tol_q16 = 32'd1000;

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

function Bool bf16BitEq(Bit#(16) a, Bit#(16) b);
  Bool a_zero = (a[14:0] == 15'h0000);
  Bool b_zero = (b[14:0] == 15'h0000);
  return (a_zero && b_zero) || (a == b);
endfunction

function Bool withinTolerance(Bit#(16) got, Bit#(16) expected);
  Int#(32) g = bf16ToQ16(got);
  Int#(32) e = bf16ToQ16(expected);
  Int#(32) diff = g - e;
  Int#(32) adiff = (diff < 0) ? (0 - diff) : diff;
  return adiff <= abs_tol_q16;
endfunction

// ------------------------------------------------------------
// Golden reference data - verbatim from BF16DividerSIMD_Configs_TB.bsv
// (itself carried over unmodified from BF16VectorDivider_TB.bsv's
// original derivation). Unchanged so this stays comparable to
// every earlier PASS run.
// ------------------------------------------------------------

function Vector#(8, Bit#(16)) div8_a();
  Vector#(8, Bit#(16)) v = newVector;
  v[0]=16'h40c0; v[1]=16'h4110; v[2]=16'hc0c0; v[3]=16'h40c0;
  v[4]=16'hc0c0; v[5]=16'h0000; v[6]=16'h40e0; v[7]=16'h42c8;
  return v;
endfunction

function Vector#(8, Bit#(16)) div8_b();
  Vector#(8, Bit#(16)) v = newVector;
  v[0]=16'h4000; v[1]=16'h4040; v[2]=16'h4000; v[3]=16'hc000;
  v[4]=16'hc000; v[5]=16'h40a0; v[6]=16'h4040; v[7]=16'h4080;
  return v;
endfunction

function Vector#(8, Bit#(16)) div8_expected();
  Vector#(8, Bit#(16)) v = newVector;
  v[0]=16'h4040; v[1]=16'h4041; v[2]=16'hc040; v[3]=16'hc040;
  v[4]=16'h4040; v[5]=16'h0000; v[6]=16'h4016; v[7]=16'h41c8;
  return v;
endfunction

function Vector#(8, Bool) div8_is_exact();
  Vector#(8, Bool) v = newVector;
  v[0]=True; v[1]=False; v[2]=True; v[3]=True;
  v[4]=True; v[5]=True; v[6]=False; v[7]=True;
  return v;
endfunction

function Vector#(32, Bit#(16)) div32_a();
  Vector#(32, Bit#(16)) v = newVector;
  v[0]=16'hc038; v[1]=16'hc11a; v[2]=16'h40f9; v[3]=16'hc060;
  v[4]=16'h3f94; v[5]=16'hbea4; v[6]=16'h4059; v[7]=16'h4140;
  v[8]=16'hc056; v[9]=16'hc126; v[10]=16'h4127; v[11]=16'h4156;
  v[12]=16'h4103; v[13]=16'hc03a; v[14]=16'hc16c; v[15]=16'h416a;
  v[16]=16'hbf91; v[17]=16'h404a; v[18]=16'hc088; v[19]=16'h4149;
  v[20]=16'h410c; v[21]=16'h4167; v[22]=16'h4099; v[23]=16'hc164;
  v[24]=16'h4119; v[25]=16'hc00f; v[26]=16'hc0b6; v[27]=16'hc0a3;
  v[28]=16'hc10f; v[29]=16'hc155; v[30]=16'hc0e8; v[31]=16'h40fd;
  return v;
endfunction

function Vector#(32, Bit#(16)) div32_b();
  Vector#(32, Bit#(16)) v = newVector;
  v[0]=16'hc10f; v[1]=16'hc0f1; v[2]=16'hc0ee; v[3]=16'h40b0;
  v[4]=16'h4152; v[5]=16'hc016; v[6]=16'hc107; v[7]=16'hc071;
  v[8]=16'h40af; v[9]=16'h409a; v[10]=16'hc09a; v[11]=16'h3f5c;
  v[12]=16'hbf6d; v[13]=16'hc0dd; v[14]=16'hc10e; v[15]=16'h3f83;
  v[16]=16'h4140; v[17]=16'h4164; v[18]=16'hc108; v[19]=16'hc122;
  v[20]=16'h4037; v[21]=16'h4155; v[22]=16'hc15e; v[23]=16'hbf49;
  v[24]=16'hc149; v[25]=16'hc146; v[26]=16'hc16d; v[27]=16'h3f33;
  v[28]=16'h4109; v[29]=16'hc10a; v[30]=16'hc038; v[31]=16'hc08c;
  return v;
endfunction

function Vector#(32, Bit#(16)) div32_expected();
  Vector#(32, Bit#(16)) v = newVector;
  v[0]=16'h3ea6; v[1]=16'h3fa4; v[2]=16'hbf87; v[3]=16'hbf24;
  v[4]=16'h3db6; v[5]=16'h3e0d; v[6]=16'hbed0; v[7]=16'hc04d;
  v[8]=16'hbf1e; v[9]=16'hc00b; v[10]=16'hc00c; v[11]=16'h417a;
  v[12]=16'hc10f; v[13]=16'h3eda; v[14]=16'h3fd7; v[15]=16'h4167;
  v[16]=16'hbdc3; v[17]=16'h3e64; v[18]=16'h3f01; v[19]=16'hbfa0;
  v[20]=16'h4046; v[21]=16'h3f8c; v[22]=16'hbeb1; v[23]=16'h4193;
  v[24]=16'hbf45; v[25]=16'h3e3a; v[26]=16'h3ec7; v[27]=16'hc0ec;
  v[28]=16'hbf87; v[29]=16'h3fc8; v[30]=16'h4023; v[31]=16'hbfea;
  return v;
endfunction

// op: 0 -> div8 (tiled mod 8), 1 -> div32 (tiled mod 32).
function Bit#(16) goldenA(UInt#(2) op, Bit#(11) flatIdx);
  return (op == 0) ? div8_a()[flatIdx[2:0]] : div32_a()[flatIdx[4:0]];
endfunction

function Bit#(16) goldenB(UInt#(2) op, Bit#(11) flatIdx);
  return (op == 0) ? div8_b()[flatIdx[2:0]] : div32_b()[flatIdx[4:0]];
endfunction

function Bit#(16) goldenExpected(UInt#(2) op, Bit#(11) flatIdx);
  return (op == 0) ? div8_expected()[flatIdx[2:0]] : div32_expected()[flatIdx[4:0]];
endfunction

function Bool goldenIsExact(UInt#(2) op, Bit#(11) flatIdx);
  return (op == 0) ? div8_is_exact()[flatIdx[2:0]] : False;
endfunction

// Fixed set of 12 scattered indices dumped in full for manual
// checking, per op. Fixed (not seeded-random) so a re-run shows
// the same elements. Deliberately includes tile boundaries
// 63/64 and 767.
function Bool isSpot(Bit#(11) i);
   return (i ==  0) || (i ==  13) || (i ==  45) || (i ==  63)
       || (i == 64) || (i == 130) || (i == 209) || (i == 300)
       || (i == 411) || (i == 512) || (i == 655) || (i == 767);
endfunction

// ------------------------------------------------------------
// Generic TB body. Takes the DUT as an argument so bsc can infer
// r; `cols` = 768/r columns to stream, per op. Runs op0 (div8)
// then op1 (div32) back-to-back, exactly like every earlier
// divider sweep in this project.
// ------------------------------------------------------------
module mkTbBody#(IfcDividerAblationPPA#(r) dut,
                 Integer cols, Integer expCyclesPerOp, Integer nLabel, String label)(Empty)
   provisos (Add#(1, _unused, r));

   Integer rv = valueOf(r);

   // ------------------------------------------------------------
   // This is a direct port of feed_input/collect_result from the
   // ORIGINAL, proven-good BF16DividerSIMD_Configs_TB.bsv (the one
   // that actually passed all 15 configs). The only real change is
   // that "round/local" addressing collapses to a single flat
   // "column" counter 0..cols-1, since n no longer exists in
   // hardware. Everything else - the explicit `dut.hasResult()`
   // rule guard, the restart_wire hand-off between op0 and op1, the
   // op_start_cycle/first_input_cycle/first_output_cycle bookkeeping
   // - is unchanged in structure from the version that was actually
   // verified working.
   // ------------------------------------------------------------

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

   // one-way signal: collect_result -> feed_input only
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
                     (feed_pattern == 0) ? "op0: div8 (bit-exact/tolerance mix)" : "op1: div32 (tolerance)",
                     (feed_pattern == 0) ? 8 : 32, cols, rv);
            $display("# expected: %0d cycles for this op", expCyclesPerOp);
            $display("################################################################");
         end

         Vector#(r, BF16) a_vec = newVector;
         Vector#(r, BF16) b_vec = newVector;
         for (Integer l = 0; l < rv; l = l + 1) begin
            Bit#(11) idx = feed_col * fromInteger(rv) + fromInteger(l);
            a_vec[l] = toBF16(goldenA(feed_pattern, idx));
            b_vec[l] = toBF16(goldenB(feed_pattern, idx));
         end
         dut.put_operands(a_vec, b_vec);

         if (!first_input_seen)
            first_input_cycle <= cycle_count;
`ifdef VERBOSE
         $display(">>> INPUT SENT | cyc=%0d | op=%0d | column %0d of %0d",
                  cycle_count, feed_pattern, feed_col, cols);
`endif
      end

      Bool restart_now     = feed_done_this_op && isValid(restart_wire.wget());
      Bool lastColF         = (feed_col == fromInteger(cols - 1));
      Bool lastCycleOfOpF  = should_feed && lastColF;

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
         Bit#(16) a_in     = goldenA(collect_pattern, idx);
         Bit#(16) b_in     = goldenB(collect_pattern, idx);
         Bit#(16) expected = goldenExpected(collect_pattern, idx);
         Bool     exact    = goldenIsExact(collect_pattern, idx);
         Bool     ok       = (collect_pattern == 0 && exact) ? bf16BitEq(got, expected)
                                                                : withinTolerance(got, expected);
         if (isSpot(idx)) begin
            $display("+---------------------------------------------------------------");
            $display("| SPOT CHECK  op=%0d  elem=%0d   col=%0d  lane=%0d  cyc=%0d",
                     collect_pattern, idx, collect_col, l, cycle_count);
            $display("|    a = %h     b = %h", a_in, b_in);
            $display("|    a / b      = %h   <- golden reference", expected);
            $display("|    DUT result = %h   %s", got, ok ? "OK" : "** MISMATCH **");
            $display("+---------------------------------------------------------------");
         end
         if (!ok) begin
            mismatchesThisCycle = mismatchesThisCycle + 1;
            $display("[cycle %0d] MISMATCH lane=%0d col=%0d elem=%0d a=%h b=%h -> got=%h expected=%h",
                     cycle_count, l, collect_col, idx, a_in, b_in, got, expected);
         end
      end

      Bool lastColC = (collect_col == fromInteger(cols - 1));
      UInt#(16) mismatches_bumped = mismatches + mismatchesThisCycle;

      // Default (always-on) progress ping every ~64 columns, not gated
      // behind -D VERBOSE, so a long config visibly makes progress.
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
            $display("SIMD divider (r=%0d,n=%0d) op%0d: functional check PASS (768/768 elements)", rv, nLabel, collect_pattern);
         else
            $display("SIMD divider (r=%0d,n=%0d) op%0d: functional check FAIL (%0d mismatches)", rv, nLabel, collect_pattern, mismatches_bumped);

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
// same hardware, which is precisely the point n is making.
// cols = 768/r, expected cycles/op = 768/r + 4.
// ------------------------------------------------------------
(* synthesize *) module mkTbDiv_r1_n64 (Empty);
   IfcDiv_r1  d <- mkDividerAblation_r1();  Empty t <- mkTbBody(d, 768, 772,  64, "r1_n64 ");  return t; endmodule
(* synthesize *) module mkTbDiv_r2_n64 (Empty);
   IfcDiv_r2  d <- mkDividerAblation_r2();  Empty t <- mkTbBody(d, 384, 388,  64, "r2_n64 ");  return t; endmodule
(* synthesize *) module mkTbDiv_r3_n64 (Empty);
   IfcDiv_r3  d <- mkDividerAblation_r3();  Empty t <- mkTbBody(d, 256, 260,  64, "r3_n64 ");  return t; endmodule
(* synthesize *) module mkTbDiv_r4_n64 (Empty);
   IfcDiv_r4  d <- mkDividerAblation_r4();  Empty t <- mkTbBody(d, 192, 196,  64, "r4_n64 ");  return t; endmodule
(* synthesize *) module mkTbDiv_r6_n64 (Empty);
   IfcDiv_r6  d <- mkDividerAblation_r6();  Empty t <- mkTbBody(d, 128, 132,  64, "r6_n64 ");  return t; endmodule
(* synthesize *) module mkTbDiv_r12_n64 (Empty);
   IfcDiv_r12 d <- mkDividerAblation_r12();  Empty t <- mkTbBody(d,  64,  68,  64, "r12_n64");  return t; endmodule
(* synthesize *) module mkTbDiv_r4_n16 (Empty);
   IfcDiv_r4  d <- mkDividerAblation_r4();  Empty t <- mkTbBody(d, 192, 196,  16, "r4_n16 ");  return t; endmodule
(* synthesize *) module mkTbDiv_r4_n32 (Empty);
   IfcDiv_r4  d <- mkDividerAblation_r4();  Empty t <- mkTbBody(d, 192, 196,  32, "r4_n32 ");  return t; endmodule
(* synthesize *) module mkTbDiv_r4_n96 (Empty);
   IfcDiv_r4  d <- mkDividerAblation_r4();  Empty t <- mkTbBody(d, 192, 196,  96, "r4_n96 ");  return t; endmodule
(* synthesize *) module mkTbDiv_r4_n192 (Empty);
   IfcDiv_r4  d <- mkDividerAblation_r4();  Empty t <- mkTbBody(d, 192, 196, 192, "r4_n192");  return t; endmodule
(* synthesize *) module mkTbDiv_r8_n32 (Empty);
   IfcDiv_r8  d <- mkDividerAblation_r8();  Empty t <- mkTbBody(d,  96, 100,  32, "r8_n32 ");  return t; endmodule
(* synthesize *) module mkTbDiv_r8_n96 (Empty);
   IfcDiv_r8  d <- mkDividerAblation_r8();  Empty t <- mkTbBody(d,  96, 100,  96, "r8_n96 ");  return t; endmodule
(* synthesize *) module mkTbDiv_r2_n128 (Empty);
   IfcDiv_r2  d <- mkDividerAblation_r2();  Empty t <- mkTbBody(d, 384, 388, 128, "r2_n128");  return t; endmodule
(* synthesize *) module mkTbDiv_r6_n128 (Empty);
   IfcDiv_r6  d <- mkDividerAblation_r6();  Empty t <- mkTbBody(d, 128, 132, 128, "r6_n128");  return t; endmodule
(* synthesize *) module mkTbDiv_r16_n48 (Empty);
   IfcDiv_r16 d <- mkDividerAblation_r16();  Empty t <- mkTbBody(d,  48,  52,  48, "r16_n48");  return t; endmodule

endpackage
