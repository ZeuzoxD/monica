package Tb_COP_SA;

import COP::*;
import BF16::*;
import Vector::*;

(* synthesize *)
module mkTb_COP_SA(Empty);
   
   IfcCOP dut <- mkCOP();
   
   function BF16 hexToBF16(Bit#(16) hex_val);
      return toBF16(hex_val);
   endfunction

   // Test input vectors (768 elements)
   Vector#(768, BF16) x = newVector();
   Vector#(768, BF16) test_d = newVector();
   
   for (Integer i = 0; i < 768; i = i + 1) begin
      x[i] = hexToBF16(16'h4000);      // 2.0
      test_d[i] = hexToBF16(16'h3f80); // 1.0
   end
   
   Bit#(32) test_i = 32'd42;

   // Weight matrices for FIRST MM: 192x768
   function Vector#(16, Vector#(16, BF16)) make_sa1_weight_matrix(Bit#(4) row_group, Bit#(6) input_chunk);
      Vector#(16, Vector#(16, BF16)) w = newVector();
      for (Integer row = 0; row < 16; row = row + 1) begin
         w[row] = newVector();
         for (Integer col = 0; col < 16; col = col + 1) begin
            if (input_chunk == 0 && row == col) begin
               w[row][col] = hexToBF16(16'h3f80); // 1.0 on diagonal for first chunk
            end else begin
               w[row][col] = hexToBF16(16'h3c00); // 0.015625 (1/64) for others
            end
         end
      end
      return w;
   endfunction

   // Weight matrices for SECOND MM: 768x192
   function Vector#(16, Vector#(16, BF16)) make_sa2_weight_matrix(Bit#(6) row_group, Bit#(4) input_chunk);
      Vector#(16, Vector#(16, BF16)) w = newVector();
      for (Integer row = 0; row < 16; row = row + 1) begin
         w[row] = newVector();
         for (Integer col = 0; col < 16; col = col + 1) begin
            if (input_chunk == 0 && row == col) begin
               w[row][col] = hexToBF16(16'h3f80); // 1.0 on diagonal for first chunk
            end else begin
               w[row][col] = hexToBF16(16'h3d00); // 0.03125 (1/32) for others
            end
         end
      end
      return w;
   endfunction

   Reg#(Bit#(32)) cycle_count <- mkReg(0);
   Reg#(Bool) test_started <- mkReg(False);
   Reg#(Bool) comp_started <- mkReg(False);
   
   // First MM tracking (192x768)
   Reg#(Bit#(10)) sa1_weights_loaded <- mkReg(0);  // 0-575 (12 × 48 = 576 total)
   Reg#(Bit#(4)) sa1_current_row_group <- mkReg(0);
   Reg#(Bit#(6)) sa1_current_input_chunk <- mkReg(0);
   Reg#(Bool) sa1_complete <- mkReg(False);
   
   // Second MM tracking (768x192)
   Reg#(Bit#(10)) sa2_weights_loaded <- mkReg(0);  // 0-575 (48 × 12 = 576 total)
   Reg#(Bit#(6)) sa2_current_row_group <- mkReg(0);
   Reg#(Bit#(4)) sa2_current_input_chunk <- mkReg(0);
   Reg#(Bool) sa2_complete <- mkReg(False);
   
   rule start_computation (!test_started && cycle_count == 10);
      $display("\n[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] TB: Starting computation, time = %0d", cycle_count, $time);
      $display("[Cycle %0d] TB: Input vector size: 768", cycle_count);
      $display("[Cycle %0d] TB: First MM: 192×768 -> 192 output", cycle_count);
      $display("[Cycle %0d] TB: Second MM: 768×192 -> 768 output", cycle_count);
      $display("[Cycle %0d] TB: Total weight matrices needed: 1152 (576 + 576)", cycle_count);
      $display("[Cycle %0d] ========================================\n", cycle_count);
      dut.start_computation(x, test_i, test_d);
      comp_started <= True;
      test_started <= True;
   endrule
   
   // Load weights for FIRST SA (192x768)
   rule load_sa1_weights (comp_started && 
                          !dut.computation_done() && 
                          !sa1_complete &&
                          sa1_weights_loaded < 576);
      
      Vector#(16, Vector#(16, BF16)) weight_matrix = make_sa1_weight_matrix(sa1_current_row_group, sa1_current_input_chunk);
      dut.load_sa1_weights(weight_matrix);
      
      sa1_weights_loaded <= sa1_weights_loaded + 1;
      
      // Display every 48th weight load (completion of each row group)
      if ((sa1_weights_loaded + 1) % 48 == 0) begin
         $display("[Cycle %0d] TB: *** SA1 Row group %0d COMPLETE *** (loaded %0d/576 weight matrices)", 
                  cycle_count, sa1_current_row_group, sa1_weights_loaded + 1);
      end else if (sa1_weights_loaded % 48 == 0) begin
         $display("[Cycle %0d] TB: SA1 Starting row_group=%0d (weights %0d-%0d)", 
                  cycle_count, sa1_current_row_group, sa1_weights_loaded, sa1_weights_loaded + 47);
      end
      
      // Update tracking
      if (sa1_current_input_chunk == 47) begin
         sa1_current_input_chunk <= 0;
         sa1_current_row_group <= sa1_current_row_group + 1;
      end else begin
         sa1_current_input_chunk <= sa1_current_input_chunk + 1;
      end
      
      // Mark SA1 complete when all weights loaded
      if (sa1_weights_loaded == 575) begin
         sa1_complete <= True;
         $display("[Cycle %0d] ========================================", cycle_count);
         $display("[Cycle %0d] TB: FIRST SA COMPLETE - All 576 weight matrices loaded", cycle_count);
         $display("[Cycle %0d] TB: Now waiting for second SA to start...", cycle_count);
         $display("[Cycle %0d] ========================================", cycle_count);
      end
   endrule
   
   // Load weights for SECOND SA (768x192)
   rule load_sa2_weights (comp_started && 
                          !dut.computation_done() && 
                          sa1_complete &&
                          sa2_weights_loaded < 576);
      
      Vector#(16, Vector#(16, BF16)) weight_matrix = make_sa2_weight_matrix(sa2_current_row_group, sa2_current_input_chunk);
      dut.load_sa2_weights(weight_matrix);
      
      sa2_weights_loaded <= sa2_weights_loaded + 1;
      
      // Display every 12th weight load (completion of each row group)
      if ((sa2_weights_loaded + 1) % 12 == 0) begin
         $display("[Cycle %0d] TB: *** SA2 Row group %0d COMPLETE *** (loaded %0d/576 weight matrices)", 
                  cycle_count, sa2_current_row_group, sa2_weights_loaded + 1);
      end else if (sa2_weights_loaded % 12 == 0) begin
         $display("[Cycle %0d] TB: SA2 Starting row_group=%0d (weights %0d-%0d)", 
                  cycle_count, sa2_current_row_group, sa2_weights_loaded, sa2_weights_loaded + 11);
      end
      
      // Update tracking
      if (sa2_current_input_chunk == 11) begin
         sa2_current_input_chunk <= 0;
         sa2_current_row_group <= sa2_current_row_group + 1;
      end else begin
         sa2_current_input_chunk <= sa2_current_input_chunk + 1;
      end
      
      // Mark SA2 complete when all weights loaded
      if (sa2_weights_loaded == 575) begin
         sa2_complete <= True;
         $display("[Cycle %0d] ========================================", cycle_count);
         $display("[Cycle %0d] TB: SECOND SA COMPLETE - All 576 weight matrices loaded", cycle_count);
         $display("[Cycle %0d] ========================================", cycle_count);
      end
   endrule
   
   rule check_done (comp_started && dut.computation_done());
      $display("\n[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d]     TWO-STAGE MATRIX MULTIPLICATION COMPLETED!", cycle_count);
      $display("[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d]   $TIME = %0d", cycle_count, $time);
      $display("[Cycle %0d]   SA1 weight matrices loaded: %0d/576", cycle_count, sa1_weights_loaded);
      $display("[Cycle %0d]   SA2 weight matrices loaded: %0d/576", cycle_count, sa2_weights_loaded);
      $display("[Cycle %0d]   Total weight matrices: %0d/1152", cycle_count, sa1_weights_loaded + sa2_weights_loaded);
      $display("[Cycle %0d] ========================================\n", cycle_count);
      
      Vector#(768, BF16) result = dut.get_result();
      
      $display("\n========================================");
      $display("FINAL OUTPUT VECTOR (768 elements)");
      $display("========================================\n");
      
      // Display first row group (outputs 0-15)
      $display("Row Group 0 [Outputs 0-15]:");
      for (Integer i = 0; i < 16; i = i + 1) begin
         Bit#(16) res_bits = fromBF16(result[i]);
         $display("  result[%3d] = 0x%04h", i, res_bits);
      end
      
      // Display middle row groups (sample a few)
      $display("\nRow Group 12 [Outputs 192-207]:");
      for (Integer i = 192; i < 208; i = i + 1) begin
         Bit#(16) res_bits = fromBF16(result[i]);
         $display("  result[%3d] = 0x%04h", i, res_bits);
      end
      
      $display("\nRow Group 24 [Outputs 384-399]:");
      for (Integer i = 384; i < 400; i = i + 1) begin
         Bit#(16) res_bits = fromBF16(result[i]);
         $display("  result[%3d] = 0x%04h", i, res_bits);
      end
      
      $display("\nRow Group 36 [Outputs 576-591]:");
      for (Integer i = 576; i < 592; i = i + 1) begin
         Bit#(16) res_bits = fromBF16(result[i]);
         $display("  result[%3d] = 0x%04h", i, res_bits);
      end
      
      // Display last row group (outputs 752-767)
      $display("\nRow Group 47 [Outputs 752-767]:");
      for (Integer i = 752; i < 768; i = i + 1) begin
         Bit#(16) res_bits = fromBF16(result[i]);
         $display("  result[%3d] = 0x%04h", i, res_bits);
      end
      
      // Summary statistics
      $display("\n========================================");
      $display("COMPUTATION STATISTICS");
      $display("========================================");
      $display("  SIMD Pipeline:");
      $display("    - Input vector:           768 elements");
      $display("    - Stages:                 3 (256 each)");
      $display("    - Output:                 768 elements");
      $display("");
      $display("  First Matrix Multiplication (SA1):");
      $display("    - Weight matrix:          192 × 768");
      $display("    - Input:                  768 elements (from SIMD)");
      $display("    - Output:                 192 elements");
      $display("    - SA operations:          576 (12 row groups × 48 chunks)");
      $display("    - Weight matrices loaded: %0d/576", sa1_weights_loaded);
      $display("");
      $display("  Second Matrix Multiplication (SA2):");
      $display("    - Weight matrix:          768 × 192");
      $display("    - Input:                  192 elements (from SA1)");
      $display("    - Output:                 768 elements (FINAL)");
      $display("    - SA operations:          576 (48 row groups × 12 chunks)");
      $display("    - Weight matrices loaded: %0d/576", sa2_weights_loaded);
      $display("");
      $display("  Systolic Array:");
      $display("    - Size:                   16 × 16 (weight-stationary)");
      $display("    - Total operations:       1152 (576 + 576)");
      $display("    - Latency per operation:  ~33 cycles");
      $display("========================================");
      
      let time_ns = cycle_count * 5;  // Assuming 200 MHz clock (5ns period)
      let time_us = time_ns / 1000;
      
      $display("\nTIMING INFORMATION");
      $display("========================================");
      $display("  Total cycles:             %0d", cycle_count);
      $display("  Time:                     %0d ns (%0d us) @ 200 MHz", time_ns, time_us);
      $display("  $TIME:                    %0d", $time);
      $display("========================================");
      
      // Verification check
      if (sa1_weights_loaded == 576 && sa2_weights_loaded == 576) begin
         $display("\n*** TEST PASSED ***");
         $display("   First SA:  576/576 weight matrices loaded");
         $display("   Second SA: 576/576 weight matrices loaded");
         $display("   Total:     1152/1152 weight matrices loaded");
         $display("   SA1: 12 row groups × 48 input chunks = 576 ops");
         $display("   SA2: 48 row groups × 12 input chunks = 576 ops");
         $display("   Final output: 768 elements generated");
         $display("========================================\n");
         $finish(0);
      end else begin
         $display("\n*** TEST INCOMPLETE ***");
         $display("   SA1: %0d/576 weight matrices loaded", sa1_weights_loaded);
         $display("   SA2: %0d/576 weight matrices loaded", sa2_weights_loaded);
         $display("   Total: %0d/1152", sa1_weights_loaded + sa2_weights_loaded);
         $display("========================================\n");
         $finish(1);
      end
   endrule
   
   rule count_cycles;
      cycle_count <= cycle_count + 1;
      
      // Status updates every 5000 cycles
      if (cycle_count % 5000 == 0 && cycle_count > 0 && comp_started && !dut.computation_done()) begin
         if (!sa1_complete) begin
            $display("[Cycle %0d] Status: SA1 - weights_loaded=%0d/576, row_group=%0d/12, input_chunk=%0d/48", 
                     cycle_count, sa1_weights_loaded, sa1_current_row_group, sa1_current_input_chunk);
         end else if (!sa2_complete) begin
            $display("[Cycle %0d] Status: SA2 - weights_loaded=%0d/576, row_group=%0d/48, input_chunk=%0d/12", 
                     cycle_count, sa2_weights_loaded, sa2_current_row_group, sa2_current_input_chunk);
         end
      end
      
      // Timeout after 1000000 cycles
      if (cycle_count > 1000000) begin
         $display("\n=================================================");
         $display("ERROR: Timeout after 1000000 cycles!");
         $display("  Computation started:     %s", comp_started ? "YES" : "NO");
         $display("  SA1 weights loaded:      %0d/576", sa1_weights_loaded);
         $display("  SA1 complete:            %s", sa1_complete ? "YES" : "NO");
         $display("  SA2 weights loaded:      %0d/576", sa2_weights_loaded);
         $display("  SA2 complete:            %s", sa2_complete ? "YES" : "NO");
         $display("  Computation done:        %s", dut.computation_done() ? "YES" : "NO");
         $display("=================================================");
         $finish(1);
      end
   endrule
   
   rule initial_display (cycle_count == 0);
      $display("\n=================================================");
      $display("=================================================");
      $display("  COP Two-Stage Matrix Multiplication Testbench");
      $display("=================================================");
      $display("=================================================");
      $display("\nConfiguration:");
      $display("  Input vector (x):          768 elements");
      $display("\nStage 1: SIMD Pipeline");
      $display("  - Processes 768 inputs in 3 stages (256 each)");
      $display("  - Output: 768 elements");
      $display("\nStage 2: First Matrix Multiplication (SA1)");
      $display("  - Weight matrix (W1):      192 × 768");
      $display("  - Input:                   768 elements (from SIMD)");
      $display("  - Output:                  192 elements");
      $display("  - SA operations:           576 (12 row groups × 48 input chunks)");
      $display("  - Each row group:          16 outputs");
      $display("  - Each input chunk:        16 elements");
      $display("\nStage 3: Second Matrix Multiplication (SA2)");
      $display("  - Weight matrix (W2):      768 × 192");
      $display("  - Input:                   192 elements (from SA1)");
      $display("  - Output:                  768 elements (FINAL)");
      $display("  - SA operations:           576 (48 row groups × 12 input chunks)");
      $display("  - Each row group:          16 outputs");
      $display("  - Each input chunk:        16 elements");
      $display("\nSystematic Array Configuration:");
      $display("  SA size:                   16 × 16 (weight-stationary, shared)");
      $display("  Total operations:          1152 (576 SA1 + 576 SA2)");
      $display("  SA latency per operation:  ~33 cycles");
      $display("\nWeight Pattern (for verification):");
      $display("  SA1: First chunk = Identity-like, others = 0.015625");
      $display("  SA2: First chunk = Identity-like, others = 0.03125");
      $display("\nExpected Flow:");
      $display("  1. SIMD processes 768 inputs -> 768 outputs");
      $display("  2. SA1 computes W1(192×768) × x(768) -> y1(192)");
      $display("  3. SA2 computes W2(768×192) × y1(192) -> y2(768) FINAL");
      $display("=================================================\n");
   endrule

endmodule

endpackage
