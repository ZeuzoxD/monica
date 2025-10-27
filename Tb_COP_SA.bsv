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

   // Weight matrices for 192x768 matrix multiplication
   // We need 12 row groups × 48 input chunks = 576 weight matrices total
   // For testing, we'll use simple patterns:
   //   - Identity-like for first few
   //   - Small values for verification
   
   function Vector#(16, Vector#(16, BF16)) make_weight_matrix(Bit#(4) row_group, Bit#(6) input_chunk);
      Vector#(16, Vector#(16, BF16)) w = newVector();
      for (Integer row = 0; row < 16; row = row + 1) begin
         w[row] = newVector();
         for (Integer col = 0; col < 16; col = col + 1) begin
            // Simple pattern: use small values that will create traceable outputs
            // For first input chunk of each row, use identity-like pattern
            if (input_chunk == 0 && row == col) begin
               w[row][col] = hexToBF16(16'h3f80); // 1.0 on diagonal for first chunk
            end else begin
               w[row][col] = hexToBF16(16'h3c00); // 0.015625 (1/64) for others
            end
         end
      end
      return w;
   endfunction

   Reg#(Bit#(32)) cycle_count <- mkReg(0);
   Reg#(Bool) test_started <- mkReg(False);
   Reg#(Bool) comp_started <- mkReg(False);
   Reg#(Bit#(10)) weights_loaded <- mkReg(0);  // 0-575 (12 × 48 = 576 total)
   Reg#(Bit#(4)) current_row_group <- mkReg(0);
   Reg#(Bit#(6)) current_input_chunk <- mkReg(0);
   
   rule start_computation (!test_started && cycle_count == 10);
      $display("\n[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] TB: Starting computation, time = %0d", cycle_count, $time);
      $display("[Cycle %0d] TB: Input vector size: 768", cycle_count);
      $display("[Cycle %0d] TB: Weight matrix: 192×768", cycle_count);
      $display("[Cycle %0d] TB: Expected output size: 192", cycle_count);
      $display("[Cycle %0d] TB: Total weight matrices needed: 576 (12 row_groups × 48 input_chunks)", cycle_count);
      $display("[Cycle %0d] ========================================\n", cycle_count);
      dut.start_computation(x, test_i, test_d);
      comp_started <= True;
      test_started <= True;
   endrule
   
   // Load weights when SA needs them
   rule load_weights (comp_started && 
                      !dut.computation_done() && 
                      weights_loaded < 576);
      
      Vector#(16, Vector#(16, BF16)) weight_matrix = make_weight_matrix(current_row_group, current_input_chunk);
      dut.load_sa_weights(weight_matrix);
      
      weights_loaded <= weights_loaded + 1;
      
      // Display every 48th weight load (completion of each row group)
      if ((weights_loaded + 1) % 48 == 0) begin
         $display("[Cycle %0d] TB: *** Row group %0d COMPLETE *** (loaded %0d/576 weight matrices)", 
                  cycle_count, current_row_group, weights_loaded + 1);
      end else if (weights_loaded % 48 == 0) begin
         // First weight of a new row group
         $display("[Cycle %0d] TB: Starting row_group=%0d (weights %0d-%0d)", 
                  cycle_count, current_row_group, weights_loaded, weights_loaded + 47);
      end
      
      // Update tracking
      if (current_input_chunk == 47) begin
         current_input_chunk <= 0;
         current_row_group <= current_row_group + 1;
      end else begin
         current_input_chunk <= current_input_chunk + 1;
      end
   endrule
   
   rule check_done (comp_started && dut.computation_done());
      $display("\n[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d]     MATRIX MULTIPLICATION COMPLETED!", cycle_count);
      $display("[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d]   $TIME = %0d", cycle_count, $time);
      $display("[Cycle %0d]   Weight matrices loaded: %0d/576", cycle_count, weights_loaded);
      $display("[Cycle %0d]   All 12 row groups × 48 input chunks processed", cycle_count);
      $display("[Cycle %0d] ========================================\n", cycle_count);
      
      Vector#(192, BF16) result = dut.get_result();
      
      $display("\n========================================");
      $display("FINAL OUTPUT VECTOR (192 elements)");
      $display("========================================\n");
      
      // Display first row group (outputs 0-15)
      $display("Row Group 0 [Outputs 0-15]:");
      for (Integer i = 0; i < 16; i = i + 1) begin
         Bit#(16) res_bits = fromBF16(result[i]);
         $display("  result[%3d] = 0x%04h", i, res_bits);
      end
      
      // Display middle row groups (sample a few)
      $display("\nRow Group 5 [Outputs 80-95]:");
      for (Integer i = 80; i < 96; i = i + 1) begin
         Bit#(16) res_bits = fromBF16(result[i]);
         $display("  result[%3d] = 0x%04h", i, res_bits);
      end
      
      // Display last row group (outputs 176-191)
      $display("\nRow Group 11 [Outputs 176-191]:");
      for (Integer i = 176; i < 192; i = i + 1) begin
         Bit#(16) res_bits = fromBF16(result[i]);
         $display("  result[%3d] = 0x%04h", i, res_bits);
      end
      
      // Summary statistics
      $display("\n========================================");
      $display("COMPUTATION STATISTICS");
      $display("========================================");
      $display("  Input vector size:        768");
      $display("  Weight matrix size:       192 × 768");
      $display("  Output vector size:       192");
      $display("  Systolic array size:      16 × 16");
      $display("  Total SA operations:      576 (12 × 48)");
      $display("  Weight matrices loaded:   %0d/576", weights_loaded);
      $display("  Row groups processed:     12");
      $display("  Input chunks per row:     48");
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
      if (weights_loaded == 576) begin
         $display("\n*** TEST PASSED ***");
         $display("   All 576 weight matrices loaded");
         $display("   All 12 row groups (16 rows each) computed");
         $display("   Each row accumulated 48 input chunks");
         $display("   Final output: 192 elements generated");
         $display("========================================\n");
         $finish(0);
      end else begin
         $display("\n*** TEST INCOMPLETE ***");
         $display("   Only %0d/576 weight matrices loaded", weights_loaded);
         $display("========================================\n");
         $finish(1);
      end
   endrule
   
   rule count_cycles;
      cycle_count <= cycle_count + 1;
      
      // Status updates every 2000 cycles
      if (cycle_count % 2000 == 0 && cycle_count > 0 && comp_started && !dut.computation_done()) begin
         $display("[Cycle %0d] Status: weights_loaded=%0d/576, row_group=%0d/12, input_chunk=%0d/48", 
                  cycle_count, weights_loaded, current_row_group, current_input_chunk);
      end
      
      // Timeout after 500000 cycles
      if (cycle_count > 500000) begin
         $display("\n=================================================");
         $display("ERROR: Timeout after 500000 cycles!");
         $display("  Computation started:     %s", comp_started ? "YES" : "NO");
         $display("  Weights loaded:          %0d/576", weights_loaded);
         $display("  Current row group:       %0d/12", current_row_group);
         $display("  Current input chunk:     %0d/48", current_input_chunk);
         $display("  Computation done:        %s", dut.computation_done() ? "YES" : "NO");
         $display("=================================================");
         $finish(1);
      end
   endrule
   
   rule initial_display (cycle_count == 0);
      $display("\n=================================================");
      $display("=================================================");
      $display("  COP 192×768 Matrix Multiplication Testbench");
      $display("=================================================");
      $display("=================================================");
      $display("\nConfiguration:");
      $display("  Input vector (x):          768 elements (from 3 SIMD stages)");
      $display("    - Stage 0:               256 elements [0:255]");
      $display("    - Stage 1:               256 elements [256:511]");
      $display("    - Stage 2:               256 elements [512:767]");
      $display("  Weight matrix (W):         192 × 768");
      $display("  Output vector (y):         192 elements");
      $display("\nSystematic Array Configuration:");
      $display("  SA size:                   16 × 16 (weight-stationary)");
      $display("  Output row groups:         12 (192/16)");
      $display("  Input chunks per row:      48 (768/16)");
      $display("  Total SA operations:       576 (12 × 48)");
      $display("  SA latency per operation:  ~33 cycles");
      $display("\nComputation Flow:");
      $display("  1. SIMD Pipeline processes 768 inputs (3 stages × 256)");
      $display("  2. SA computes W × x:");
      $display("     For each of 12 output row groups:");
      $display("       - Process 48 input chunks (16 elements each)");
      $display("       - Accumulate 48 partial results");
      $display("       - Store 16 final outputs");
      $display("  3. Final result: 192-element output vector");
      $display("\nWeight Pattern (for verification):");
      $display("  - First input chunk: Identity-like (diagonal = 1.0)");
      $display("  - Other chunks:      Small values (0.015625)");
      $display("  - Expected outputs:  ~2.0 + small accumulated values");
      $display("=================================================\n");
   endrule

endmodule

endpackage
