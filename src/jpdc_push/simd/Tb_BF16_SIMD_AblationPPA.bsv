package Tb_BF16_SIMD_AblationPPA;

import BF16::*;
import BF16_SIMD::*;
import BF16_SIMD_AblationPPA::*;
import Vector::*;

// ============================================================
// STREAMING ABLATION TESTBENCH
//
// Feeds a*b + c*d for four 768-element tensors, ONE COLUMN OF r
// ELEMENTS PER CYCLE - never a bulk load.
//
// Lane l on column k handles global element idx = k*r + l
// (cyclic distribution), so all r lanes see DIFFERENT data every
// cycle - a lane-indexing bug cannot hide.
//
// Self-checking: the TB holds r independent reference copies of
// (2 multipliers + 1 adder) and compares the DUT's pipelined
// output against a combinational evaluation of the same
// operands. This validates streaming, pipelining and per-lane
// data routing. It deliberately uses the SAME arithmetic units
// as the DUT, so it is a datapath check, not an IEEE-conformance
// check.
// ============================================================

// ------------------------------------------------------------
// The 64-value base tile - verbatim from the existing
// Tb_BF16_SIMD_MultiLane_Stream / Tb_BF16_SIMD_Ablation_Stream
// testbenches, so results are comparable with the earlier runs.
// ------------------------------------------------------------
function Vector#(64, BF16) mkInVec();
   Vector#(64, BF16) v = newVector;
   v[0]  = toBF16(16'h441a); v[1]  = toBF16(16'h444c); v[2]  = toBF16(16'hc437); v[3]  = toBF16(16'h4383);
   v[4]  = toBF16(16'hc41e); v[5]  = toBF16(16'h42ee); v[6]  = toBF16(16'h42fd); v[7]  = toBF16(16'h442a);
   v[8]  = toBF16(16'h43cc); v[9]  = toBF16(16'h4461); v[10] = toBF16(16'hc3da); v[11] = toBF16(16'hc31f);
   v[12] = toBF16(16'h438e); v[13] = toBF16(16'h4207); v[14] = toBF16(16'hc3d0); v[15] = toBF16(16'hc293);
   v[16] = toBF16(16'h442e); v[17] = toBF16(16'h4320); v[18] = toBF16(16'hc36c); v[19] = toBF16(16'hc2ec);
   v[20] = toBF16(16'h43f8); v[21] = toBF16(16'hc41c); v[22] = toBF16(16'h4399); v[23] = toBF16(16'h4448);
   v[24] = toBF16(16'hc425); v[25] = toBF16(16'hc405); v[26] = toBF16(16'hc386); v[27] = toBF16(16'hc435);
   v[28] = toBF16(16'h4375); v[29] = toBF16(16'hc401); v[30] = toBF16(16'h443a); v[31] = toBF16(16'h43dd);
   v[32] = toBF16(16'h43a8); v[33] = toBF16(16'h4321); v[34] = toBF16(16'hc415); v[35] = toBF16(16'hc35d);
   v[36] = toBF16(16'h444e); v[37] = toBF16(16'h4447); v[38] = toBF16(16'hc381); v[39] = toBF16(16'h4455);
   v[40] = toBF16(16'hc32b); v[41] = toBF16(16'h4402); v[42] = toBF16(16'hc46e); v[43] = toBF16(16'hc3a5);
   v[44] = toBF16(16'hc40d); v[45] = toBF16(16'h4447); v[46] = toBF16(16'h4444); v[47] = toBF16(16'hc3fe);
   v[48] = toBF16(16'hc41f); v[49] = toBF16(16'h42fa); v[50] = toBF16(16'h43ca); v[51] = toBF16(16'h42b7);
   v[52] = toBF16(16'h4372); v[53] = toBF16(16'h444e); v[54] = toBF16(16'hc3f0); v[55] = toBF16(16'h4403);
   v[56] = toBF16(16'hc16f); v[57] = toBF16(16'h43eb); v[58] = toBF16(16'h445e); v[59] = toBF16(16'h413e);
   v[60] = toBF16(16'h4475); v[61] = toBF16(16'hc3e9); v[62] = toBF16(16'hc478); v[63] = toBF16(16'hc330);
   return v;
endfunction

// 768 = 12 x 64, so the tile is reused 12 times over the tensor.
// Each of the four tensors reads the SAME tile at a different
// rotation (a:+0, b:+17, c:+34, d:+51) so a, b, c and d are four
// genuinely different streams instead of four copies of one - that
// is what exercises mixed signs through the adder. Rotation is just
// (idx + off) mod 64, i.e. a truncate, so this stays a 64:1 mux of
// constants rather than a 768-deep lookup.
function BF16 operandAt(Bit#(11) i, Integer tensor);
   Vector#(64, BF16) base = mkInVec();
   Bit#(6) k = truncate(i + fromInteger(tensor * 17));
   return base[k];
endfunction

// Fixed set of 12 scattered indices dumped in full for manual
// checking. Fixed (not seeded-random) so a re-run shows the same
// elements. Deliberately includes tile boundaries 63/64 and 767.
function Bool isSpot(Bit#(11) i);
   return (i ==  0) || (i ==  13) || (i ==  45) || (i ==  63)
       || (i == 64) || (i == 130) || (i == 209) || (i == 300)
       || (i == 411) || (i == 512) || (i == 655) || (i == 767);
endfunction

// ------------------------------------------------------------
// Generic TB body. Takes the DUT as an argument so bsc can infer
// r and n from it; `cols` = 768/r columns to stream.
// ------------------------------------------------------------
module mkTbBody#(IfcAblationPPA#(r) dut,
                 Integer cols, Integer expCycles, Integer nLabel, String label)(Empty)
   provisos (Add#(1, _unused, r));

   Integer rv = valueOf(r);

   // Reference datapath: r independent copies of 2 mults + 1 adder.
   Vector#(r, BF16MultiplierIFC) ref_m1 <- replicateM(mkBF16Multiplier());
   Vector#(r, BF16MultiplierIFC) ref_m2 <- replicateM(mkBF16Multiplier());
   Vector#(r, BF16AdderIFC)      ref_ad <- replicateM(mkBF16Adder());

   Reg#(Bit#(32)) cyc       <- mkReg(0);
   Reg#(Bit#(11)) send_idx  <- mkReg(0);
   Reg#(Bit#(11)) recv_idx  <- mkReg(0);
   Reg#(Bit#(32)) errors    <- mkReg(0);
   Reg#(Bit#(32)) checked   <- mkReg(0);
   Reg#(Bool)     started   <- mkReg(False);
   Reg#(Bit#(32)) first_out <- mkReg(0);

   rule rl_tick;
      cyc <= cyc + 1;
   endrule

   rule rl_begin (!started);
      started <= True;
      $display("############################################################");
      $display("# CONFIG %s  |  r=%0d lanes (2 mul + 1 add each)  |  n=%0d (label only)",
               label, rv, nLabel);
      $display("# streaming %0d columns x %0d lanes = 768 elements of a*b + c*d",
               cols, rv);
      $display("# operands: 64-value tile reused 12x; rotations a+0 b+17 c+34 d+51");
      $display("# expected: %0d cycles, first result at cycle 4", expCycles);
      $display("############################################################");
   endrule

   // ---- STREAM IN: exactly one column (r elements) per cycle ----
   rule rl_send (started && send_idx < fromInteger(cols));
      Vector#(r, BF16) va = newVector;
      Vector#(r, BF16) vb = newVector;
      Vector#(r, BF16) vc = newVector;
      Vector#(r, BF16) vd = newVector;
      for (Integer l = 0; l < rv; l = l + 1) begin
         Bit#(11) idx = send_idx * fromInteger(rv) + fromInteger(l);
         va[l] = operandAt(idx, 0);
         vb[l] = operandAt(idx, 1);
         vc[l] = operandAt(idx, 2);
         vd[l] = operandAt(idx, 3);
      end
      dut.put_operands(va, vb, vc, vd);
`ifdef VERBOSE
      $display("");
      $display(">>> INPUT  SENT   | cyc=%0d | $time=%0t | column %0d of %0d",
               cyc, $time, send_idx, cols);
      for (Integer l = 0; l < rv; l = l + 1) begin
         Bit#(11) vidx = send_idx * fromInteger(rv) + fromInteger(l);
         $display("      lane=%0d  elem=%0d  (tile %0d)   a=%h  b=%h  c=%h  d=%h",
                  l, vidx, vidx[5:0], fromBF16(va[l]), fromBF16(vb[l]),
                  fromBF16(vc[l]), fromBF16(vd[l]));
      end
`endif
      send_idx <= send_idx + 1;
   endrule

   // ---- STREAM OUT: one column per cycle, checked on arrival ----
   rule rl_recv (started && recv_idx < fromInteger(cols));
      Vector#(r, BF16) res <- dut.get_result();
      Bit#(32) errs = 0;
`ifdef VERBOSE
      $display("");
      $display("<<< OUTPUT READY  | cyc=%0d | $time=%0t | column %0d of %0d",
               cyc, $time, recv_idx, cols);
`endif
      for (Integer l = 0; l < rv; l = l + 1) begin
         Bit#(11) idx = recv_idx * fromInteger(rv) + fromInteger(l);
         Bit#(16) ra  = fromBF16(operandAt(idx, 0));
         Bit#(16) rb  = fromBF16(operandAt(idx, 1));
         Bit#(16) rc  = fromBF16(operandAt(idx, 2));
         Bit#(16) rd  = fromBF16(operandAt(idx, 3));
         Bit#(16) p1  = ref_m1[l].multiply(ra, rb);
         Bit#(16) p2  = ref_m2[l].multiply(rc, rd);
         Bit#(16) want = ref_ad[l].add(p1, p2);
         Bool ok = (fromBF16(res[l]) == want);
`ifdef VERBOSE
         $display("      lane=%0d  elem=%0d  (tile %0d)   result=%h   expected=%h   %s",
                  l, idx, idx[5:0], fromBF16(res[l]), want, ok ? "OK" : "MISMATCH");
`endif
         // ---- full dump of selected elements for MANUAL verification ----
         if (isSpot(idx)) begin
            $display("+---------------------------------------------------------------");
            $display("| SPOT CHECK  elem=%0d  (tile idx %0d)   col=%0d  lane=%0d  cyc=%0d",
                     idx, idx[5:0], recv_idx, l, cyc);
            $display("|    a = %h     b = %h", ra, rb);
            $display("|    c = %h     d = %h", rc, rd);
            $display("|    a*b       = %h", p1);
            $display("|    c*d       = %h", p2);
            $display("|    a*b + c*d = %h   <- reference", want);
            $display("|    DUT result= %h   %s", fromBF16(res[l]), ok ? "OK" : "** MISMATCH **");
            $display("+---------------------------------------------------------------");
         end
         if (!ok) begin
            errs = errs + 1;
            if (errors + errs <= 8)
               $display("  [%s] MISMATCH elem=%0d lane=%0d got=%h want=%h",
                        label, idx, l, fromBF16(res[l]), want);
         end
      end
      errors  <= errors + errs;
      checked <= checked + fromInteger(rv);
      if (recv_idx == 0) first_out <= cyc;   // latency to first result
      recv_idx <= recv_idx + 1;
   endrule

   rule rl_finish (started && recv_idx == fromInteger(cols));
      $display("%s | r=%0d n=%0d | cols=%0d | cycles=%0d (expected %0d) %s | first_out=%0d | checked=%0d errors=%0d %s",
               label, rv, nLabel, cols, cyc, expCycles,
               (cyc == fromInteger(expCycles)) ? "MATCH  " : "**DIFF**",
               first_out, checked, errors,
               (errors == 0) ? "PASS" : "**FAIL**");
      $finish(0);
   endrule

endmodule

// ------------------------------------------------------------
// One TB per (r, n) row of the sweep: 15 rows, but only 8 distinct
// DUTs - every row with the same r instantiates the same hardware,
// which is precisely the point n is making. cols = 768/r,
// expected cycles = 768/r + 4.
// ------------------------------------------------------------
(* synthesize *) module mkTb_r1_n64 (Empty);
   Ifc_r1   d <- mkAblation_r1();  Empty t <- mkTbBody(d, 768, 772,  64, "r1_n64 ");  return t; endmodule
(* synthesize *) module mkTb_r2_n64 (Empty);
   Ifc_r2   d <- mkAblation_r2();  Empty t <- mkTbBody(d, 384, 388,  64, "r2_n64 ");  return t; endmodule
(* synthesize *) module mkTb_r3_n64 (Empty);
   Ifc_r3   d <- mkAblation_r3();  Empty t <- mkTbBody(d, 256, 260,  64, "r3_n64 ");  return t; endmodule
(* synthesize *) module mkTb_r4_n64 (Empty);
   Ifc_r4   d <- mkAblation_r4();  Empty t <- mkTbBody(d, 192, 196,  64, "r4_n64 ");  return t; endmodule
(* synthesize *) module mkTb_r6_n64 (Empty);
   Ifc_r6   d <- mkAblation_r6();  Empty t <- mkTbBody(d, 128, 132,  64, "r6_n64 ");  return t; endmodule
(* synthesize *) module mkTb_r12_n64 (Empty);
   Ifc_r12  d <- mkAblation_r12();  Empty t <- mkTbBody(d,  64,  68,  64, "r12_n64");  return t; endmodule
(* synthesize *) module mkTb_r4_n16 (Empty);
   Ifc_r4   d <- mkAblation_r4();  Empty t <- mkTbBody(d, 192, 196,  16, "r4_n16 ");  return t; endmodule
(* synthesize *) module mkTb_r4_n32 (Empty);
   Ifc_r4   d <- mkAblation_r4();  Empty t <- mkTbBody(d, 192, 196,  32, "r4_n32 ");  return t; endmodule
(* synthesize *) module mkTb_r4_n96 (Empty);
   Ifc_r4   d <- mkAblation_r4();  Empty t <- mkTbBody(d, 192, 196,  96, "r4_n96 ");  return t; endmodule
(* synthesize *) module mkTb_r4_n192 (Empty);
   Ifc_r4   d <- mkAblation_r4();  Empty t <- mkTbBody(d, 192, 196, 192, "r4_n192");  return t; endmodule
(* synthesize *) module mkTb_r8_n32 (Empty);
   Ifc_r8   d <- mkAblation_r8();  Empty t <- mkTbBody(d,  96, 100,  32, "r8_n32 ");  return t; endmodule
(* synthesize *) module mkTb_r8_n96 (Empty);
   Ifc_r8   d <- mkAblation_r8();  Empty t <- mkTbBody(d,  96, 100,  96, "r8_n96 ");  return t; endmodule
(* synthesize *) module mkTb_r2_n128 (Empty);
   Ifc_r2   d <- mkAblation_r2();  Empty t <- mkTbBody(d, 384, 388, 128, "r2_n128");  return t; endmodule
(* synthesize *) module mkTb_r6_n128 (Empty);
   Ifc_r6   d <- mkAblation_r6();  Empty t <- mkTbBody(d, 128, 132, 128, "r6_n128");  return t; endmodule
(* synthesize *) module mkTb_r16_n48 (Empty);
   Ifc_r16  d <- mkAblation_r16();  Empty t <- mkTbBody(d,  48,  52,  48, "r16_n48");  return t; endmodule

endpackage
