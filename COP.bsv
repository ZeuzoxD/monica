package COP;

import BF16::*;
import BF16_SIMD_Pipeline::*;
import BRAMHexLoader::*;
import BF16_WS_16x16SA::*;
import Vector::*;

interface IfcCOP;
   method Action start_computation(Vector#(768, BF16) x, Bit#(32) i, Vector#(768, BF16) d);  
   method Vector#(768, BF16) get_result();  // Final output is 768 elements
   method Bool computation_done();
   method Action load_sa_weights(Vector#(16, Vector#(16, BF16)) w);
endinterface

typedef enum {
   Idle, InitBRAMs, WaitK1Ready, SliceStage0, LaunchStage0, SliceStage1,
   WaitK2AndStage0, LaunchStage1, SliceStage2, WaitK3AndStage1, LaunchStage2,
   WaitStage2, WaitSA1Complete, WaitSA2Complete, Done
} State deriving (Bits, Eq);

typedef enum {SA_Idle, SA_WaitWeights, SA_Compute, SA_RowDone, SA_AllDone} SA_State deriving (Bits, Eq);

(* synthesize *)
module mkCOP(IfcCOP);
   String bramFile1 = "data.hex";
   String bramFile2 = "data.hex";

   BF16_SA_IFC sa <- mkBF16_16x16SA();
   BF16AdderIFC bf16_add <- mkBF16Adder(); 
   IfcBF16_SIMD_Pipeline pipeline <- mkBF16_SIMD_Pipeline();
   BRAMLoader#(16) bram_loader_1 <- mkBRAMLoader(bramFile1);
   BRAMLoader#(16) bram_loader_2 <- mkBRAMLoader(bramFile2);
   
   Reg#(Vector#(768, BF16)) input_x <- mkRegU();
   Reg#(Vector#(768, BF16)) input_d <- mkRegU();
   Reg#(Bit#(32)) input_i <- mkRegU();
   Reg#(Vector#(256, BF16)) chunk_x <- mkRegU();
   Reg#(Vector#(256, BF16)) chunk_d <- mkRegU();
   Reg#(Vector#(256, BF16)) chunk_k1 <- mkRegU();
   Reg#(Vector#(256, BF16)) chunk_k2 <- mkRegU();

   Reg#(Vector#(256, BF16)) result_stage0 <- mkRegU();
   Reg#(Vector#(256, BF16)) result_stage1 <- mkRegU();
   Reg#(Vector#(256, BF16)) result_stage2 <- mkRegU();
   
   // Full 768-element vector from SIMD pipeline (all 3 stages combined)
   Reg#(Vector#(768, BF16)) simd_full_result <- mkRegU();
   Reg#(Bool) simd_results_ready <- mkReg(False);
   
   Reg#(State) state <- mkReg(Idle);
   Reg#(Bit#(32)) cycle_count <- mkReg(0);
   Reg#(Bool) k1_fetched <- mkReg(False);
   Reg#(Bool) k2_fetched <- mkReg(False);
   Reg#(Bool) k3_fetched <- mkReg(False);
   Reg#(Bool) sliced <- mkReg(False);
   Reg#(Bool) stage0_captured <- mkReg(False);
   Reg#(Bool) stage1_captured <- mkReg(False);
   Reg#(Bool) stage2_captured <- mkReg(False);
  
   // SA control for FIRST matrix multiplication: 192x768 -> 192
   Reg#(SA_State) sa1_state <- mkReg(SA_Idle);
   Reg#(Vector#(192, BF16)) sa1_output <- mkReg(unpack(0));  // Output from first matmul
   Reg#(Vector#(16, BF16)) sa1_accumulator <- mkReg(unpack(0));
   Reg#(Bit#(6)) sa1_input_chunk_idx <- mkReg(0);   // 0-47 (768/16 = 48 input chunks)
   Reg#(Bit#(4)) sa1_output_row_idx <- mkReg(0);    // 0-11 (192/16 = 12 output row groups)
   Reg#(Bool) sa1_weights_ready <- mkReg(False);
   Reg#(Bool) sa1_processing_complete <- mkReg(False);
   Reg#(Bool) sa1_started <- mkReg(False);

   // SA control for SECOND matrix multiplication: 768x192 -> 768
   Reg#(SA_State) sa2_state <- mkReg(SA_Idle);
   Reg#(Vector#(768, BF16)) sa2_output <- mkReg(unpack(0));  // Final output
   Reg#(Vector#(16, BF16)) sa2_accumulator <- mkReg(unpack(0));
   Reg#(Bit#(4)) sa2_input_chunk_idx <- mkReg(0);   // 0-11 (192/16 = 12 input chunks)
   Reg#(Bit#(6)) sa2_output_row_idx <- mkReg(0);    // 0-47 (768/16 = 48 output row groups)
   Reg#(Bool) sa2_weights_ready <- mkReg(False);
   Reg#(Bool) sa2_processing_complete <- mkReg(False);
   Reg#(Bool) sa2_started <- mkReg(False);

   rule count_cycles; cycle_count <= cycle_count + 1; endrule

   rule init_brams (state == InitBRAMs);
      bram_loader_1.start(); bram_loader_2.start(); state <= WaitK1Ready;
      $display("[Cycle %0d] COP: BRAM loaders started", cycle_count);
   endrule
   
   rule wait_k1_ready (state == WaitK1Ready && bram_loader_1.k1_ready() && bram_loader_2.k1_ready());
      state <= SliceStage0;
      $display("[Cycle %0d] COP: K1 ready - Starting Stage 0", cycle_count);
   endrule

   rule slice_stage0 (state == SliceStage0 && !sliced);
      Vector#(256, BF16) x_slice = newVector(); Vector#(256, BF16) d_slice = newVector();
      for (Integer idx = 0; idx < 256; idx = idx + 1) begin
         x_slice[idx] = input_x[idx]; d_slice[idx] = input_d[idx];
      end
      chunk_x <= x_slice; chunk_d <= d_slice; sliced <= True;
      $display("[Cycle %0d] Stage 0: Sliced x[0:255], d[0:255]", cycle_count);
   endrule
   
   rule fetch_k_stage0 (state == SliceStage0 && sliced && !k1_fetched);
      let k1_bram1 = bram_loader_1.getVectorK1(); let k1_bram2 = bram_loader_2.getVectorK1();
      Vector#(256, BF16) k1_vec = newVector(); Vector#(256, BF16) k2_vec = newVector();
      for (Integer idx = 0; idx < 256; idx = idx + 1) begin
         k1_vec[idx] = unpack(k1_bram1[idx]); k2_vec[idx] = unpack(k1_bram2[idx]);
      end
      chunk_k1 <= k1_vec; chunk_k2 <= k2_vec; k1_fetched <= True;
      $display("[Cycle %0d] Stage 0: Fetched K1 from BRAMs", cycle_count);
   endrule
   
   rule launch_stage0 (state == SliceStage0 && k1_fetched);
      pipeline.start_computation(chunk_x, chunk_k1, chunk_k2, chunk_d);
      state <= SliceStage1; sliced <= False; k1_fetched <= False;
      $display("[Cycle %0d] Stage 0: Launched", cycle_count);
   endrule

   rule slice_stage1 (state == SliceStage1 && !sliced);
      Vector#(256, BF16) x_slice = newVector(); Vector#(256, BF16) d_slice = newVector();
      for (Integer idx = 0; idx < 256; idx = idx + 1) begin
         x_slice[idx] = input_x[256 + idx]; d_slice[idx] = input_d[256 + idx];
      end
      chunk_x <= x_slice; chunk_d <= d_slice; sliced <= True; state <= WaitK2AndStage0;
      $display("[Cycle %0d] Stage 1: Sliced x[256:511], d[256:511]", cycle_count);
   endrule

   rule capture_stage0_result (state == WaitK2AndStage0 && pipeline.computation_done() && !stage0_captured);
      let res = pipeline.get_result();
      result_stage0 <= res; stage0_captured <= True;
      $display("[Cycle %0d] Stage 0: Result captured [0:255]", cycle_count);
   endrule

   rule wait_k2_and_launch (state == WaitK2AndStage0 && stage0_captured && bram_loader_1.k2_ready() && bram_loader_2.k2_ready());
      state <= LaunchStage1; stage0_captured <= False;
      $display("[Cycle %0d] K2 ready. Launching Stage 1...", cycle_count);
   endrule

   rule fetch_k_stage1 (state == LaunchStage1 && sliced && !k2_fetched);
      let k2_bram1 = bram_loader_1.getVectorK2(); let k2_bram2 = bram_loader_2.getVectorK2();
      Vector#(256, BF16) k1_vec = newVector(); Vector#(256, BF16) k2_vec = newVector();
      for (Integer idx = 0; idx < 256; idx = idx + 1) begin
         k1_vec[idx] = unpack(k2_bram1[idx]); k2_vec[idx] = unpack(k2_bram2[idx]);
      end
      chunk_k1 <= k1_vec; chunk_k2 <= k2_vec; k2_fetched <= True;
      $display("[Cycle %0d] Stage 1: Fetched K2 from BRAMs", cycle_count);
   endrule
   
   rule launch_stage1 (state == LaunchStage1 && k2_fetched);
      pipeline.start_computation(chunk_x, chunk_k1, chunk_k2, chunk_d);
      state <= SliceStage2; sliced <= False; k2_fetched <= False;
      $display("[Cycle %0d] Stage 1: Launched", cycle_count);
   endrule

   rule slice_stage2 (state == SliceStage2 && !sliced);
      Vector#(256, BF16) x_slice = newVector(); Vector#(256, BF16) d_slice = newVector();
      for (Integer idx = 0; idx < 256; idx = idx + 1) begin
         x_slice[idx] = input_x[512 + idx]; d_slice[idx] = input_d[512 + idx];
      end
      chunk_x <= x_slice; chunk_d <= d_slice; sliced <= True; state <= WaitK3AndStage1;
      $display("[Cycle %0d] Stage 2: Sliced x[512:767], d[512:767]", cycle_count);
   endrule
   
   rule capture_stage1_result (state == WaitK3AndStage1 && pipeline.computation_done() && !stage1_captured);
      result_stage1 <= pipeline.get_result();
      stage1_captured <= True;
      $display("[Cycle %0d] Stage 1: Result captured [256:511]", cycle_count);
   endrule
   
   rule wait_k3_and_launch (state == WaitK3AndStage1 && stage1_captured && bram_loader_1.k3_ready() && bram_loader_2.k3_ready());
      state <= LaunchStage2; stage1_captured <= False;
      $display("[Cycle %0d] K3 ready. Launching Stage 2...", cycle_count);
   endrule
   
   rule fetch_k_stage2 (state == LaunchStage2 && sliced && !k3_fetched);
      let k3_bram1 = bram_loader_1.getVectorK3(); let k3_bram2 = bram_loader_2.getVectorK3();
      Vector#(256, BF16) k1_vec = newVector(); Vector#(256, BF16) k2_vec = newVector();
      for (Integer idx = 0; idx < 256; idx = idx + 1) begin
         k1_vec[idx] = unpack(k3_bram1[idx]); k2_vec[idx] = unpack(k3_bram2[idx]);
      end
      chunk_k1 <= k1_vec; chunk_k2 <= k2_vec; k3_fetched <= True;
      $display("[Cycle %0d] Stage 2: Fetched K3 from BRAMs", cycle_count);
   endrule
   
   rule launch_stage2 (state == LaunchStage2 && k3_fetched);
      pipeline.start_computation(chunk_x, chunk_k1, chunk_k2, chunk_d);
      state <= WaitStage2; sliced <= False; k3_fetched <= False;
      $display("[Cycle %0d] Stage 2: Launched", cycle_count);
   endrule

   rule wait_stage2 (state == WaitStage2 && pipeline.computation_done() && !stage2_captured);
      result_stage2 <= pipeline.get_result();
      stage2_captured <= True;
      $display("[Cycle %0d] Stage 2: Result captured [512:767]", cycle_count);
   endrule

   rule assemble_full_result (state == WaitStage2 && stage2_captured && !simd_results_ready);
      // Combine all three stages into one 768-element vector
      Vector#(768, BF16) full_vec = newVector();
      for (Integer i = 0; i < 256; i = i + 1) begin
         full_vec[i] = result_stage0[i];
         full_vec[256 + i] = result_stage1[i];
         full_vec[512 + i] = result_stage2[i];
      end
      simd_full_result <= full_vec;
      simd_results_ready <= True;
      
      // Initialize FIRST SA processing (192x768 -> 192)
      sa1_state <= SA_WaitWeights;
      sa1_input_chunk_idx <= 0;
      sa1_output_row_idx <= 0;
      sa1_weights_ready <= False;
      sa1_started <= False;
      sa1_accumulator <= unpack(0);
      
      state <= WaitSA1Complete;
      $display("[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] SIMD Pipeline Complete - All 768 elements ready", cycle_count);
      $display("[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] Starting FIRST MatMul: 192x768 -> 192", cycle_count);
      $display("[Cycle %0d]   - 12 output row groups (16 rows each)", cycle_count);
      $display("[Cycle %0d]   - 48 input chunks per row (16 elements each)", cycle_count);
      $display("[Cycle %0d]   - Total SA operations: 12 x 48 = 576", cycle_count);
      $display("[Cycle %0d] ========================================", cycle_count);
   endrule

   // ============================================================================
   // FIRST MATRIX MULTIPLICATION: 192x768 @ 768 -> 192
   // ============================================================================

   rule sa1_load_activations (sa1_state == SA_WaitWeights && sa1_weights_ready && !sa1_started);
      Bit#(10) start_idx = zeroExtend(sa1_input_chunk_idx) << 4;
      Vector#(16, BF16) act_chunk = newVector();
      for (Integer i = 0; i < 16; i = i + 1) begin
         act_chunk[i] = simd_full_result[start_idx + fromInteger(i)];
      end
      sa.load_activations(act_chunk);
      sa.start();
      sa1_started <= True;
      sa1_state <= SA_Compute;
      $display("[Cycle %0d] SA1: Row_group=%0d, Input_chunk=%0d/48, Elements[%0d:%0d]", 
               cycle_count, sa1_output_row_idx, sa1_input_chunk_idx, start_idx, start_idx + 15);
   endrule

   rule sa1_collect_result (sa1_state == SA_Compute && sa.is_done());
      let sa_result <- sa.get_result();
      
      Vector#(16, BF16) new_acc = newVector();
      for (Integer i = 0; i < 16; i = i + 1) begin
         Bit#(16) acc = bf16_add.add(fromBF16(sa1_accumulator[i]), fromBF16(sa_result[i])); 
         new_acc[i] = toBF16(acc); 
      end
      sa1_accumulator <= new_acc;
      
      $display("[Cycle %0d] SA1: Row_group=%0d, Input_chunk=%0d done, accumulated", 
               cycle_count, sa1_output_row_idx, sa1_input_chunk_idx);
      
      if (sa1_input_chunk_idx == 47) begin
         sa1_state <= SA_RowDone;
         $display("[Cycle %0d] SA1: Row_group=%0d COMPLETE (all 48 chunks accumulated)", 
                  cycle_count, sa1_output_row_idx);
      end else begin
         sa1_input_chunk_idx <= sa1_input_chunk_idx + 1;
         sa1_weights_ready <= False;
         sa1_started <= False;
         sa1_state <= SA_WaitWeights;
      end
   endrule

   rule sa1_row_done (sa1_state == SA_RowDone);
      Vector#(192, BF16) temp_output = sa1_output;
      Bit#(8) output_start_idx = zeroExtend(sa1_output_row_idx) << 4;
      for (Integer i = 0; i < 16; i = i + 1) begin
         temp_output[output_start_idx + fromInteger(i)] = sa1_accumulator[i];
      end
      sa1_output <= temp_output;
      
      $display("[Cycle %0d] SA1: Stored row_group=%0d outputs [%0d:%0d]", 
               cycle_count, sa1_output_row_idx, output_start_idx, output_start_idx + 15);
      
      if (sa1_output_row_idx == 11) begin
         sa1_state <= SA_AllDone;
         sa1_processing_complete <= True;
         $display("[Cycle %0d] ========================================", cycle_count);
         $display("[Cycle %0d] SA1: ALL 192 OUTPUTS COMPLETE!", cycle_count);
         $display("[Cycle %0d]   - Processed 12 row groups x 48 input chunks = 576 operations", cycle_count);
         $display("[Cycle %0d] ========================================", cycle_count);
      end else begin
         sa1_output_row_idx <= sa1_output_row_idx + 1;
         sa1_input_chunk_idx <= 0;
         sa1_accumulator <= unpack(0);
         sa1_weights_ready <= False;
         sa1_started <= False;
         sa1_state <= SA_WaitWeights;
         $display("[Cycle %0d] SA1: Moving to row_group=%0d", cycle_count, sa1_output_row_idx + 1);
      end
   endrule

   rule transition_to_sa2 (state == WaitSA1Complete && sa1_processing_complete);
      // Initialize SECOND SA processing (768x192 -> 768)
      sa2_state <= SA_WaitWeights;
      sa2_input_chunk_idx <= 0;
      sa2_output_row_idx <= 0;
      sa2_weights_ready <= False;
      sa2_started <= False;
      sa2_accumulator <= unpack(0);
      
      state <= WaitSA2Complete;
      $display("[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] Starting SECOND MatMul: 768x192 -> 768", cycle_count);
      $display("[Cycle %0d]   - 48 output row groups (16 rows each)", cycle_count);
      $display("[Cycle %0d]   - 12 input chunks per row (16 elements each)", cycle_count);
      $display("[Cycle %0d]   - Total SA operations: 48 x 12 = 576", cycle_count);
      $display("[Cycle %0d] ========================================", cycle_count);
   endrule

   // ============================================================================
   // SECOND MATRIX MULTIPLICATION: 768x192 @ 192 -> 768
   // ============================================================================

   rule sa2_load_activations (sa2_state == SA_WaitWeights && sa2_weights_ready && !sa2_started);
      Bit#(8) start_idx = zeroExtend(sa2_input_chunk_idx) << 4;
      Vector#(16, BF16) act_chunk = newVector();
      for (Integer i = 0; i < 16; i = i + 1) begin
         act_chunk[i] = sa1_output[start_idx + fromInteger(i)];
      end
      sa.load_activations(act_chunk);
      sa.start();
      sa2_started <= True;
      sa2_state <= SA_Compute;
      $display("[Cycle %0d] SA2: Row_group=%0d, Input_chunk=%0d/12, Elements[%0d:%0d]", 
               cycle_count, sa2_output_row_idx, sa2_input_chunk_idx, start_idx, start_idx + 15);
   endrule

   rule sa2_collect_result (sa2_state == SA_Compute && sa.is_done());
      let sa_result <- sa.get_result();
      
      Vector#(16, BF16) new_acc = newVector();
      for (Integer i = 0; i < 16; i = i + 1) begin
         Bit#(16) acc = bf16_add.add(fromBF16(sa2_accumulator[i]), fromBF16(sa_result[i])); 
         new_acc[i] = toBF16(acc); 
      end
      sa2_accumulator <= new_acc;
      
      $display("[Cycle %0d] SA2: Row_group=%0d, Input_chunk=%0d done, accumulated", 
               cycle_count, sa2_output_row_idx, sa2_input_chunk_idx);
      
      if (sa2_input_chunk_idx == 11) begin
         sa2_state <= SA_RowDone;
         $display("[Cycle %0d] SA2: Row_group=%0d COMPLETE (all 12 chunks accumulated)", 
                  cycle_count, sa2_output_row_idx);
      end else begin
         sa2_input_chunk_idx <= sa2_input_chunk_idx + 1;
         sa2_weights_ready <= False;
         sa2_started <= False;
         sa2_state <= SA_WaitWeights;
      end
   endrule

   rule sa2_row_done (sa2_state == SA_RowDone);
      Vector#(768, BF16) temp_output = sa2_output;
      Bit#(10) output_start_idx = zeroExtend(sa2_output_row_idx) << 4;
      for (Integer i = 0; i < 16; i = i + 1) begin
         temp_output[output_start_idx + fromInteger(i)] = sa2_accumulator[i];
      end
      sa2_output <= temp_output;
      
      $display("[Cycle %0d] SA2: Stored row_group=%0d outputs [%0d:%0d]", 
               cycle_count, sa2_output_row_idx, output_start_idx, output_start_idx + 15);
      
      if (sa2_output_row_idx == 47) begin
         sa2_state <= SA_AllDone;
         sa2_processing_complete <= True;
         $display("[Cycle %0d] ========================================", cycle_count);
         $display("[Cycle %0d] SA2: ALL 768 OUTPUTS COMPLETE!", cycle_count);
         $display("[Cycle %0d]   - Processed 48 row groups x 12 input chunks = 576 operations", cycle_count);
         $display("[Cycle %0d] ========================================", cycle_count);
      end else begin
         sa2_output_row_idx <= sa2_output_row_idx + 1;
         sa2_input_chunk_idx <= 0;
         sa2_accumulator <= unpack(0);
         sa2_weights_ready <= False;
         sa2_started <= False;
         sa2_state <= SA_WaitWeights;
         $display("[Cycle %0d] SA2: Moving to row_group=%0d", cycle_count, sa2_output_row_idx + 1);
      end
   endrule

   rule wait_sa2_complete (state == WaitSA2Complete && sa2_processing_complete);
      state <= Done;
      $display("[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] COP: ALL COMPUTATIONS COMPLETE!", cycle_count);
      $display("[Cycle %0d]   - SIMD Pipeline: 768 elements", cycle_count);
      $display("[Cycle %0d]   - First MatMul:  192x768 -> 192 (576 ops)", cycle_count);
      $display("[Cycle %0d]   - Second MatMul: 768x192 -> 768 (576 ops)", cycle_count);
      $display("[Cycle %0d]   - Total SA operations: 1152", cycle_count);
      $display("[Cycle %0d] ========================================", cycle_count);
   endrule

   method Action start_computation(Vector#(768, BF16) x, Bit#(32) i, Vector#(768, BF16) d) if (state == Idle);
      $display("\n[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] COP: Starting computation (i=%0d)", cycle_count, i);
      $display("[Cycle %0d] ========================================\n", cycle_count);
      input_x <= x; input_d <= d; input_i <= i; state <= InitBRAMs;
      k1_fetched <= False; k2_fetched <= False; k3_fetched <= False;
      sliced <= False; stage0_captured <= False; stage1_captured <= False;
      stage2_captured <= False; simd_results_ready <= False;
   endmethod

   method Vector#(768, BF16) get_result() if (state == Done);
      return sa2_output;  // Return final 768-element output
   endmethod

   method Bool computation_done() = (state == Done);

   method Action load_sa_weights(Vector#(16, Vector#(16, BF16)) w);
      // Route weights to the appropriate SA stage
      if (state == WaitSA1Complete && sa1_state == SA_WaitWeights && !sa1_weights_ready) begin
         sa.load_weights(w);
         sa1_weights_ready <= True;
         $display("[Cycle %0d] COP: Loaded SA1 weights for row_group=%0d, input_chunk=%0d", 
                  cycle_count, sa1_output_row_idx, sa1_input_chunk_idx);
      end
      else if (state == WaitSA2Complete && sa2_state == SA_WaitWeights && !sa2_weights_ready) begin
         sa.load_weights(w);
         sa2_weights_ready <= True;
         $display("[Cycle %0d] COP: Loaded SA2 weights for row_group=%0d, input_chunk=%0d", 
                  cycle_count, sa2_output_row_idx, sa2_input_chunk_idx);
      end
   endmethod

endmodule

endpackage
