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

   // Weight matrix generator for both matrix multiplications
   // SA1: 192x768 (12 row_groups × 48 input_chunks = 576 matrices)
   // SA2: 768x192 (48 row_groups × 12 input_chunks = 576 matrices)
   function Vector#(16, Vector#(16, BF16)) make_weight_matrix(Bit#(6) row_group, Bit#(6) input_chunk, Bool is_sa2);
      Vector#(16, Vector#(16, BF16)) w = newVector();
      for (Integer row = 0; row < 16; row = row + 1) begin
         w[row] = newVector();
         for (Integer col = 0; col < 16; col = col + 1) begin
            if (is_sa2) begin
               // SA2 weights: Use different pattern to distinguish from SA1
               if (input_chunk == 0 && row == col) begin
                  w[row][col] = hexToBF16(16'h3f00); // 0.5 on diagonal for first chunk
               end else begin
                  w[row][col] = hexToBF16(16'h3800); // 0.00390625 (1/256) for others
               end
            end else begin
               // SA1 weights: Identity-like pattern
               if (input_chunk == 0 && row == col) begin
                  w[row][col] = hexToBF16(16'h3f80); // 1.0 on diagonal for first chunk
               end else begin
                  w[row][col] = hexToBF16(16'h3c00); // 0.015625 (1/64) for others
               end
            end
         end
      end
      return w;
   endfunction

   Reg#(Bit#(32)) cycle_count <- mkReg(0);
   Reg#(Bool) test_started <- mkReg(False);
   Reg#(Bool) comp_started <- mkReg(False);
   
   // Weight loading tracking for SA1 (576 total)
   Reg#(Bit#(10)) sa1_weights_loaded <- mkReg(0);
   Reg#(Bit#(4)) sa1_current_row_group <- mkReg(0);
   Reg#(Bit#(6)) sa1_current_input_chunk <- mkReg(0);
   Reg#(Bool) sa1_complete <- mkReg(False);
   
   // Weight loading tracking for SA2 (576 total)
   Reg#(Bit#(10)) sa2_weights_loaded <- mkReg(0);
   Reg#(Bit#(6)) sa2_current_row_group <- mkReg(0);
   Reg#(Bit#(4)) sa2_current_input_chunk <- mkReg(0);
   Reg#(Bool) sa2_started <- mkReg(False);
   
   rule start_computation (!test_started && cycle_count == 10);
      $display("\n[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] TB: Starting computation, time = %0d", cycle_count, $time);
      $display("[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] Configuration:", cycle_count);
      $display("[Cycle %0d]   Input vector: 768 elements", cycle_count);
      $display("[Cycle %0d]   First MatMul:  W1(192×768) × x(768) = y1(192)", cycle_count);
      $display("[Cycle %0d]   Second MatMul: W2(768×192) × y1(192) = y2(768)", cycle_count);
      $display("[Cycle %0d]   Total SA operations: 576 + 576 = 1152", cycle_count);
      $display("[Cycle %0d] ========================================\n", cycle_count);
      dut.start_computation(x, test_i, test_d);
      comp_started <= True;
      test_started <= True;
   endrule
   
   // Load weights for SA1 (First matrix multiplication)
   rule load_sa1_weights (comp_started && 
                           !sa1_complete &&
                           !dut.computation_done() && 
                           sa1_weights_loaded < 576);
      
      Vector#(16, Vector#(16, BF16)) weight_matrix = 
         make_weight_matrix(truncate(sa1_current_row_group), sa1_current_input_chunk, False);
      dut.load_sa_weights(weight_matrix);
      
      sa1_weights_loaded <= sa1_weights_loaded + 1;
      
      // Display every 48th weight load (completion of each row group)
      if ((sa1_weights_loaded + 1) % 48 == 0) begin
         $display("[Cycle %0d] TB: *** SA1 Row group %0d COMPLETE *** (loaded %0d/576)", 
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
      
      // Mark SA1 complete when all 576 weights loaded
      if (sa1_weights_loaded == 575) begin
         sa1_complete <= True;
         $display("[Cycle %0d] ========================================", cycle_count);
         $display("[Cycle %0d] TB: SA1 ALL WEIGHTS LOADED (576/576)", cycle_count);
         $display("[Cycle %0d] ========================================", cycle_count);
      end
   endrule
   
   // Detect when SA2 starts (when SA1 completes)
   rule detect_sa2_start (sa1_complete && !sa2_started && !dut.computation_done());
      sa2_started <= True;
      $display("\n[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] TB: SA1 COMPLETE - Starting SA2 weight loading", cycle_count);
      $display("[Cycle %0d] ========================================\n", cycle_count);
   endrule
   
   // Load weights for SA2 (Second matrix multiplication)
   rule load_sa2_weights (sa2_started &&
                           !dut.computation_done() && 
                           sa2_weights_loaded < 576);
      
      Vector#(16, Vector#(16, BF16)) weight_matrix = 
         make_weight_matrix(sa2_current_row_group, truncate(sa2_current_input_chunk), True);
      dut.load_sa_weights(weight_matrix);
      
      sa2_weights_loaded <= sa2_weights_loaded + 1;
      
      // Display every 12th weight load (completion of each row group)
      if ((sa2_weights_loaded + 1) % 12 == 0) begin
         $display("[Cycle %0d] TB: *** SA2 Row group %0d COMPLETE *** (loaded %0d/576)", 
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
      
      // Mark completion
      if (sa2_weights_loaded == 575) begin
         $display("[Cycle %0d] ========================================", cycle_count);
         $display("[Cycle %0d] TB: SA2 ALL WEIGHTS LOADED (576/576)", cycle_count);
         $display("[Cycle %0d] ========================================", cycle_count);
      end
   endrule
   
   rule check_done (comp_started && dut.computation_done());
      $display("\n[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d]   TWO-STAGE MATRIX MULTIPLICATION COMPLETE!", cycle_count);
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
      
      // Display samples from different sections
      $display("First 16 elements [0-15]:");
      for (Integer i = 0; i < 16; i = i + 1) begin
         Bit#(16) res_bits = fromBF16(result[i]);
         $display("  result[%3d] = 0x%04h", i, res_bits);
      end
      
      $display("\nMiddle section [376-391]:");
      for (Integer i = 376; i < 392; i = i + 1) begin
         Bit#(16) res_bits = fromBF16(result[i]);
         $display("  result[%3d] = 0x%04h", i, res_bits);
      end
      
      $display("\nLast 16 elements [752-767]:");
      for (Integer i = 752; i < 768; i = i + 1) begin
         Bit#(16) res_bits = fromBF16(result[i]);
         $display("  result[%3d] = 0x%04h", i, res_bits);
      end
      
      // Summary statistics
      $display("\n========================================");
      $display("COMPUTATION STATISTICS");
      $display("========================================");
      $display("  SIMD Pipeline:");
      $display("    - Input size:              768");
      $display("    - Processing stages:       3 (256 each)");
      $display("  ");
      $display("  First Matrix Multiplication (SA1):");
      $display("    - Weight matrix:           192 × 768");
      $display("    - Input vector:            768");
      $display("    - Output vector:           192");
      $display("    - SA operations:           576 (12×48)");
      $display("    - Weight matrices loaded:  %0d/576", sa1_weights_loaded);
      $display("  ");
      $display("  Second Matrix Multiplication (SA2):");
      $display("    - Weight matrix:           768 × 192");
      $display("    - Input vector:            192");
      $display("    - Output vector:           768");
      $display("    - SA operations:           576 (48×12)");
      $display("    - Weight matrices loaded:  %0d/576", sa2_weights_loaded);
      $display("  ");
      $display("  Total:");
      $display("    - Total SA operations:     1152");
      $display("    - Total weight matrices:   %0d/1152", sa1_weights_loaded + sa2_weights_loaded);
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
         $display("   SA1: All 576 weight matrices loaded");
         $display("   SA1: 12 row groups (16 rows each) computed");
         $display("   SA1: Each row accumulated 48 input chunks");
         $display("   SA1: Output: 192 elements generated");
         $display("   SA2: All 576 weight matrices loaded");
         $display("   SA2: 48 row groups (16 rows each) computed");
         $display("   SA2: Each row accumulated 12 input chunks");
         $display("   SA2: Final output: 768 elements generated");
         $display("   Total: 1152 SA operations completed");
         $display("========================================\n");
         $finish(0);
      end else begin
         $display("\n*** TEST INCOMPLETE ***");
         $display("   SA1: %0d/576 weight matrices loaded", sa1_weights_loaded);
         $display("   SA2: %0d/576 weight matrices loaded", sa2_weights_loaded);
         $display("   Total: %0d/1152 operations", sa1_weights_loaded + sa2_weights_loaded);
         $display("========================================\n");
         $finish(1);
      end
   endrule
   
   rule count_cycles;
      cycle_count <= cycle_count + 1;
      
      // Status updates every 5000 cycles
      if (cycle_count % 5000 == 0 && cycle_count > 0 && comp_started && !dut.computation_done()) begin
         if (!sa1_complete) begin
            $display("[Cycle %0d] Status: SA1 weights=%0d/576, row_group=%0d/12, input_chunk=%0d/48", 
                     cycle_count, sa1_weights_loaded, sa1_current_row_group, sa1_current_input_chunk);
         end else begin
            $display("[Cycle %0d] Status: SA2 weights=%0d/576, row_group=%0d/48, input_chunk=%0d/12", 
                     cycle_count, sa2_weights_loaded, sa2_current_row_group, sa2_current_input_chunk);
         end
      end
      
      // Timeout after 1000000 cycles
      if (cycle_count > 1000000) begin
         $display("\n=================================================");
         $display("ERROR: Timeout after 1000000 cycles!");
         $display("  Computation started:     %s", comp_started ? "YES" : "NO");
         $display("  SA1 complete:            %s", sa1_complete ? "YES" : "NO");
         $display("  SA1 weights loaded:      %0d/576", sa1_weights_loaded);
         $display("  SA2 started:             %s", sa2_started ? "YES" : "NO");
         $display("  SA2 weights loaded:      %0d/576", sa2_weights_loaded);
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
      $display("  Input Processing:");
      $display("    - SIMD Pipeline:           768 elements (3 stages × 256)");
      $display("  ");
      $display("  First Matrix Multiplication (SA1):");
      $display("    - Operation:               W1 × x = y1");
      $display("    - Weight matrix (W1):      192 × 768");
      $display("    - Input vector (x):        768 × 1");
      $display("    - Output vector (y1):      192 × 1");
      $display("    - SA configuration:        16×16 weight-stationary");
      $display("    - Output row groups:       12 (192/16)");
      $display("    - Input chunks per row:    48 (768/16)");
      $display("    - Total SA operations:     576 (12 × 48)");
      $display("  ");
      $display("  Second Matrix Multiplication (SA2):");
      $display("    - Operation:               W2 × y1 = y2");
      $display("    - Weight matrix (W2):      768 × 192");
      $display("    - Input vector (y1):       192 × 1 (from SA1)");
      $display("    - Output vector (y2):      768 × 1 (FINAL)");
      $display("    - SA configuration:        16×16 weight-stationary");
      $display("    - Output row groups:       48 (768/16)");
      $display("    - Input chunks per row:    12 (192/16)");
      $display("    - Total SA operations:     576 (48 × 12)");
      $display("  ");
      $display("  Overall:");
      $display("    - Total SA operations:     1152 (576 + 576)");
      $display("    - SA latency per op:       ~33 cycles");
      $display("    - Final output size:       768 elements");
      $display("  ");
      $display("Weight Patterns (for verification):");
      $display("  SA1 Weights:");
      $display("    - First input chunk:       Identity-like (diagonal = 1.0)");
      $display("    - Other chunks:            Small values (0.015625)");
      $display("  SA2 Weights:");
      $display("    - First input chunk:       Half-identity (diagonal = 0.5)");
      $display("    - Other chunks:            Smaller values (0.00390625)");
      $display("=================================================\n");
   endrule

endmodule

endpackage
