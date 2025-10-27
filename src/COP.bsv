package COP;

import BF16::*;
import BF16_SIMD_Pipeline::*;
import BRAMLoaderWrapperBE::*;
import BF16_WS_16x16SA::*;
import Vector::*;

interface IfcCOP;
   method Action start_computation(Vector#(768, BF16) x, Bit#(32) i, Vector#(768, BF16) d);  
   method Vector#(768, BF16) get_result();
   method Bool computation_done();
   method Action load_sa1_weights(Vector#(16, Vector#(16, BF16)) w);  // First MM weights
   method Action load_sa2_weights(Vector#(16, Vector#(16, BF16)) w);  // Second MM weights
endinterface

typedef enum {
   Idle, InitBRAMs, LoadK1, 
   SliceStage0, LaunchStage0, ComputeStage0_LoadK2,
   WaitStage0AndK2, LaunchStage1, ComputeStage1_LoadK3,
   WaitStage1AndK3, LaunchStage2, ComputeStage2,
   WaitStage2, AssembleSIMDResults, WaitSA1Complete, WaitSA2Complete, Done
} State deriving (Bits, Eq);

typedef enum {SA_Idle, SA_WaitWeights, SA_LoadAct, SA_Compute, SA_RowDone, SA_AllDone} SA_State deriving (Bits, Eq);

typedef enum {Load_Idle, Load_Loading, Load_Done} LoadState deriving (Bits, Eq);

(* synthesize *)
module mkCOP(IfcCOP);

   BF16_SA_IFC sa <- mkBF16_16x16SA(); 
   BF16AdderIFC bf16_add <- mkBF16Adder();
   IfcBF16_SIMD_Pipeline pipeline <- mkBF16_SIMD_Pipeline();
   
   // Instantiate BRAM loader for dual-port access
   BRAMLoaderConcrete bram_loader <- mkBRAMLoaderConcrete();
   
   Reg#(Vector#(768, BF16)) input_x <- mkRegU();
   Reg#(Vector#(768, BF16)) input_d <- mkRegU();
   Reg#(Bit#(32)) input_i <- mkRegU();
   
   // Chunks for each stage
   Reg#(Vector#(256, BF16)) chunk_x <- mkRegU();
   Reg#(Vector#(256, BF16)) chunk_d <- mkRegU();
   Reg#(Vector#(256, BF16)) chunk_k1 <- mkRegU();
   Reg#(Vector#(256, BF16)) chunk_k2 <- mkRegU();
   
   // Store K vectors loaded from BRAM (3 vectors of 256 elements each)
   Reg#(Vector#(256, BF16)) k1_vec <- mkRegU();
   Reg#(Vector#(256, BF16)) k2_vec <- mkRegU();
   Reg#(Vector#(256, BF16)) k3_vec <- mkRegU();
   
   // Results from each SIMD stage
   Reg#(Vector#(256, BF16)) result_stage0 <- mkRegU();
   Reg#(Vector#(256, BF16)) result_stage1 <- mkRegU();
   Reg#(Vector#(256, BF16)) result_stage2 <- mkRegU();
   
   // Full 768-element vector from SIMD pipeline (all 3 stages combined)
   Reg#(Vector#(768, BF16)) simd_full_result <- mkRegU();
   Reg#(Bool) simd_results_ready <- mkReg(False);
   
   Reg#(State) state <- mkReg(Idle);
   Reg#(Bit#(32)) cycle_count <- mkReg(0);
   
   // BRAM loading state
   Reg#(LoadState) load_state <- mkReg(Load_Idle);
   Reg#(Bit#(10)) bram_read_idx <- mkReg(0);
   Reg#(Bool) bram_read_issued <- mkReg(False);
   Reg#(Vector#(256, BF16)) bram_buffer <- mkRegU();
   Reg#(Bit#(2)) which_k_loading <- mkReg(0);
   
   // Stage completion flags
   Reg#(Bool) stage0_done <- mkReg(False);
   Reg#(Bool) stage1_done <- mkReg(False);
   
   // First SA: 192x768 matrix multiplication (768 input -> 192 output)
   Reg#(SA_State) sa1_state <- mkReg(SA_Idle);
   Reg#(Vector#(192, BF16)) sa1_final_output <- mkReg(unpack(0));  // 192-element intermediate output
   Reg#(Vector#(16, BF16)) sa1_accumulator <- mkReg(unpack(0));
   Reg#(Bit#(6)) sa1_input_chunk_idx <- mkReg(0);   // 0-47 (768/16 = 48 input chunks)
   Reg#(Bit#(4)) sa1_output_row_idx <- mkReg(0);    // 0-11 (192/16 = 12 output row groups)
   Reg#(Bool) sa1_weights_ready <- mkReg(False);
   Reg#(Bool) sa1_processing_complete <- mkReg(False);
   Reg#(Bool) sa1_started <- mkReg(False);

   // Second SA: 768x192 matrix multiplication (192 input -> 768 output)
   Reg#(SA_State) sa2_state <- mkReg(SA_Idle);
   Reg#(Vector#(768, BF16)) sa2_final_output <- mkReg(unpack(0));  // 768-element final output
   Reg#(Vector#(16, BF16)) sa2_accumulator <- mkReg(unpack(0));
   Reg#(Bit#(4)) sa2_input_chunk_idx <- mkReg(0);    // 0-11 (192/16 = 12 input chunks)
   Reg#(Bit#(6)) sa2_output_row_idx <- mkReg(0);     // 0-47 (768/16 = 48 output row groups)
   Reg#(Bool) sa2_weights_ready <- mkReg(False);
   Reg#(Bool) sa2_processing_complete <- mkReg(False);
   Reg#(Bool) sa2_started <- mkReg(False);

   rule count_cycles; 
      cycle_count <= cycle_count + 1; 
   endrule

   rule init_brams (state == InitBRAMs && bram_loader.ready());
      state <= LoadK1;
      bram_read_idx <= 0;
      bram_read_issued <= False;
      which_k_loading <= 1;
      load_state <= Load_Loading;
      $display("[Cycle %0d] COP: BRAM loader ready, starting K1 load", cycle_count);
   endrule
   
   // Load K1 vector (addresses 0-255)
   rule load_k1 (state == LoadK1 && load_state == Load_Loading);
      if (!bram_read_issued && bram_read_idx < 256) begin
         bram_loader.requestA(bram_read_idx);
         if (bram_read_idx + 1 < 256) begin
            bram_loader.requestB(bram_read_idx + 1);
         end
         bram_read_issued <= True;
      end
      else if (bram_read_issued) begin
         let dataA <- bram_loader.responseA();
         Vector#(256, BF16) temp = bram_buffer;
         temp[bram_read_idx] = unpack(dataA);
         
         if (bram_read_idx + 1 < 256) begin
            let dataB <- bram_loader.responseB();
            temp[bram_read_idx + 1] = unpack(dataB);
            bram_read_idx <= bram_read_idx + 2;
         end else begin
            bram_read_idx <= bram_read_idx + 1;
         end
         
         bram_buffer <= temp;
         bram_read_issued <= False;
         
         if (bram_read_idx >= 254) begin
            k1_vec <= temp;
            load_state <= Load_Done;
            $display("[Cycle %0d] COP: K1 vector loaded (256 elements)", cycle_count);
         end
      end
   endrule

   rule k1_done (state == LoadK1 && load_state == Load_Done);
      state <= SliceStage0;
      load_state <= Load_Idle;
   endrule

   // Stage 0: Prepare data for processing with K1
   rule slice_stage0 (state == SliceStage0);
      Vector#(256, BF16) x_slice = newVector();
      Vector#(256, BF16) d_slice = newVector();
      for (Integer idx = 0; idx < 256; idx = idx + 1) begin
         x_slice[idx] = input_x[idx];
         d_slice[idx] = input_d[idx];
      end
      chunk_x <= x_slice;
      chunk_d <= d_slice;
      chunk_k1 <= k1_vec;
      chunk_k2 <= k1_vec;
      $display("[Cycle %0d] Stage 0: Sliced x[0:255], d[0:255]", cycle_count);
      state <= LaunchStage0;
   endrule
   
   rule launch_stage0 (state == LaunchStage0);
      pipeline.start_computation(chunk_x, chunk_k1, chunk_k2, chunk_d);
      $display("[Cycle %0d] Stage 0: Launched pipeline", cycle_count);
      state <= ComputeStage0_LoadK2;
      // Start loading K2 in parallel
      bram_read_idx <= 256;
      bram_read_issued <= False;
      which_k_loading <= 2;
      load_state <= Load_Loading;
      $display("[Cycle %0d] *** Starting K2 load in background ***", cycle_count);
   endrule

   // Background load K2 (addresses 256-511)
   rule load_k2_background (state == ComputeStage0_LoadK2 && load_state == Load_Loading);
      if (!bram_read_issued && bram_read_idx < 512) begin
         bram_loader.requestA(bram_read_idx);
         if (bram_read_idx + 1 < 512) begin
            bram_loader.requestB(bram_read_idx + 1);
         end
         bram_read_issued <= True;
      end
      else if (bram_read_issued) begin
         let dataA <- bram_loader.responseA();
         Vector#(256, BF16) temp = bram_buffer;
         Bit#(10) local_idx = bram_read_idx - 256;
         temp[local_idx] = unpack(dataA);
         
         if (bram_read_idx + 1 < 512) begin
            let dataB <- bram_loader.responseB();
            temp[local_idx + 1] = unpack(dataB);
            bram_read_idx <= bram_read_idx + 2;
         end else begin
            bram_read_idx <= bram_read_idx + 1;
         end
         
         bram_buffer <= temp;
         bram_read_issued <= False;
         
         if (bram_read_idx >= 510) begin
            k2_vec <= temp;
            load_state <= Load_Done;
            $display("[Cycle %0d] *** K2 vector loaded (background) ***", cycle_count);
         end
      end
   endrule

   // Capture Stage 0 result as soon as pipeline is done
   rule capture_stage0_result (state == ComputeStage0_LoadK2 && 
                                pipeline.computation_done() && 
                                !stage0_done);
      let res = pipeline.get_result();
      result_stage0 <= res;
      stage0_done <= True;
      $display("[Cycle %0d] Stage 0: Result captured", cycle_count);
   endrule
   
   // Wait for K2 loading to complete before moving to Stage 1
   rule wait_k2_ready (state == ComputeStage0_LoadK2 && 
                       stage0_done && 
                       load_state == Load_Done);
      $display("[Cycle %0d] K2 ready - proceeding to Stage 1", cycle_count);
      state <= WaitStage0AndK2;
      load_state <= Load_Idle;
   endrule

   rule prepare_stage1 (state == WaitStage0AndK2);
      Vector#(256, BF16) x_slice = newVector();
      Vector#(256, BF16) d_slice = newVector();
      for (Integer idx = 0; idx < 256; idx = idx + 1) begin
         x_slice[idx] = input_x[256 + idx];
         d_slice[idx] = input_d[256 + idx];
      end
      chunk_x <= x_slice;
      chunk_d <= d_slice;
      chunk_k1 <= k2_vec;
      chunk_k2 <= k2_vec;
      $display("[Cycle %0d] Stage 1: Sliced x[256:511], d[256:511]", cycle_count);
      state <= LaunchStage1;
   endrule
   
   rule launch_stage1 (state == LaunchStage1);
      pipeline.start_computation(chunk_x, chunk_k1, chunk_k2, chunk_d);
      $display("[Cycle %0d] Stage 1: Launched pipeline", cycle_count);
      state <= ComputeStage1_LoadK3;
      // Start loading K3 in parallel
      bram_read_idx <= 512;
      bram_read_issued <= False;
      which_k_loading <= 3;
      load_state <= Load_Loading;
      $display("[Cycle %0d] *** Starting K3 load in background ***", cycle_count);
   endrule

   // Background load K3 (addresses 512-767)
   rule load_k3_background (state == ComputeStage1_LoadK3 && load_state == Load_Loading);
      if (!bram_read_issued && bram_read_idx < 768) begin
         bram_loader.requestA(bram_read_idx);
         if (bram_read_idx + 1 < 768) begin
            bram_loader.requestB(bram_read_idx + 1);
         end
         bram_read_issued <= True;
      end
      else if (bram_read_issued) begin
         let dataA <- bram_loader.responseA();
         Vector#(256, BF16) temp = bram_buffer;
         Bit#(10) local_idx = bram_read_idx - 512;
         temp[local_idx] = unpack(dataA);
         
         if (bram_read_idx + 1 < 768) begin
            let dataB <- bram_loader.responseB();
            temp[local_idx + 1] = unpack(dataB);
            bram_read_idx <= bram_read_idx + 2;
         end else begin
            bram_read_idx <= bram_read_idx + 1;
         end
         
         bram_buffer <= temp;
         bram_read_issued <= False;
         
         if (bram_read_idx >= 766) begin
            k3_vec <= temp;
            load_state <= Load_Done;
            $display("[Cycle %0d] *** K3 vector loaded (background) ***", cycle_count);
         end
      end
   endrule

   // Capture Stage 1 result as soon as pipeline is done
   rule capture_stage1_result (state == ComputeStage1_LoadK3 && 
                                pipeline.computation_done() && 
                                !stage1_done);
      let res = pipeline.get_result();
      result_stage1 <= res;
      stage1_done <= True;
      $display("[Cycle %0d] Stage 1: Result captured (256 elements)", cycle_count);
   endrule
   
   // Wait for K3 loading to complete before moving to Stage 2
   rule wait_k3_ready (state == ComputeStage1_LoadK3 && 
                       stage1_done && 
                       load_state == Load_Done);
      $display("[Cycle %0d] K3 ready - proceeding to Stage 2", cycle_count);
      state <= WaitStage1AndK3;
      load_state <= Load_Idle;
   endrule

   rule prepare_stage2 (state == WaitStage1AndK3);
      Vector#(256, BF16) x_slice = newVector();
      Vector#(256, BF16) d_slice = newVector();
      for (Integer idx = 0; idx < 256; idx = idx + 1) begin
         x_slice[idx] = input_x[512 + idx];
         d_slice[idx] = input_d[512 + idx];
      end
      chunk_x <= x_slice;
      chunk_d <= d_slice;
      chunk_k1 <= k3_vec;
      chunk_k2 <= k3_vec;
      $display("[Cycle %0d] Stage 2: Sliced x[512:767], d[512:767]", cycle_count);
      state <= LaunchStage2;
   endrule
   
   rule launch_stage2 (state == LaunchStage2);
      pipeline.start_computation(chunk_x, chunk_k1, chunk_k2, chunk_d);
      $display("[Cycle %0d] Stage 2: Launched pipeline", cycle_count);
      state <= ComputeStage2;
   endrule

   rule wait_stage2 (state == ComputeStage2 && pipeline.computation_done());
      result_stage2 <= pipeline.get_result();
      state <= AssembleSIMDResults;
      $display("[Cycle %0d] Stage 2: Result captured", cycle_count);
   endrule

   rule assemble_full_result (state == AssembleSIMDResults);
      // Combine all three stages into one 768-element vector
      Vector#(768, BF16) full_vec = newVector();
      for (Integer i = 0; i < 256; i = i + 1) begin
         full_vec[i] = result_stage0[i];
         full_vec[256 + i] = result_stage1[i];
         full_vec[512 + i] = result_stage2[i];
      end
      simd_full_result <= full_vec;
      simd_results_ready <= True;
      
      // Initialize First SA processing (192x768)
      sa1_state <= SA_WaitWeights;
      sa1_input_chunk_idx <= 0;
      sa1_output_row_idx <= 0;
      sa1_weights_ready <= False;
      sa1_started <= False;
      sa1_accumulator <= unpack(0);
      
      state <= WaitSA1Complete;
      $display("[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] SIMD Pipeline Complete - All 768 elements ready", cycle_count);
      $display("[Cycle %0d] Starting FIRST Matrix Multiplication (192x768)", cycle_count);
      $display("[Cycle %0d]   - 12 output row groups (16 rows each)", cycle_count);
      $display("[Cycle %0d]   - 48 input chunks per row group (16 elements each)", cycle_count);
      $display("[Cycle %0d]   - Total SA operations: 12 x 48 = 576", cycle_count);
      $display("[Cycle %0d] ========================================", cycle_count);
   endrule

   // ====== FIRST SA (192x768): Load activations and start computation ======
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
      Vector#(192, BF16) temp_output = sa1_final_output;
      Bit#(8) output_start_idx = zeroExtend(sa1_output_row_idx) << 4;
      for (Integer i = 0; i < 16; i = i + 1) begin
         temp_output[output_start_idx + fromInteger(i)] = sa1_accumulator[i];
      end
      sa1_final_output <= temp_output;
      
      $display("[Cycle %0d] SA1: Stored row_group=%0d outputs [%0d:%0d]", 
               cycle_count, sa1_output_row_idx, output_start_idx, output_start_idx + 15);
      
      if (sa1_output_row_idx == 11) begin
         sa1_state <= SA_AllDone;
         sa1_processing_complete <= True;
         $display("[Cycle %0d] ========================================", cycle_count);
         $display("[Cycle %0d] SA1: ALL 192 OUTPUTS COMPLETE!", cycle_count);
         $display("[Cycle %0d] ========================================", cycle_count);
      end else begin
         sa1_output_row_idx <= sa1_output_row_idx + 1;
         sa1_input_chunk_idx <= 0;
         sa1_accumulator <= unpack(0);
         sa1_weights_ready <= False;
         sa1_started <= False;
         sa1_state <= SA_WaitWeights;
      end
   endrule

   rule wait_sa1_complete (state == WaitSA1Complete && sa1_processing_complete);
      // Initialize Second SA processing (768x192)
      sa2_state <= SA_WaitWeights;
      sa2_input_chunk_idx <= 0;
      sa2_output_row_idx <= 0;
      sa2_weights_ready <= False;
      sa2_started <= False;
      sa2_accumulator <= unpack(0);
      sa2_processing_complete <= False;
      
      state <= WaitSA2Complete;
      $display("[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] Starting SECOND Matrix Multiplication (768x192)", cycle_count);
      $display("[Cycle %0d]   - 48 output row groups (16 rows each)", cycle_count);
      $display("[Cycle %0d]   - 12 input chunks per row group (16 elements each)", cycle_count);
      $display("[Cycle %0d]   - Total SA operations: 48 x 12 = 576", cycle_count);
      $display("[Cycle %0d] ========================================", cycle_count);
   endrule

   // ====== SECOND SA (768x192): Load activations and start computation ======
   rule sa2_load_activations (sa2_state == SA_WaitWeights && sa2_weights_ready && !sa2_started);
      Bit#(8) start_idx = zeroExtend(sa2_input_chunk_idx) << 4;
      Vector#(16, BF16) act_chunk = newVector();
      for (Integer i = 0; i < 16; i = i + 1) begin
         act_chunk[i] = sa1_final_output[start_idx + fromInteger(i)];
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
      Vector#(768, BF16) temp_output = sa2_final_output;
      Bit#(10) output_start_idx = zeroExtend(sa2_output_row_idx) << 4;
      for (Integer i = 0; i < 16; i = i + 1) begin
         temp_output[output_start_idx + fromInteger(i)] = sa2_accumulator[i];
      end
      sa2_final_output <= temp_output;
      
      $display("[Cycle %0d] SA2: Stored row_group=%0d outputs [%0d:%0d]", 
               cycle_count, sa2_output_row_idx, output_start_idx, output_start_idx + 15);
      
      if (sa2_output_row_idx == 47) begin
         sa2_state <= SA_AllDone;
         sa2_processing_complete <= True;
         $display("[Cycle %0d] ========================================", cycle_count);
         $display("[Cycle %0d] SA2: ALL 768 OUTPUTS COMPLETE!", cycle_count);
         $display("[Cycle %0d] ========================================", cycle_count);
      end else begin
         sa2_output_row_idx <= sa2_output_row_idx + 1;
         sa2_input_chunk_idx <= 0;
         sa2_accumulator <= unpack(0);
         sa2_weights_ready <= False;
         sa2_started <= False;
         sa2_state <= SA_WaitWeights;
      end
   endrule

   rule wait_sa2_complete (state == WaitSA2Complete && sa2_processing_complete);
      state <= Done;
      $display("[Cycle %0d] COP: Both matrix multiplications complete. ALL DONE!", cycle_count);
   endrule

   // Interface Methods
   method Action start_computation(Vector#(768, BF16) x, Bit#(32) i, Vector#(768, BF16) d) if (state == Idle);
      $display("\n[Cycle %0d] ========================================", cycle_count);
      $display("[Cycle %0d] COP: Starting computation (i=%0d)", cycle_count, i);
      $display("[Cycle %0d] ========================================\n", cycle_count);
      input_x <= x;
      input_d <= d;
      input_i <= i;
      state <= InitBRAMs;
      stage0_done <= False;
      stage1_done <= False;
      simd_results_ready <= False;
      sa1_processing_complete <= False;
      sa2_processing_complete <= False;
   endmethod

   method Vector#(768, BF16) get_result() if (state == Done);
      return sa2_final_output;
   endmethod

   method Bool computation_done() = (state == Done);

   method Action load_sa1_weights(Vector#(16, Vector#(16, BF16)) w) if (sa1_state == SA_WaitWeights && !sa1_weights_ready);
      sa.load_weights(w);
      sa1_weights_ready <= True;
      $display("[Cycle %0d] COP: Loaded SA1 weights for row_group=%0d, input_chunk=%0d", 
               cycle_count, sa1_output_row_idx, sa1_input_chunk_idx);
   endmethod

   method Action load_sa2_weights(Vector#(16, Vector#(16, BF16)) w) if (sa2_state == SA_WaitWeights && !sa2_weights_ready);
      sa.load_weights(w);
      sa2_weights_ready <= True;
      $display("[Cycle %0d] COP: Loaded SA2 weights for row_group=%0d, input_chunk=%0d", 
               cycle_count, sa2_output_row_idx, sa2_input_chunk_idx);
   endmethod

endmodule

endpackage
