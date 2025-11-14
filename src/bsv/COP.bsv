package COP;

import Vector::*;
import BF16::*;
import MSE::*;
import BRAMCore::*;
import LIFLayer::*;
import BF16_WS_16x16SA::*;
import BF16VectorDivider::*;
import SigmoidVec768::*;
import BF16_SIMD_Pipeline::*;
import BRAMWeightLoader::*;

interface COP_Ifc;
  method Action start_computation();
  method Vector#(768, BF16) get_result_k();
  method Vector#(16, Vector#(48, Bool)) get_output();
  method Bool computation_done();
endinterface

typedef enum {
  Idle,
  // K operation
  LoadK0, WaitK0Load, ProcessK0, WaitK0Done, 
  LoadK1, WaitK1Load, ProcessK1, WaitK1Done, 
  LoadK2, WaitK2Load, ProcessK2, WaitK2Done,
  // V operation
  LoadV0, WaitV0Load, ProcessV0, WaitV0Done, 
  LoadV1, WaitV1Load, ProcessV1, WaitV1Done, 
  LoadV2, WaitV2Load, ProcessV2, WaitV2Done,
  // R operation
  LoadR0, WaitR0Load, ProcessR0, WaitR0Done, 
  LoadR1, WaitR1Load, ProcessR1, WaitR1Done, 
  LoadR2, WaitR2Load, ProcessR2, WaitR2Done,
  // CTS WW operation
  Process_CTS_WW0, Wait_CTS_WW0, 
  Process_CTS_WW1, Wait_CTS_WW1, 
  Process_CTS_WW2, Wait_CTS_WW2,
  // B operation
  Process_CTS_B0, Wait_CTS_B0, 
  Process_CTS_B1, Wait_CTS_B1, 
  Process_CTS_B2, Wait_CTS_B2, 
  // NTS WW operation
  Process_NTS_WW0, Wait_NTS_WW0, 
  Process_NTS_WW1, Wait_NTS_WW1, 
  Process_NTS_WW2, Wait_NTS_WW2,
  // NTS S3 operation
  Process_NTS_S30, Wait_NTS_S30, 
  Process_NTS_S31, Wait_NTS_S31, 
  Process_NTS_S32, Wait_NTS_S32, 
  // A operation
  Process_CTS_A0, Wait_CTS_A0, 
  Process_CTS_A1, Wait_CTS_A1, 
  Process_CTS_A2, Wait_CTS_A2, 
  // S2 operation
  Process_NTS_S20, Wait_NTS_S20, 
  Process_NTS_S21, Wait_NTS_S21, 
  Process_NTS_S22, Wait_NTS_S22,
  // RWKV operation
  Process_RWKV0, Wait_RWKV0, 
  Process_RWKV1, Wait_RWKV1, 
  Process_RWKV2, Wait_RWKV2,
  Done
} State deriving (Bits, Eq);

typedef enum {
  SA_Operation_K, SA_Operation_V, SA_Operation_R, SA_Operation_O, SA_Operation_Done
} SA_Operation deriving (Bits, Eq);

typedef enum {
  SA_Idle, SA_WaitWeights, SA_LoadAct, SA_Compute, SA_RowDone, SA_AllDone
} SA_State deriving (Bits, Eq);

typedef enum {
  TSC_Idle,
  TSC_LoadData,
  TSC_WaitDataLoad,
  
  // CTS
  TSC_CTS_ComputeWW, TSC_CTS_Wait_CTS_WWDone,
  TSC_CTS_FeedMSE, TSC_CTS_WaitMSEDone,
  TSC_CTS_ComputeB, TSC_CTS_WaitBDone,
  
  // NTS
  TSC_NTS_ComputeWW, TSC_NTS_Wait_CTS_WWDone,
  TSC_NTS_FeedMSE, TSC_NTS_WaitMSEDone,
  TSC_NTS_ComputeS3, TSC_NTS_WaitS3Done,

  TSC_WaitVV,
  TSC_CTS_ComputeA, TSC_CTS_WaitADone,
  TSC_NTS_ComputeS2, TSC_NTS_WaitS2Done,

  TSC_WKV, TSC_WaitWKV,
  TSC_Sigmoid, TSC_WaitSigmoid,
  TSC_RWKV, TSC_WaitRWKV,
  ProcessLIF, WaitLIF, DoneLIF,
  TSC_Done
} TSC_State deriving (Bits, Eq);

(* synthesize *)
module mkCOP(COP_Ifc);

  // ========== BRAMs
  BRAM_PORT#(Bit#(10), Bit#(16)) bram_x           <- mkBRAMCore1Load(768, False, "simd.hex", False);
  BRAM_PORT#(Bit#(10), Bit#(16)) bram_time_mix_k  <- mkBRAMCore1Load(768, False, "simd.hex", False);
  BRAM_PORT#(Bit#(10), Bit#(16)) bram_time_mix_v  <- mkBRAMCore1Load(768, False, "simd.hex", False);
  BRAM_PORT#(Bit#(10), Bit#(16)) bram_time_mix_r  <- mkBRAMCore1Load(768, False, "simd.hex", False);
  BRAM_PORT#(Bit#(10), Bit#(16)) bram_state       <- mkBRAMCore1Load(768, False, "simd.hex", False);
  BRAM_PORT#(Bit#(10), Bit#(16)) bram_d           <- mkBRAMCore1Load(768, False, "simd.hex", False);
  BRAM_PORT#(Bit#(10), Bit#(16)) bram_e           <- mkBRAMCore1Load(768, False, "simd.hex", False);
  BRAM_PORT#(Bit#(10), Bit#(16)) bram_f           <- mkBRAMCore1Load(768, False, "simd.hex", False);
  BRAM_PORT#(Bit#(10), Bit#(16)) bram_aa          <- mkBRAMCore1Load(768, False, "simd.hex", False);
  BRAM_PORT#(Bit#(10), Bit#(16)) bram_bb          <- mkBRAMCore1Load(768, False, "simd.hex", False);
  BRAM_PORT#(Bit#(10), Bit#(16)) bram_pp          <- mkBRAMCore1Load(768, False, "simd.hex", False);
  BRAM_PORT#(Bit#(10), Bit#(16)) bram_time_first  <- mkBRAMCore1Load(768, False, "simd.hex", False);
  BRAM_PORT#(Bit#(10), Bit#(16)) bram_time_decay  <- mkBRAMCore1Load(768, False, "simd.hex", False);

  // ========== Modules Instantiation
  IfcBF16_SIMD_Pipeline pipeline <- mkBF16_SIMD_Pipeline();
  BRAMWeightLoaderIfc weight_loader <- mkBRAMWeightLoader();
  BF16VectorDividerIFC divider <- mkBF16VectorDivider();
  SigmoidVector768Ifc sigmoid <- mkBF16SigmoidVector768();
  LIFLayerIFC lif <- mkLIFLayer(); 
  BF16_SA_IFC sa <- mkBF16_16x16SA();
  BF16AdderIFC bf16_add <- mkBF16Adder();
  MSEIfc mse <- mkMSE();

  // ========== Constants
  Vector#(256, BF16) ones = replicate(toBF16(16'h3f80)); 
  Vector#(256, BF16) zeros = replicate(toBF16(16'h0000)); 

  // ========== SIMD Regs
  Vector#(256, Reg#(BF16)) vec_a <- replicateM(mkReg(toBF16(16'h0000)));  // Reused for: x chunks
  Vector#(256, Reg#(BF16)) vec_b <- replicateM(mkReg(toBF16(16'h0000)));  // Reused for: time_mix_k/v/r chunks  
  Vector#(256, Reg#(BF16)) vec_c <- replicateM(mkReg(toBF16(16'h0000)));  // Reused for: state chunks
  Vector#(256, Reg#(BF16)) vec_d <- replicateM(mkReg(toBF16(16'h0000)));  // Reused for: d/e/f chunks
   
  Vector#(256, Reg#(BF16)) result_chunk0 <- replicateM(mkReg(toBF16(16'h0000)));
  Vector#(256, Reg#(BF16)) result_chunk1 <- replicateM(mkReg(toBF16(16'h0000)));
  Vector#(256, Reg#(BF16)) result_chunk2 <- replicateM(mkReg(toBF16(16'h0000)));

  Reg#(Vector#(768, BF16)) simd_result_k <-mkReg(replicate(toBF16(16'h0000)));
  Reg#(Vector#(768, BF16)) simd_result_v <-mkReg(replicate(toBF16(16'h0000)));
  Reg#(Vector#(768, BF16)) simd_result_r <-mkReg(replicate(toBF16(16'h0000)));

  Reg#(State) state <- mkReg(Idle);
  Reg#(Bit#(10)) bram_addr <- mkReg(0); // 0-255 within current chunk
  Reg#(Bit#(10)) base_addr <- mkReg(0); // 0, 256, or 512 (chunk base)
  Reg#(Bool) results_ready <- mkReg(False);

  // ========== SA Regs
  Reg#(SA_Operation) current_sa_operation <- mkReg(SA_Operation_K);
  Reg#(Vector#(256, Bit#(16))) weight_buffer <- mkReg(unpack(0));
  Reg#(Bit#(10)) weight_batch_counter <- mkReg(0);  // Tracks which 256-element batch we're on
  Reg#(Vector#(768, BF16)) sa_result_k <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) sa_result_v <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) sa_result_r <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) sa_result_o <- mkReg(unpack(0));

  // ========== SA1 Regs
  Reg#(Vector#(768, BF16)) sa1_first_input <- mkReg(unpack(0));
  Reg#(Vector#(192, BF16)) sa1_final_output <- mkReg(unpack(0));
  Reg#(Vector#(16, BF16)) sa1_accumulator <- mkReg(unpack(0));
  Reg#(Bit#(6)) sa1_input_chunk_idx <- mkReg(0); // 48 input chunks
  Reg#(Bit#(4)) sa1_output_row_idx <- mkReg(0); // 12 output rows

  Reg#(Bit#(4)) sa1_weight_matrix_idx <- mkReg(0); // 0-15 for rows
  Reg#(Bit#(4)) sa1_weight_col_idx <- mkReg(0);
  Reg#(Bool) sa1_weight_batch_requested <- mkReg(False);
  Reg#(Bool) sa1_weight_batch_ready <- mkReg(False);

  Reg#(SA_State) sa1_state <- mkReg(SA_Idle);
  Reg#(Bool) sa1_weights_ready <- mkReg(False);
  Reg#(Bool) sa1_processing_complete <- mkReg(False);
  Reg#(Bool) sa1_started <- mkReg(False);

  // ========== SA2 Regs
  Reg#(Vector#(768, BF16)) sa2_final_output <- mkReg(unpack(0));
  Reg#(Vector#(16, BF16)) sa2_accumulator <- mkReg(unpack(0));
  Reg#(Bit#(4)) sa2_input_chunk_idx <- mkReg(0); // 12 input chunks
  Reg#(Bit#(6)) sa2_output_row_idx <- mkReg(0); // 48 output rows

  Reg#(Bit#(4)) sa2_weight_matrix_idx <- mkReg(0);
  Reg#(Bit#(4)) sa2_weight_col_idx <- mkReg(0);
  Reg#(Bool) sa2_weight_batch_requested <- mkReg(False);
  Reg#(Bool) sa2_weight_batch_ready <- mkReg(False);

  Reg#(SA_State) sa2_state <- mkReg(SA_Idle);
  Reg#(Bool) sa2_weights_ready <- mkReg(False);
  Reg#(Bool) sa2_processing_complete <- mkReg(False);
  Reg#(Bool) sa2_started <- mkReg(False);

  // ========== TSC Regs 
  Reg#(TSC_State) tsc_state <- mkReg(TSC_Idle);
  Reg#(Vector#(768, BF16)) tsc_time_first <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_time_decay <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_pp <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_aa <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_bb <- mkReg(unpack(0));

  Reg#(Bit#(10)) tsc_load_addr <- mkReg(0);
  Reg#(Bit#(3)) tsc_feed_cooldown <- mkReg(0);
  Reg#(Bool) tsc_data_loaded <- mkReg(False);
  Reg#(Bool) tsc_vv_ready <- mkReg(False);

  // CURRENT TIME STEP
  Reg#(Vector#(768, BF16)) tsc_cts_ww <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_cts_e1 <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_cts_e2 <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_cts_b <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_cts_a <- mkReg(unpack(0));

  Reg#(Bit#(7)) tsc_cts_e1_collected <- mkReg(0);
  Reg#(Bit#(7)) tsc_cts_e2_collected <- mkReg(0);
  Reg#(Bit#(6)) tsc_cts_mse_chunk_fed <- mkReg(0);
  Reg#(Bool) tsc_cts_mse_started <- mkReg(False);

  // NEXT TIME STEP
  Reg#(Vector#(768, BF16)) tsc_nts_ww <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_nts_e1 <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_nts_e2 <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_nts_p <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_nts_s2 <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_nts_s3 <- mkReg(unpack(0));

  Reg#(Bit#(7)) tsc_nts_e1_collected <- mkReg(0);
  Reg#(Bit#(7)) tsc_nts_e2_collected <- mkReg(0);
  Reg#(Bit#(7)) tsc_nts_p_collected <- mkReg(0);
  Reg#(Bit#(6)) tsc_nts_mse_chunk_fed <- mkReg(0);
  Reg#(Bool) tsc_nts_mse_started <- mkReg(False);

  // WKV 
  Reg#(Vector#(768, BF16)) div_result_wkv <- mkReg(unpack(0));

  // Sigmoid
  Reg#(Vector#(768, BF16)) sigmoid_result_r <- mkReg(unpack(0));
  Reg#(Bool) sa_r_ready <- mkReg(False);

  // RWKV
  Reg#(Vector#(768, BF16)) tsc_rwkv <- mkReg(unpack(0));

  // LIF
  Reg#(Bit#(10)) lif_chunk_fed <- mkReg(0);
  Reg#(Bool) lif_done <- mkReg(False);

  // BRAM initialization delay - wait for BRAMs to load from hex files
  Reg#(Bit#(8)) init_counter <- mkReg(0);
  Reg#(Bool) brams_ready <- mkReg(False);
  Reg#(Bit#(32)) cycle_count <- mkReg(0);

  rule count_cycles;
    cycle_count <= cycle_count + 1;
  endrule

  // Wait for BRAM initialization
  rule init_brams (!brams_ready && init_counter < 10);
    init_counter <= init_counter + 1;
    if (init_counter == 9) begin
      brams_ready <= True;
      $display("[Cycle %0d] COP: BRAMs initialized and ready", cycle_count);
    end
  endrule

  // Helper functions to read/write Vector of Regs
  function Vector#(256, BF16) readVec(Vector#(256, Reg#(BF16)) vec_regs);
    Vector#(256, BF16) result = newVector();
    for (Integer i = 0; i < 256; i = i + 1) begin
      result[i] = vec_regs[i];
    end
    return result;
  endfunction

  function Action writeVec(Vector#(256, Reg#(BF16)) vec_regs, Vector#(256, BF16) vec_vals);
    action
      for (Integer i = 0; i < 256; i = i + 1) begin
        vec_regs[i] <= vec_vals[i];
      end
    endaction
  endfunction

  // ========== K SIMD
  // K OPERATION CHUNK 0
  rule load_k0 (state == LoadK0 && brams_ready);
    bram_x.put(False, 0, ?);
    bram_time_mix_k.put(False, 0, ?);
    bram_state.put(False, 0, ?);
    bram_d.put(False, 0, ?);
    bram_addr <= 1; // Next address to read
    base_addr <= 0; // Chunk 0 starts at address 0
    state <= WaitK0Load;
    $display("[Cycle %0d] SIMD: Loading K chunk 0, issued read addr 0", cycle_count);
  endrule

  rule wait_k0_load (state == WaitK0Load && bram_addr < 256);
    // Read data from previous cycle's request (BRAM has 1-cycle latency)
    let idx = bram_addr - 1;
    vec_a[idx] <= toBF16(bram_x.read());
    vec_b[idx] <= toBF16(bram_time_mix_k.read());
    vec_c[idx] <= toBF16(bram_state.read());
    vec_d[idx] <= toBF16(bram_d.read());

    // Issue next read request
    if (bram_addr < 256) begin
      bram_x.put(False, zeroExtend(bram_addr), ?);
      bram_time_mix_k.put(False, zeroExtend(bram_addr), ?);
      bram_state.put(False, zeroExtend(bram_addr), ?);
      bram_d.put(False, zeroExtend(bram_addr), ?);
    end

    bram_addr <= bram_addr + 1;
  endrule

  // Capture last value and transition to processing
  rule wait_k0_load_done (state == WaitK0Load && bram_addr == 256);
    vec_a[255] <= toBF16(bram_x.read());
    vec_b[255] <= toBF16(bram_time_mix_k.read());
    vec_c[255] <= toBF16(bram_state.read());
    vec_d[255] <= toBF16(bram_d.read());
    state <= ProcessK0;
    $display("[Cycle %0d] SIMD: K chunk 0 loaded, starting SIMD", cycle_count);
  endrule

  rule process_k0 (state == ProcessK0 && !pipeline.computation_done());
    pipeline.start_computation(readVec(vec_a), readVec(vec_b), readVec(vec_c), readVec(vec_d));
    state <= WaitK0Done; 
    $display("[Cycle %0d] SIMD: K chunk 0 sent to SIMD pipeline", cycle_count);
  endrule
 
  rule wait_k0_done (state == WaitK0Done && pipeline.computation_done());
    let result = pipeline.get_result();
    writeVec(result_chunk0, result);
    state <= LoadK1;
    $display("[Cycle %0d] SIMD: K chunk 0 complete", cycle_count);
  endrule


  // K OPERATION CHUNK 1
  rule load_k1 (state == LoadK1);
    bram_x.put(False, 256, ?);
    bram_time_mix_k.put(False, 256, ?);
    bram_state.put(False, 256, ?);
    bram_d.put(False, 256, ?);
    bram_addr <= 1; 
    base_addr <= 256; 
    state <= WaitK1Load;

    $display("[Cycle %0d] SIMD: Loading K chunk 1, issued read addr 256", cycle_count);
  endrule

  rule wait_k1_load (state == WaitK1Load && bram_addr < 256);
    let idx = bram_addr - 1;
    let addr = base_addr + zeroExtend(bram_addr);

    vec_a[idx] <= toBF16(bram_x.read());
    vec_b[idx] <= toBF16(bram_time_mix_k.read());
    vec_c[idx] <= toBF16(bram_state.read());
    vec_d[idx] <= toBF16(bram_d.read());

    // Issue next read request
    if (bram_addr < 256) begin
      bram_x.put(False, addr, ?);
      bram_time_mix_k.put(False, addr, ?);
      bram_state.put(False, addr, ?);
      bram_d.put(False, addr, ?);
    end

    bram_addr <= bram_addr + 1;
  endrule

  rule wait_k1_load_done (state == WaitK1Load && bram_addr == 256);
    vec_a[255] <= toBF16(bram_x.read());
    vec_b[255] <= toBF16(bram_time_mix_k.read());
    vec_c[255] <= toBF16(bram_state.read());
    vec_d[255] <= toBF16(bram_d.read());
    state <= ProcessK1;
    $display("[Cycle %0d] SIMD: K chunk 1 loaded, starting SIMD", cycle_count);
  endrule

  rule process_k1 (state == ProcessK1 && !pipeline.computation_done());
    pipeline.start_computation(readVec(vec_a), readVec(vec_b), readVec(vec_c), readVec(vec_d));
    state <= WaitK1Done; 
    $display("[Cycle %0d] SIMD: K chunk 1 sent to SIMD pipeline", cycle_count);
  endrule

 
  rule wait_k1_done (state == WaitK1Done && pipeline.computation_done());
    let result = pipeline.get_result();
    writeVec(result_chunk1, result);
    state <= LoadK2;
    $display("[Cycle %0d] SIMD: K chunk 1 complete", cycle_count);
  endrule

  // K OPERATION CHUNK 2
  rule load_k2 (state == LoadK2);
    bram_x.put(False, 512, ?);
    bram_time_mix_k.put(False, 512, ?);
    bram_state.put(False, 512, ?);
    bram_d.put(False, 512, ?);
    bram_addr <= 1; 
    base_addr <= 512; 
    state <= WaitK2Load;
    $display("[Cycle %0d] SIMD: Loading K chunk 2, issued read addr 512", cycle_count);
  endrule

  rule wait_k2_load (state == WaitK2Load && bram_addr < 256);
    let idx = bram_addr - 1;
    let addr = base_addr + zeroExtend(bram_addr);

    vec_a[idx] <= toBF16(bram_x.read());
    vec_b[idx] <= toBF16(bram_time_mix_k.read());
    vec_c[idx] <= toBF16(bram_state.read());
    vec_d[idx] <= toBF16(bram_d.read());

    // Issue next read request
    if (bram_addr < 256) begin
      bram_x.put(False, addr, ?);
      bram_time_mix_k.put(False, addr, ?);
      bram_state.put(False, addr, ?);
      bram_d.put(False, addr, ?);
    end

    bram_addr <= bram_addr + 1;
  endrule

  rule wait_k2_load_done (state == WaitK2Load && bram_addr == 256);
    vec_a[255] <= toBF16(bram_x.read());
    vec_b[255] <= toBF16(bram_time_mix_k.read());
    vec_c[255] <= toBF16(bram_state.read());
    vec_d[255] <= toBF16(bram_d.read());
    state <= ProcessK2;
    $display("[Cycle %0d] SIMD: K chunk 2 loaded, starting SIMD", cycle_count);
  endrule

  rule process_k2 (state == ProcessK2 && !pipeline.computation_done());
    pipeline.start_computation(readVec(vec_a), readVec(vec_b), readVec(vec_c), readVec(vec_d));
    state <= WaitK2Done; 
    $display("[Cycle %0d] SIMD: K chunk 2 sent to SIMD pipeline", cycle_count);
  endrule
 
  rule wait_k2_done (state == WaitK2Done && pipeline.computation_done());
    let result = pipeline.get_result();
    writeVec(result_chunk2, result);

    // Assemble final K result from all 3 chunks
    Vector#(512, BF16) k_part01 = append(readVec(result_chunk0), readVec(result_chunk1));
    Vector#(768, BF16) k_final = append(k_part01, result);
    simd_result_k <= k_final;
    sa1_first_input <= k_final;
    sa1_state <= SA_WaitWeights;
    current_sa_operation <= SA_Operation_K;
    state <= LoadV0;
    results_ready <= True;
    $display("[Cycle %0d] SIMD: K operation complete, moving to V", cycle_count);
    $display("[Cycle %0d] SIMD: Starting SA 1", cycle_count);
  endrule

  // ========== V SIMD
  // V OPERATION CHUNK 0
  rule load_v0 (state == LoadV0 && brams_ready);
    bram_x.put(False, 0, ?);
    bram_time_mix_v.put(False, 0, ?);
    bram_state.put(False, 0, ?);
    bram_d.put(False, 0, ?);
    bram_addr <= 1; // Next address to read
    base_addr <= 0; // Chunk 0 starts at address 0
    state <= WaitV0Load;
    $display("[Cycle %0d] SIMD: Loading V chunk 0, issued read addr 0", cycle_count);
  endrule

  rule wait_v0_load (state == WaitV0Load && bram_addr < 256);
    // Read data from previous cycle's request (BRAM has 1-cycle latency)
    let idx = bram_addr - 1;
    vec_a[idx] <= toBF16(bram_x.read());
    vec_b[idx] <= toBF16(bram_time_mix_v.read());
    vec_c[idx] <= toBF16(bram_state.read());
    vec_d[idx] <= toBF16(bram_d.read());

    // Issue next read request
    if (bram_addr < 256) begin
      bram_x.put(False, zeroExtend(bram_addr), ?);
      bram_time_mix_v.put(False, zeroExtend(bram_addr), ?);
      bram_state.put(False, zeroExtend(bram_addr), ?);
      bram_d.put(False, zeroExtend(bram_addr), ?);
    end

    bram_addr <= bram_addr + 1;
  endrule

  // Capture last value and transition to processing
  rule wait_v0_load_done (state == WaitV0Load && bram_addr == 256);
    vec_a[255] <= toBF16(bram_x.read());
    vec_b[255] <= toBF16(bram_time_mix_v.read());
    vec_c[255] <= toBF16(bram_state.read());
    vec_d[255] <= toBF16(bram_d.read());
    state <= ProcessV0;
    $display("[Cycle %0d] SIMD: V chunk 0 loaded, starting SIMD", cycle_count);
  endrule

  rule process_v0 (state == ProcessV0 && !pipeline.computation_done());
    pipeline.start_computation(readVec(vec_a), readVec(vec_b), readVec(vec_c), readVec(vec_d));
    state <= WaitV0Done; 
    $display("[Cycle %0d] SIMD: V chunk 0 sent to SIMD pipeline", cycle_count);
  endrule
 
  rule wait_v0_done (state == WaitV0Done && pipeline.computation_done());
    let result = pipeline.get_result();
    writeVec(result_chunk0, result);
    state <= LoadV1;
    $display("[Cycle %0d] SIMD: V chunk 0 complete", cycle_count);
  endrule

  // V OPERATION CHUNK 1
  rule load_v1 (state == LoadV1);
    bram_x.put(False, 256, ?);
    bram_time_mix_v.put(False, 256, ?);
    bram_state.put(False, 256, ?);
    bram_d.put(False, 256, ?);
    bram_addr <= 1; 
    base_addr <= 256; 
    state <= WaitV1Load;
    $display("[Cycle %0d] SIMD: Loading V chunk 1, issued read addr 256", cycle_count);
  endrule

  rule wait_v1_load (state == WaitV1Load && bram_addr < 256);
    let idx = bram_addr - 1;
    let addr = base_addr + zeroExtend(bram_addr);

    vec_a[idx] <= toBF16(bram_x.read());
    vec_b[idx] <= toBF16(bram_time_mix_v.read());
    vec_c[idx] <= toBF16(bram_state.read());
    vec_d[idx] <= toBF16(bram_d.read());

    // Issue next read request
    if (bram_addr < 256) begin
      bram_x.put(False, addr, ?);
      bram_time_mix_v.put(False, addr, ?);
      bram_state.put(False, addr, ?);
      bram_d.put(False, addr, ?);
    end

    bram_addr <= bram_addr + 1;
  endrule

  rule wait_v1_load_done (state == WaitV1Load && bram_addr == 256);
    vec_a[255] <= toBF16(bram_x.read());
    vec_b[255] <= toBF16(bram_time_mix_v.read());
    vec_c[255] <= toBF16(bram_state.read());
    vec_d[255] <= toBF16(bram_d.read());
    state <= ProcessV1;
    $display("[Cycle %0d] SIMD: V chunk 1 loaded, starting SIMD", cycle_count);
  endrule

  rule process_v1 (state == ProcessV1 && !pipeline.computation_done());
    pipeline.start_computation(readVec(vec_a), readVec(vec_b), readVec(vec_c), readVec(vec_d));
    state <= WaitV1Done; 
    $display("[Cycle %0d] SIMD: V chunk 1 sent to SIMD pipeline", cycle_count);
  endrule
 
  rule wait_v1_done (state == WaitV1Done && pipeline.computation_done());
    let result = pipeline.get_result();
    writeVec(result_chunk1, result);
    state <= LoadV2;
    $display("[Cycle %0d] SIMD: V chunk 1 complete", cycle_count);
  endrule

  // V OPERATION CHUNK 2
  rule load_v2 (state == LoadV2);
    bram_x.put(False, 512, ?);
    bram_time_mix_v.put(False, 512, ?);
    bram_state.put(False, 512, ?);
    bram_d.put(False, 512, ?);
    bram_addr <= 1; 
    base_addr <= 512; 
    state <= WaitV2Load;
    $display("[Cycle %0d] SIMD: Loading V chunk 2, issued read addr 512", cycle_count);
  endrule

  rule wait_v2_load (state == WaitV2Load && bram_addr < 256);
    let idx = bram_addr - 1;
    let addr = base_addr + zeroExtend(bram_addr);

    vec_a[idx] <= toBF16(bram_x.read());
    vec_b[idx] <= toBF16(bram_time_mix_v.read());
    vec_c[idx] <= toBF16(bram_state.read());
    vec_d[idx] <= toBF16(bram_d.read());

    // Issue next read request
    if (bram_addr < 256) begin
      bram_x.put(False, addr, ?);
      bram_time_mix_v.put(False, addr, ?);
      bram_state.put(False, addr, ?);
      bram_d.put(False, addr, ?);
    end

    bram_addr <= bram_addr + 1;
  endrule

  rule wait_v2_load_done (state == WaitV2Load && bram_addr == 256);
    vec_a[255] <= toBF16(bram_x.read());
    vec_b[255] <= toBF16(bram_time_mix_v.read());
    vec_c[255] <= toBF16(bram_state.read());
    vec_d[255] <= toBF16(bram_d.read());
    state <= ProcessV2;
    $display("[Cycle %0d] SIMD: V chunk 2 loaded, starting SIMD", cycle_count);
  endrule

  rule process_v2 (state == ProcessV2 && !pipeline.computation_done());
    pipeline.start_computation(readVec(vec_a), readVec(vec_b), readVec(vec_c), readVec(vec_d));
    state <= WaitV2Done; 
    $display("[Cycle %0d] SIMD: V chunk 2 sent to SIMD pipeline", cycle_count);
  endrule
 
  rule wait_v2_done (state == WaitV2Done && pipeline.computation_done());
    let result = pipeline.get_result();
    writeVec(result_chunk2, result);

    // Assemble final V result from all 3 chunks
    Vector#(512, BF16) v_part01 = append(readVec(result_chunk0), readVec(result_chunk1));
    Vector#(768, BF16) v_final = append(v_part01, result);
    simd_result_v <= v_final;

    state <= LoadR0;
    results_ready <= True;
    $display("[Cycle %0d] SIMD: V operation complete, moving to R", cycle_count);
  endrule

  // ========== R SIMD
  // R OPERATION CHUNK 0
  rule load_r0 (state == LoadR0 && brams_ready);
    bram_x.put(False, 0, ?);
    bram_time_mix_r.put(False, 0, ?);
    bram_state.put(False, 0, ?);
    bram_d.put(False, 0, ?);
    bram_addr <= 1; // Next address to read
    base_addr <= 0; // Chunk 0 starts at address 0
    state <= WaitR0Load;
    $display("[Cycle %0d] SIMD: Loading R chunk 0, issued read addr 0", cycle_count);
  endrule

  rule wait_r0_load (state == WaitR0Load && bram_addr < 256);
    // Read data from previous cycle's request (BRAM has 1-cycle latency)
    let idx = bram_addr - 1;
    vec_a[idx] <= toBF16(bram_x.read());
    vec_b[idx] <= toBF16(bram_time_mix_r.read());
    vec_c[idx] <= toBF16(bram_state.read());
    vec_d[idx] <= toBF16(bram_d.read());

    // Issue next read request
    if (bram_addr < 256) begin
      bram_x.put(False, zeroExtend(bram_addr), ?);
      bram_time_mix_r.put(False, zeroExtend(bram_addr), ?);
      bram_state.put(False, zeroExtend(bram_addr), ?);
      bram_d.put(False, zeroExtend(bram_addr), ?);
    end

    bram_addr <= bram_addr + 1;
  endrule

  // Capture last value and transition to processing
  rule wait_r0_load_done (state == WaitR0Load && bram_addr == 256);
    vec_a[255] <= toBF16(bram_x.read());
    vec_b[255] <= toBF16(bram_time_mix_r.read());
    vec_c[255] <= toBF16(bram_state.read());
    vec_d[255] <= toBF16(bram_d.read());
    state <= ProcessR0;
    $display("[Cycle %0d] SIMD: R chunk 0 loaded, starting SIMD", cycle_count);
  endrule

  rule process_r0 (state == ProcessR0 && !pipeline.computation_done());
    pipeline.start_computation(readVec(vec_a), readVec(vec_b), readVec(vec_c), readVec(vec_d));
    state <= WaitR0Done; 
    $display("[Cycle %0d] SIMD: R chunk 0 sent to SIMD pipeline", cycle_count);
  endrule
 
  rule wait_r0_done (state == WaitR0Done && pipeline.computation_done());
    let result = pipeline.get_result();
    writeVec(result_chunk0, result);
    state <= LoadR1;
    $display("[Cycle %0d] SIMD: R chunk 0 complete", cycle_count);
  endrule

  // R OPERATION CHUNK 1
  rule load_r1 (state == LoadR1);
    bram_x.put(False, 256, ?);
    bram_time_mix_r.put(False, 256, ?);
    bram_state.put(False, 256, ?);
    bram_d.put(False, 256, ?);
    bram_addr <= 1; 
    base_addr <= 256; 
    state <= WaitR1Load;
    $display("[Cycle %0d] SIMD: Loading R chunk 1, issued read addr 256", cycle_count);
  endrule

  rule wait_r1_load (state == WaitR1Load && bram_addr < 256);
    let idx = bram_addr - 1;
    let addr = base_addr + zeroExtend(bram_addr);

    vec_a[idx] <= toBF16(bram_x.read());
    vec_b[idx] <= toBF16(bram_time_mix_r.read());
    vec_c[idx] <= toBF16(bram_state.read());
    vec_d[idx] <= toBF16(bram_d.read());

    // Issue next read request
    if (bram_addr < 256) begin
      bram_x.put(False, addr, ?);

      bram_time_mix_r.put(False, addr, ?);
      bram_state.put(False, addr, ?);
      bram_d.put(False, addr, ?);
    end

    bram_addr <= bram_addr + 1;
  endrule

  rule wait_r1_load_done (state == WaitR1Load && bram_addr == 256);
    vec_a[255] <= toBF16(bram_x.read());
    vec_b[255] <= toBF16(bram_time_mix_r.read());
    vec_c[255] <= toBF16(bram_state.read());
    vec_d[255] <= toBF16(bram_d.read());
    state <= ProcessR1;
    $display("[Cycle %0d] SIMD: R chunk 1 loaded, starting SIMD", cycle_count);
  endrule

  rule process_r1 (state == ProcessR1 && !pipeline.computation_done());
    pipeline.start_computation(readVec(vec_a), readVec(vec_b), readVec(vec_c), readVec(vec_d));
    state <= WaitR1Done; 
    $display("[Cycle %0d] SIMD: R chunk 1 sent to SIMD pipeline", cycle_count);
  endrule
 
  rule wait_r1_done (state == WaitR1Done && pipeline.computation_done());
    let result = pipeline.get_result();
    writeVec(result_chunk1, result);
    state <= LoadR2;
    $display("[Cycle %0d] SIMD: R chunk 1 complete", cycle_count);
  endrule

  // R OPERATION CHUNK 2
  rule load_r2 (state == LoadR2);
    bram_x.put(False, 512, ?);
    bram_time_mix_r.put(False, 512, ?);
    bram_state.put(False, 512, ?);
    bram_d.put(False, 512, ?);
    bram_addr <= 1; 
    base_addr <= 512; 
    state <= WaitR2Load;
    $display("[Cycle %0d] SIMD: Loading R chunk 2, issued read addr 512", cycle_count);
  endrule

  rule wait_r2_load (state == WaitR2Load && bram_addr < 256);
    let idx = bram_addr - 1;
    let addr = base_addr + zeroExtend(bram_addr);

    vec_a[idx] <= toBF16(bram_x.read());
    vec_b[idx] <= toBF16(bram_time_mix_r.read());
    vec_c[idx] <= toBF16(bram_state.read());
    vec_d[idx] <= toBF16(bram_d.read());

    // Issue next read request
    if (bram_addr < 256) begin
      bram_x.put(False, addr, ?);
      bram_time_mix_r.put(False, addr, ?);
      bram_state.put(False, addr, ?);
      bram_d.put(False, addr, ?);
    end

    bram_addr <= bram_addr + 1;
  endrule

  rule wait_r2_load_done (state == WaitR2Load && bram_addr == 256);
    vec_a[255] <= toBF16(bram_x.read());
    vec_b[255] <= toBF16(bram_time_mix_r.read());
    vec_c[255] <= toBF16(bram_state.read());
    vec_d[255] <= toBF16(bram_d.read());
    state <= ProcessR2;
    $display("[Cycle %0d] SIMD: R chunk 2 loaded, starting SIMD", cycle_count);
  endrule

  rule process_r2 (state == ProcessR2 && !pipeline.computation_done());
    pipeline.start_computation(readVec(vec_a), readVec(vec_b), readVec(vec_c), readVec(vec_d));
    state <= WaitR2Done; 
    $display("[Cycle %0d] SIMD: R chunk 2 sent to SIMD pipeline", cycle_count);
  endrule
 
  rule wait_r2_done (state == WaitR2Done && pipeline.computation_done());
    let result = pipeline.get_result();
    writeVec(result_chunk2, result);

    // Assemble final R result from all 3 chunks
    Vector#(512, BF16) r_part01 = append(readVec(result_chunk0), readVec(result_chunk1));
    Vector#(768, BF16) r_final = append(r_part01, result);
    simd_result_r <= r_final;
    
    //sa1_state <= SA_WaitWeights;
    results_ready <= True;
    $display("[Cycle %0d] SIMD: R operation complete ", cycle_count);
    $display("[Cycle %0d] SIMD: ALL SIMD COMPUTATION DONE", cycle_count);
  endrule

  // ========== SA1
  // Prefetch weights DURING computation
  rule sa1_prefetch_weights_overlap (sa1_state == SA_Compute && !sa1_weight_batch_requested && sa1_input_chunk_idx < 47);
    weight_loader.start();
    sa1_weight_batch_requested <= True;
    $display("[Cycle %0d] SA1: [OVERLAP] Prefetching weight batch %0d for NEXT chunk DURING computation", cycle_count, weight_batch_counter);
  endrule

  // Prefetch weights when waiting (for current chunk)
  rule sa1_prefetch_weights_wait(sa1_state == SA_WaitWeights && !sa1_weights_ready && !sa1_weight_batch_requested);
    weight_loader.start();
    sa1_weight_batch_requested <= True;
    $display("[Cycle %0d] SA1: Prefetching weight batch %0d", cycle_count, weight_batch_counter);
  endrule

  rule sa1_collect_weight_batch (sa1_weight_batch_requested && !sa1_weight_batch_ready);
    let batch = weight_loader.get_res();
    weight_loader.done_ack();
    weight_buffer <= batch;
    sa1_weight_batch_ready <= True;
    sa1_weight_batch_requested <= False;
    $display("[Cycle %0d] SA1: Weight batch %0d ready", cycle_count, weight_batch_counter);
    weight_batch_counter <= weight_batch_counter + 1;
  endrule

  rule sa1_load_weights_from_bram (sa1_state == SA_WaitWeights && sa1_weight_batch_ready && !sa1_weights_ready);
    Vector#(16, Vector#(16, BF16)) w = newVector();

    for (Integer row = 0; row < 16; row = row + 1) begin
      for (Integer col = 0; col < 16; col = col + 1) begin
        Bit#(8) idx = fromInteger(row * 16 + col);
        w[row][col] = toBF16(weight_buffer[idx]);
      end
    end

    sa.load_weights(w);
    sa1_weights_ready <= True;
    sa1_weight_batch_ready <= False;
    $display("[Cycle %0d] SA1: Loaded 16x16 weights batch %0d to SA", cycle_count, weight_batch_counter);
  endrule

  rule sa1_load_activations (sa1_state == SA_WaitWeights && sa1_weights_ready && !sa1_started);
    Bit#(10) start_idx = zeroExtend(sa1_input_chunk_idx) << 4;

    Vector#(16, BF16) act_chunk = newVector();
    for (Integer i = 0; i < 16; i = i + 1) begin
      act_chunk[i] = sa1_first_input[start_idx + fromInteger(i)];
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
      sa1_weight_batch_ready <= False;
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
     
    sa1_output_row_idx <= sa1_output_row_idx + 1;
    sa1_input_chunk_idx <= 0;
    sa1_accumulator <= unpack(0);
    sa1_weights_ready <= False;
    sa1_weight_batch_requested <= False;
    sa1_weight_batch_ready <= False;
    sa1_started <= False;

    if (sa1_output_row_idx == 11) begin
      sa1_state <= SA_AllDone;
      sa1_processing_complete <= True;
      $display("[Cycle %0d] SA1: ALL 192 OUTPUTS COMPLETE!", cycle_count);
    end else begin
      sa1_state <= SA_WaitWeights;
    end
  endrule

  rule wait_sa1_complete if (sa1_processing_complete && !sa2_started);
    sa1_state <= SA_Idle;
    sa1_processing_complete <= False;
    sa2_state <= SA_WaitWeights;
    sa2_input_chunk_idx <= 0;
    sa2_output_row_idx <= 0;
    sa2_weights_ready <= False;
    sa2_started <= False;
    sa2_accumulator <= unpack(0);
    sa2_processing_complete <= False;
    $display("[Cycle %0d] COP: Starting SA 2", cycle_count);
  endrule

  // ========== SA2
  rule sa2_prefetch_weights_overlap (sa2_state == SA_Compute && !sa2_weight_batch_requested && sa2_input_chunk_idx < 11);
    weight_loader.start();
    sa2_weight_batch_requested <= True;
    $display("[Cycle %0d] SA2: [OVERLAP] Prefetching weight batch %0d for NEXT chunk DURING computation", cycle_count, weight_batch_counter);
  endrule

  // Prefetch weights when waiting (for current chunk)
  rule sa2_prefetch_weights_wait(sa2_state == SA_WaitWeights && !sa2_weights_ready && !sa2_weight_batch_requested);
    weight_loader.start();
    sa2_weight_batch_requested <= True;
    $display("[Cycle %0d] SA2: Prefetching weight batch %0d", cycle_count, weight_batch_counter);
  endrule

  rule sa2_collect_weight_batch (sa2_weight_batch_requested && !sa2_weight_batch_ready);
    let batch = weight_loader.get_res();
    weight_loader.done_ack();
    weight_buffer <= batch;
    sa2_weight_batch_ready <= True;
    sa2_weight_batch_requested <= False;
    $display("[Cycle %0d] SA2: Weight batch %0d ready", cycle_count, weight_batch_counter);
    weight_batch_counter <= weight_batch_counter + 1;
  endrule

  rule sa2_load_weights_from_bram (sa2_state == SA_WaitWeights && sa2_weight_batch_ready && !sa2_weights_ready);
    Vector#(16, Vector#(16, BF16)) w = newVector();

    for (Integer row = 0; row < 16; row = row + 1) begin
      for (Integer col = 0; col < 16; col = col + 1) begin
        Bit#(8) idx = fromInteger(row * 16 + col);
        w[row][col] = toBF16(weight_buffer[idx]);
      end
    end

    sa.load_weights(w);
    sa2_weights_ready <= True;
    sa2_weight_batch_ready <= False;
    $display("[Cycle %0d] SA2: Loaded 16x16 weights batch %0d to SA", cycle_count, weight_batch_counter);
  endrule

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
      sa2_weight_batch_ready <= False;
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
     
    sa2_output_row_idx <= sa2_output_row_idx + 1;
    sa2_input_chunk_idx <= 0;
    sa2_accumulator <= unpack(0);
    sa2_weights_ready <= False;
    sa2_weight_batch_requested <= False;
    sa2_weight_batch_ready <= False;
    sa2_started <= False;

    if (sa2_output_row_idx == 47) begin
      sa2_state <= SA_AllDone;
      sa2_processing_complete <= True;
      $display("[Cycle %0d] SA2: ALL 768 OUTPUTS COMPLETE!", cycle_count);
    end else begin
      sa2_state <= SA_WaitWeights;
    end
  endrule

  rule wait_sa2_complete if (sa2_processing_complete);
    sa2_state <= SA_Idle;
    sa2_processing_complete <= False;

    case (current_sa_operation)
      SA_Operation_K: begin
        // K is done, start V if available
        sa_result_k <= sa2_final_output;
        sa1_first_input <= simd_result_v;
        sa1_state <= SA_WaitWeights;
        sa1_input_chunk_idx <= 0;
        sa1_output_row_idx <= 0;
        sa1_weights_ready <= False;
        sa1_started <= False;
        sa1_accumulator <= unpack(0);
        current_sa_operation <= SA_Operation_V;
        tsc_state <= TSC_LoadData;
        tsc_load_addr <= 0;
        $display("[Cycle %0d] COP: K SA complete. Starting SA for V and TSC for current time step", cycle_count);
      end

      SA_Operation_V: begin
        // V is done, start R if available
        sa_result_v <= sa2_final_output;
        sa1_first_input <= simd_result_r;
        sa1_state <= SA_WaitWeights;
        sa1_input_chunk_idx <= 0;
        sa1_output_row_idx <= 0;
        sa1_weights_ready <= False;
        sa1_started <= False;
        sa1_accumulator <= unpack(0);
        tsc_vv_ready <= True;
        current_sa_operation <= SA_Operation_R;
        $display("[Cycle %0d] COP: V SA complete. Starting SA for R", cycle_count);
      end

      SA_Operation_R: begin
        sa_result_r <= sa2_final_output;
        sa_r_ready <= True;
        tsc_state <= TSC_Sigmoid;
        state <= Idle;
        $display("[Cycle %0d] COP: R SA complete. ALL OPERATIONS DONE", cycle_count);
      end

      SA_Operation_O: begin
        sa_result_o <= sa2_final_output;
        current_sa_operation <= SA_Operation_Done;
        //state <= Done;
        tsc_state <= ProcessLIF;
        $display("[Cycle %0d] COP: O SA complete. ALL OPERATIONS TRULY DONE", cycle_count);
      end

      default: begin
        $display("[Cycle %0d] ERROR: Unexpected SA operation state", cycle_count);
      end
    endcase
  endrule


  // ========== TSC RULES
  rule tsc_load_data (tsc_state == TSC_LoadData && !tsc_data_loaded);
    bram_pp.put(False, 0, ?);
    bram_aa.put(False, 0, ?);
    bram_bb.put(False, 0, ?);
    bram_time_first.put(False, 0, ?);
    bram_time_decay.put(False, 0, ?);
    tsc_load_addr <= 1;
    tsc_state <= TSC_WaitDataLoad;
    $display("[Cycle %0d] TSC: Loading pp, aa, bb, time_first, time_decay from BRAM", cycle_count);
  endrule

  rule tsc_wait_data_load (tsc_state == TSC_WaitDataLoad && tsc_load_addr < 768);
    let idx = tsc_load_addr - 1;

    Vector#(768, BF16) temp_pp = tsc_pp;
    Vector#(768, BF16) temp_aa = tsc_aa;
    Vector#(768, BF16) temp_bb = tsc_bb;
    Vector#(768, BF16) temp_tf = tsc_time_first;
    Vector#(768, BF16) temp_td = tsc_time_decay;

    temp_pp[idx] = toBF16(bram_pp.read());
    temp_aa[idx] = toBF16(bram_aa.read());
    temp_bb[idx] = toBF16(bram_bb.read());
    temp_tf[idx] = toBF16(bram_time_first.read());
    temp_td[idx] = toBF16(bram_time_decay.read());

    tsc_pp <= temp_pp;
    tsc_aa <= temp_aa;
    tsc_bb <= temp_bb;
    tsc_time_first <= temp_tf;
    tsc_time_decay <= temp_td;

    if (tsc_load_addr < 768) begin
      bram_pp.put(False, tsc_load_addr, ?);
      bram_aa.put(False, tsc_load_addr, ?);
      bram_bb.put(False, tsc_load_addr, ?);
      bram_time_first.put(False, tsc_load_addr, ?);
      bram_time_decay.put(False, tsc_load_addr, ?);
    end
    
    tsc_load_addr <= tsc_load_addr + 1;
  endrule

  rule tsc_data_load_done (tsc_state == TSC_WaitDataLoad && tsc_load_addr == 768);
    Vector#(768, BF16) temp_pp = tsc_pp;
    Vector#(768, BF16) temp_aa = tsc_aa;
    Vector#(768, BF16) temp_bb = tsc_bb;
    Vector#(768, BF16) temp_tf = tsc_time_first;
    Vector#(768, BF16) temp_td = tsc_time_decay;

    temp_pp[767] = toBF16(bram_pp.read());
    temp_aa[767] = toBF16(bram_aa.read());
    temp_bb[767] = toBF16(bram_bb.read());
    temp_tf[767] = toBF16(bram_time_first.read());
    temp_td[767] = toBF16(bram_time_decay.read());
    
    tsc_pp <= temp_pp;
    tsc_aa <= temp_aa;
    tsc_bb <= temp_bb;
    tsc_time_first <= temp_tf;
    tsc_time_decay <= temp_td;

    tsc_data_loaded <= True;
    tsc_state <= TSC_CTS_ComputeWW;
    state <= Process_CTS_WW0;
    base_addr <= 0;
    $display("[Cycle %0d] TSC: ALL REQUIRED DATA LOADED FROM BRAM.", cycle_count);
  endrule

   // ========== TSC CTS 
  // CTS: ww = time_first + kk using SIMD
  rule tsc_cts_compute_ww (tsc_state == TSC_CTS_ComputeWW && state == Process_CTS_WW0 && !pipeline.computation_done());
    Vector#(256, BF16) kk_chunk0 = newVector();
    Vector#(256, BF16) tf_chunk0 = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      kk_chunk0[i] = sa_result_k[i];
      tf_chunk0[i] = tsc_time_first[i];
    end

    pipeline.start_computation(ones, kk_chunk0, ones, tf_chunk0); // 1*kk + 1*tf
    state <= Wait_CTS_WW0;
    $display("[Cycle %0d] TSC-CTS SIMD: WW Computing chunk 0 (ww = kk + time_first)", cycle_count);
  endrule

  rule tsc_cts_wait_ww0 (state == Wait_CTS_WW0 && pipeline.computation_done());
    let ww_chunk = pipeline.get_result();
    writeVec(result_chunk0, ww_chunk);
    state <= Process_CTS_WW1;
    $display("[Cycle %0d] TSC-CTS SIMD: WW Chunk 0 complete", cycle_count);
  endrule

  rule tsc_cts_compute_ww1 (state == Process_CTS_WW1 && !pipeline.computation_done());
    Vector#(256, BF16) kk_chunk1 = newVector();
    Vector#(256, BF16) tf_chunk1 = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      kk_chunk1[i] = sa_result_k[256 + i];
      tf_chunk1[i] = tsc_time_first[256 + i];
    end

    pipeline.start_computation(ones, kk_chunk1, ones, tf_chunk1);
    state <= Wait_CTS_WW1;
    $display("[Cycle %0d] TSC-CTS SIMD: WW Computing chunk 1", cycle_count);
  endrule

  rule tsc_cts_wait_ww1 (state == Wait_CTS_WW1 && pipeline.computation_done());
    let ww_chunk = pipeline.get_result();
    writeVec(result_chunk1, ww_chunk);
    state <= Process_CTS_WW2;
    $display("[Cycle %0d] TSC-CTS SIMD: WW Chunk 1 complete", cycle_count);
  endrule

  rule tsc_cts_compute_ww2 (state == Process_CTS_WW2 && !pipeline.computation_done());
    Vector#(256, BF16) kk_chunk2 = newVector();
    Vector#(256, BF16) tf_chunk2 = newVector();
    for (Integer i = 0; i < 256; i = i + 1) begin
      kk_chunk2[i] = sa_result_k[512 + i];
      tf_chunk2[i] = tsc_time_first[512 + i];
    end
    pipeline.start_computation(ones, kk_chunk2, ones, tf_chunk2);
    state <= Wait_CTS_WW2;
    $display("[Cycle %0d] TSC-CTS SIMD: WW Computing chunk 2", cycle_count);
  endrule

  rule tsc_cts_wait_ww2 (state == Wait_CTS_WW2 && pipeline.computation_done());
    let ww_chunk = pipeline.get_result();
    writeVec(result_chunk2, ww_chunk);
    // Assemble full WW vector
    Vector#(512, BF16) ww_part01 = append(readVec(result_chunk0), readVec(result_chunk1));
    Vector#(768, BF16) ww_final = append(ww_part01, ww_chunk);
    tsc_cts_ww <= ww_final;
    tsc_state <= TSC_CTS_FeedMSE;
    state <= Process_CTS_B0;
    $display("[Cycle %0d] TSC-CTS: WW All chunks complete. Starting MSE", cycle_count);
  endrule

  // CTS: Feed MSE for e1, e2 computation
  rule tsc_cts_start_mse (tsc_state == TSC_CTS_FeedMSE && !tsc_cts_mse_started);
    tsc_cts_mse_started <= True;
    tsc_cts_mse_chunk_fed <= 0;
    $display("[Cycle %0d] TSC-CTS: Starting MSE (pp, ww -> e1, e2)", cycle_count);
  endrule

  rule tsc_cts_feed_mse (tsc_state == TSC_CTS_FeedMSE && tsc_cts_mse_started && tsc_cts_mse_chunk_fed < 24);
    if (tsc_feed_cooldown == 0) begin
      Bit#(10) start_idx = zeroExtend(tsc_cts_mse_chunk_fed) << 5;
      Vector#(32, BF16) pp_chunk = newVector();
      Vector#(32, BF16) ww_chunk = newVector();

      for (Integer i = 0; i < 32; i = i + 1) begin
        pp_chunk[i] = tsc_pp[start_idx + fromInteger(i)];
        ww_chunk[i] = tsc_cts_ww[start_idx + fromInteger(i)];
      end

      mse.feed_input(pp_chunk, ww_chunk);
      tsc_cts_mse_chunk_fed <= tsc_cts_mse_chunk_fed + 1;
      tsc_feed_cooldown <= 3;
      $display("[Cycle %0d] MSE: MSE input chunk %0d fed", cycle_count, tsc_cts_mse_chunk_fed);

      if (tsc_cts_mse_chunk_fed == 23) begin
        tsc_state <= TSC_CTS_WaitMSEDone;
        $display("[Cycle %0d] MSE: ALL 24 MSE INPUT CHUNKS FED", cycle_count);
      end
    end else begin
      tsc_feed_cooldown <= tsc_feed_cooldown - 1;
    end
  endrule

  rule tsc_cts_collect_e1_e2 ((tsc_state == TSC_CTS_WaitMSEDone || tsc_state == TSC_CTS_FeedMSE)  && mse.e_ready() && tsc_cts_e1_collected < 96 && tsc_cts_e2_collected < 96);
    let e1_8 <- mse.get_e1();
    let e2_8 <- mse.get_e2();
    
    Vector#(768, BF16) temp_e1 = tsc_cts_e1;
    Vector#(768, BF16) temp_e2 = tsc_cts_e2;
    Bit#(10) base = zeroExtend(tsc_cts_e1_collected) << 3;

    for (Integer i = 0; i < 8; i = i + 1) begin
      temp_e1[base + fromInteger(i)] = e1_8[i];
      temp_e2[base + fromInteger(i)] = e2_8[i];
    end

    tsc_cts_e1 <= temp_e1;
    tsc_cts_e2 <= temp_e2;
    tsc_cts_e1_collected <= tsc_cts_e1_collected + 1;
    tsc_cts_e2_collected <= tsc_cts_e2_collected + 1;

    $display("[Cycle %0d] MSE : E1/E2 Chunk %0d collected", cycle_count, tsc_cts_e1_collected);
    if(tsc_cts_e1_collected == 95) begin
      $display("[Cycle %0d] MSE : ALL E1/E2 COLLECTED (96 chunks)", cycle_count);
      $display("[Cycle %0d] TSC_CTS : MSE DONE", cycle_count);
      tsc_state <= TSC_CTS_ComputeB;
    end
  endrule

  //CTS Compute B = e1 * bb + e2 using SIMD
  rule tsc_cts_compute_b0 (tsc_state == TSC_CTS_ComputeB && state == Process_CTS_B0 && !pipeline.computation_done());
    Vector#(256, BF16) e1_chunk = newVector();
    Vector#(256, BF16) bb_chunk = newVector();
    Vector#(256, BF16) e2_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      e1_chunk[i] = tsc_cts_e1[i];
      bb_chunk[i] = tsc_bb[i];
      e2_chunk[i] = tsc_cts_e2[i];
    end

    pipeline.start_computation(e1_chunk, bb_chunk, e2_chunk, ones); // e1*bb + e2*1
    state <= Wait_CTS_B0;
    $display("[Cycle %0d] TSC-CTS SIMD: Computing B chunk 0 (b = e1*bb + e2)", cycle_count);
  endrule

  rule tsc_cts_wait_b0 (state == Wait_CTS_B0 && pipeline.computation_done());
    let b_chunk = pipeline.get_result();
    writeVec(result_chunk0, b_chunk);
    state <= Process_CTS_B1;
    $display("[Cycle %0d] TSC-CTS SIMD: B chunk 0 complete", cycle_count);
  endrule

  rule tsc_cts_compute_b1 (state == Process_CTS_B1 && !pipeline.computation_done());
    Vector#(256, BF16) e1_chunk = newVector();
    Vector#(256, BF16) bb_chunk = newVector();
    Vector#(256, BF16) e2_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      e1_chunk[i] = tsc_cts_e1[256 + i];
      bb_chunk[i] = tsc_bb[256 + i];
      e2_chunk[i] = tsc_cts_e2[256 + i];
    end

    pipeline.start_computation(e1_chunk, bb_chunk, e2_chunk, ones);
    state <= Wait_CTS_B1;
    $display("[Cycle %0d] TSC-CTS SIMD: Computing B chunk 1", cycle_count);
  endrule

  rule tsc_cts_wait_b1 (state == Wait_CTS_B1 && pipeline.computation_done());
    let b_chunk = pipeline.get_result();
    writeVec(result_chunk1, b_chunk);
    state <= Process_CTS_B2;
    $display("[Cycle %0d] TSC-CTS SIMD: B chunk 1 complete", cycle_count);
  endrule

  rule tsc_cts_compute_b2 (state == Process_CTS_B2 && !pipeline.computation_done());
    Vector#(256, BF16) e1_chunk = newVector();
    Vector#(256, BF16) bb_chunk = newVector();
    Vector#(256, BF16) e2_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      e1_chunk[i] = tsc_cts_e1[512 + i];
      bb_chunk[i] = tsc_bb[512 + i];
      e2_chunk[i] = tsc_cts_e2[512 + i];
    end

    pipeline.start_computation(e1_chunk, bb_chunk, e2_chunk, ones);
    state <= Wait_CTS_B2;
    $display("[Cycle %0d] TSC-CTS SIMD: Computing B chunk 2", cycle_count);
  endrule

  rule tsc_cts_wait_b2 (state == Wait_CTS_B2 && pipeline.computation_done());
    let b_chunk = pipeline.get_result();
    writeVec(result_chunk2, b_chunk);

    // Assemble full B vector
    Vector#(512, BF16) b_part01 = append(readVec(result_chunk0), readVec(result_chunk1));
    Vector#(768, BF16) b_final = append(b_part01, b_chunk);
    tsc_cts_b <= b_final;
    tsc_state <= TSC_NTS_ComputeWW;
    state <= Process_NTS_WW0;
    $display("[Cycle %0d] TSC-CTS SIMD: B computation complete", cycle_count);
    $display("[Cycle %0d] TSC-CTS: B DONE. Starting NTS", cycle_count);
  endrule

  // ========== TSC NTS Computation ==========
  // NTS: Compute WW = pp + time_decay
  rule tsc_nts_compute_ww0 (tsc_state == TSC_NTS_ComputeWW && state == Process_NTS_WW0 && !pipeline.computation_done());
    Vector#(256, BF16) pp_chunk = newVector();
    Vector#(256, BF16) td_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      pp_chunk[i] = tsc_pp[i];
      td_chunk[i] = tsc_time_decay[i];
    end

    pipeline.start_computation(ones, pp_chunk, ones, td_chunk); // 1*pp + 1*td
    state <= Wait_NTS_WW0;
    $display("[Cycle %0d] TSC-NTS SIMD: Computing WW chunk 0 (ww = pp + time_decay)", cycle_count);
  endrule

  rule tsc_nts_wait_ww0 (state == Wait_NTS_WW0 && pipeline.computation_done());
    let ww_chunk = pipeline.get_result();
    writeVec(result_chunk0, ww_chunk);
    state <= Process_NTS_WW1;
    $display("[Cycle %0d] TSC-NTS SIMD: WW chunk 0 complete", cycle_count);
  endrule

  rule tsc_nts_compute_ww1 (state == Process_NTS_WW1 && !pipeline.computation_done());
    Vector#(256, BF16) pp_chunk = newVector();
    Vector#(256, BF16) td_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      pp_chunk[i] = tsc_pp[256 + i];
      td_chunk[i] = tsc_time_decay[256 + i];
    end

    pipeline.start_computation(ones, pp_chunk, ones, td_chunk);
    state <= Wait_NTS_WW1;
    $display("[Cycle %0d] TSC-NTS SIMD: Computing WW chunk 1", cycle_count);
  endrule

  rule tsc_nts_wait_ww1 (state == Wait_NTS_WW1 && pipeline.computation_done());
    let ww_chunk = pipeline.get_result();
    writeVec(result_chunk1, ww_chunk);
    state <= Process_NTS_WW2;
    $display("[Cycle %0d] TSC-NTS: WW chunk 1 complete", cycle_count);
  endrule

  rule tsc_nts_compute_ww2 (state == Process_NTS_WW2 && !pipeline.computation_done());
    Vector#(256, BF16) pp_chunk = newVector();
    Vector#(256, BF16) td_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      pp_chunk[i] = tsc_pp[512 + i];
      td_chunk[i] = tsc_time_decay[512 + i];
    end

    pipeline.start_computation(ones, pp_chunk, ones, td_chunk);
    state <= Wait_NTS_WW2;
    $display("[Cycle %0d] TSC-NTS SIMD: Computing WW chunk 2", cycle_count);
  endrule

  rule tsc_nts_wait_ww2 (state == Wait_NTS_WW2 && pipeline.computation_done());
    let ww_chunk = pipeline.get_result();
    writeVec(result_chunk2, ww_chunk);

    Vector#(512, BF16) ww_part01 = append(readVec(result_chunk0), readVec(result_chunk1));
    Vector#(768, BF16) ww_final = append(ww_part01, ww_chunk);
    tsc_nts_ww <= ww_final;
    tsc_state <= TSC_NTS_FeedMSE;
    state <= Process_NTS_S30;  // Prepare for S3 computation
    $display("[Cycle %0d] TSC-NTS: WW computation complete. Starting MSE", cycle_count);
  endrule

  // NTS: Feed MSE for e1, e2, p computation
  rule tsc_nts_start_mse (tsc_state == TSC_NTS_FeedMSE && !tsc_nts_mse_started);
    tsc_nts_mse_started <= True;
    tsc_nts_mse_chunk_fed <= 0;
    $display("[Cycle %0d] TSC-NTS: Starting MSE with p storage (ww, kk -> e1, e2, p)", cycle_count);
  endrule

  rule tsc_nts_feed_mse ((tsc_state == TSC_NTS_FeedMSE) && tsc_nts_mse_started && tsc_nts_mse_chunk_fed < 24);
    if (tsc_feed_cooldown == 0) begin
      Bit#(10) start_idx = zeroExtend(tsc_nts_mse_chunk_fed) << 5;
      Vector#(32, BF16) ww_chunk = newVector();
      Vector#(32, BF16) kk_chunk = newVector();

      for (Integer i = 0; i < 32; i = i + 1) begin
        ww_chunk[i] = tsc_nts_ww[start_idx + fromInteger(i)];
        kk_chunk[i] = sa_result_k[start_idx + fromInteger(i)];
      end

      mse.feed_input(ww_chunk, kk_chunk);
      tsc_nts_mse_chunk_fed <= tsc_nts_mse_chunk_fed + 1;
      tsc_feed_cooldown <= 3;
      $display("[Cycle %0d] MSE: MSE input chunk %0d fed", cycle_count, tsc_nts_mse_chunk_fed);

      if (tsc_nts_mse_chunk_fed == 23) begin
        tsc_state <= TSC_NTS_WaitMSEDone;
        $display("[Cycle %0d] MSE: ALL 24 MSE INPUT CHUNKS FED", cycle_count);
      end
    end else begin
      tsc_feed_cooldown <= tsc_feed_cooldown - 1;
    end
  endrule

  rule tsc_nts_collect_e1_e2 ((tsc_state == TSC_NTS_WaitMSEDone || tsc_state == TSC_NTS_FeedMSE) && mse.e_ready() && tsc_nts_e1_collected < 96 && tsc_nts_e2_collected < 96);
    let e1_8 <- mse.get_e1();
    let e2_8 <- mse.get_e2();

    Vector#(768, BF16) temp_e1 = tsc_nts_e1;
    Vector#(768, BF16) temp_e2 = tsc_nts_e2;
    Bit#(10) base = zeroExtend(tsc_nts_e1_collected) << 3;

    for (Integer i = 0; i < 8; i = i + 1) begin
      temp_e1[base + fromInteger(i)] = e1_8[i];
      temp_e2[base + fromInteger(i)] = e2_8[i];
    end

    tsc_nts_e1 <= temp_e1;
    tsc_nts_e2 <= temp_e2;
    tsc_nts_e1_collected <= tsc_nts_e1_collected + 1;
    tsc_nts_e2_collected <= tsc_nts_e2_collected + 1;

    $display("[Cycle %0d] MSE : E1/E2 Chunk %0d collected", cycle_count, tsc_nts_e1_collected);
    if(tsc_nts_e1_collected == 95) begin
      $display("[Cycle %0d] MSE : ALL E1/E2 COLLECTED (96 chunks)", cycle_count);
      $display("[Cycle %0d] TSC_NTS : MSE DONE", cycle_count);
    end
  endrule

  rule tsc_nts_collect_p ((tsc_state == TSC_NTS_WaitMSEDone || tsc_state == TSC_NTS_FeedMSE) && mse.p_ready() && tsc_nts_p_collected < 24);
    let p32 <- mse.get_p();
    Vector#(768, BF16) temp = tsc_nts_p;
    Bit#(10) base = zeroExtend(tsc_nts_p_collected) << 5;
    for (Integer i = 0; i < 32; i = i + 1) begin
      temp[base + fromInteger(i)] = p32[i];
    end
    tsc_nts_p <= temp;
    tsc_nts_p_collected <= tsc_nts_p_collected + 1;
    $display("[Cycle %0d] MSE : p Chunk %0d collected", cycle_count, tsc_nts_p_collected);
    if (tsc_nts_p_collected == 23) begin
      $display("[Cycle %0d] MSE: ALL P COLLECTED (24 chunks)", cycle_count);
    end
  endrule

  rule tsc_nts_mse_done (tsc_state == TSC_NTS_WaitMSEDone && tsc_nts_e1_collected == 96 && tsc_nts_e2_collected == 96);
    tsc_state <= TSC_NTS_ComputeS3;
    $display("[Cycle %0d] TSC_NTS : Transitioning to S3 computation", cycle_count);
  endrule

  //NTS Compute S3 = e1 * bb + e2 using SIMD
  rule tsc_nts_compute_s30 (tsc_state == TSC_NTS_ComputeS3 && state == Process_NTS_S30 && !pipeline.computation_done());
    Vector#(256, BF16) e1_chunk = newVector();
    Vector#(256, BF16) bb_chunk = newVector();
    Vector#(256, BF16) e2_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      e1_chunk[i] = tsc_nts_e1[i];
      bb_chunk[i] = tsc_bb[i];
      e2_chunk[i] = tsc_nts_e2[i];
    end

    pipeline.start_computation(e1_chunk, bb_chunk, e2_chunk, ones); // e1*bb + e2*1
    state <= Wait_NTS_S30;
    $display("[Cycle %0d] TSC-NTS SIMD: Computing S3 chunk 0", cycle_count);
  endrule

  rule tsc_nts_wait_s30 (state == Wait_NTS_S30 && pipeline.computation_done());
    let b_chunk = pipeline.get_result();
    writeVec(result_chunk0, b_chunk);
    state <= Process_NTS_S31;
    $display("[Cycle %0d] TSC-NTS SIMD: S3 chunk 0 complete", cycle_count);
  endrule

  rule tsc_nts_compute_s31 (state == Process_NTS_S31 && !pipeline.computation_done());
    Vector#(256, BF16) e1_chunk = newVector();
    Vector#(256, BF16) bb_chunk = newVector();
    Vector#(256, BF16) e2_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      e1_chunk[i] = tsc_nts_e1[256 + i];
      bb_chunk[i] = tsc_bb[256 + i];
      e2_chunk[i] = tsc_nts_e2[256 + i];
    end

    pipeline.start_computation(e1_chunk, bb_chunk, e2_chunk, ones);
    state <= Wait_NTS_S31;
    $display("[Cycle %0d] TSC-NTS SIMD: Computing S3 chunk 1", cycle_count);
  endrule

  rule tsc_nts_wait_s31 (state == Wait_NTS_S31 && pipeline.computation_done());
    let b_chunk = pipeline.get_result();
    writeVec(result_chunk1, b_chunk);
    state <= Process_NTS_S32;
    $display("[Cycle %0d] TSC-NTS SIMD: S3 chunk 1 complete", cycle_count);
  endrule

  rule tsc_nts_compute_s32 (state == Process_NTS_S32 && !pipeline.computation_done());
    Vector#(256, BF16) e1_chunk = newVector();
    Vector#(256, BF16) bb_chunk = newVector();
    Vector#(256, BF16) e2_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      e1_chunk[i] = tsc_nts_e1[512 + i];
      bb_chunk[i] = tsc_bb[512 + i];
      e2_chunk[i] = tsc_nts_e2[512 + i];
    end

    pipeline.start_computation(e1_chunk, bb_chunk, e2_chunk, ones);
    state <= Wait_NTS_S32;
    $display("[Cycle %0d] TSC-NTS SIMD: Computing S3 chunk 2", cycle_count);
  endrule

  rule tsc_nts_wait_s32 (state == Wait_NTS_S32 && pipeline.computation_done());
    let b_chunk = pipeline.get_result();
    writeVec(result_chunk2, b_chunk);

    // Assemble full B vector
    Vector#(512, BF16) b_part01 = append(readVec(result_chunk0), readVec(result_chunk1));
    Vector#(768, BF16) b_final = append(b_part01, b_chunk);
    tsc_nts_s3 <= b_final;
    tsc_state <= TSC_WaitVV;
    state <= Idle;
    $display("[Cycle %0d] TSC-NTS SIMD: S3 computation complete", cycle_count);
    $display("[Cycle %0d] TSC-NTS: S3 DONE. Waiting for V", cycle_count);
  endrule

  rule tsc_wait_vv (tsc_state == TSC_WaitVV && tsc_vv_ready);
    state <= Process_CTS_A0;
    tsc_state <= TSC_CTS_ComputeA;
    $display("[Cycle %0d] TSC-NTS: V Ready. Transitioning to compute A SIMD", cycle_count);
  endrule

  // CTS Compute a = e1 * aa + e2 * vv
  rule tsc_cts_compute_a0 (tsc_state == TSC_CTS_ComputeA && !pipeline.computation_done());
    Vector#(256, BF16) e1_chunk = newVector();
    Vector#(256, BF16) aa_chunk = newVector();
    Vector#(256, BF16) e2_chunk = newVector();
    Vector#(256, BF16) vv_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      e1_chunk[i] = tsc_cts_e1[i];
      aa_chunk[i] = tsc_aa[i];
      e2_chunk[i] = tsc_cts_e2[i];
      vv_chunk[i] = sa_result_v[i];
    end

    pipeline.start_computation(e1_chunk, aa_chunk, e2_chunk, vv_chunk);
    state <= Wait_CTS_A0;
    tsc_state <= TSC_CTS_WaitADone;
    $display("[Cycle %0d] TSC-CTS SIMD: Computing A chunk 0", cycle_count);
  endrule

  rule tsc_cts_wait_a0(state == Wait_CTS_A0 && pipeline.computation_done());
    let a_chunk = pipeline.get_result();
    writeVec(result_chunk0, a_chunk);
    state <= Process_CTS_A1;
    $display("[Cycle %0d] TSC-CTS SIMD: A chunk 0 complete", cycle_count);
  endrule

  rule tsc_cts_compute_a1 (state == Process_CTS_A1 && !pipeline.computation_done());
    Vector#(256, BF16) e1_chunk = newVector();
    Vector#(256, BF16) aa_chunk = newVector();
    Vector#(256, BF16) e2_chunk = newVector();
    Vector#(256, BF16) vv_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      e1_chunk[i] = tsc_cts_e1[256 + i];
      aa_chunk[i] = tsc_aa[256 + i];
      e2_chunk[i] = tsc_cts_e2[256 + i];
      vv_chunk[i] = sa_result_v[256 + i];
    end

    pipeline.start_computation(e1_chunk, aa_chunk, e2_chunk, vv_chunk);
    state <= Wait_CTS_A1;
    $display("[Cycle %0d] TSC-CTS SIMD: Computing A chunk 1", cycle_count);
  endrule

  rule tsc_cts_wait_a1 (state == Wait_CTS_A1 && pipeline.computation_done());
    let a_chunk = pipeline.get_result();
    writeVec(result_chunk1, a_chunk);
    state <= Process_CTS_A2;
    $display("[Cycle %0d] TSC-CTS SIMD: A chunk 1 complete", cycle_count);
  endrule

  rule tsc_cts_compute_a2 (state == Process_CTS_A2 && !pipeline.computation_done());
    Vector#(256, BF16) e1_chunk = newVector();
    Vector#(256, BF16) aa_chunk = newVector();
    Vector#(256, BF16) e2_chunk = newVector();
    Vector#(256, BF16) vv_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      e1_chunk[i] = tsc_cts_e1[512 + i];
      aa_chunk[i] = tsc_aa[512 + i];
      e2_chunk[i] = tsc_cts_e2[512 + i];
      vv_chunk[i] = sa_result_v[512 + i];
    end

    pipeline.start_computation(e1_chunk, aa_chunk, e2_chunk, vv_chunk);
    state <= Wait_CTS_A2;
    $display("[Cycle %0d] TSC-CTS SIMD: Computing A chunk 2", cycle_count);
  endrule

  rule tsc_cts_wait_a2 (state == Wait_CTS_A2 && pipeline.computation_done());
    let a_chunk = pipeline.get_result();
    writeVec(result_chunk2, a_chunk);

    Vector#(512, BF16) a_part01 = append(readVec(result_chunk0), readVec(result_chunk1));
    Vector#(768, BF16) a_final = append(a_part01, a_chunk);
    tsc_cts_a <= a_final;

    tsc_state <= TSC_WKV;
    //tsc_state <= TSC_NTS_ComputeS2;
    state <= Idle;
    $display("[Cycle %0d] TSC-CTS SIMD: A computation complete", cycle_count);
    $display("[Cycle %0d] TSC-CTS: A DONE. Staring WKV", cycle_count);
    $display("[Cycle %0d] TSC-WKV: Starting division pipeline (a/b) for 768 elements", cycle_count);
  endrule

  // wkv a/b
  rule tsc_wkv_feed_divisions (tsc_state == TSC_WKV);
    divider.putVectors(tsc_cts_a, tsc_cts_b);
    $display("[Cycle %0d] TSC-WKV: Fed A and B vectors to division", cycle_count);
    tsc_state <= TSC_WaitWKV;
  endrule

  rule tsc_wkv_collect_results (tsc_state == TSC_WaitWKV && divider.hasResult());
    let result <- divider.getResult();
    div_result_wkv <= result; 
    $display("[Cycle %0d] TSC-WKV: division results collected wkv[2] = %h : wkv[766] = %h", cycle_count, result[2], result[766]);
    tsc_state <= TSC_NTS_ComputeS2;
    state <= Process_NTS_S20;
  endrule

  // NTS Compute e1 * aa + e2 * vv
  rule tsc_nts_compute_s20 (tsc_state == TSC_NTS_ComputeS2 && state == Process_NTS_S20 && !pipeline.computation_done());
    Vector#(256, BF16) e1_chunk = newVector();
    Vector#(256, BF16) aa_chunk = newVector();
    Vector#(256, BF16) e2_chunk = newVector();
    Vector#(256, BF16) vv_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      e1_chunk[i] = tsc_nts_e1[i];
      aa_chunk[i] = tsc_aa[i];
      e2_chunk[i] = tsc_nts_e2[i];
      vv_chunk[i] = sa_result_v[i];
    end

    pipeline.start_computation(e1_chunk, aa_chunk, e2_chunk, vv_chunk);
    state <= Wait_NTS_S20;
    tsc_state <= TSC_NTS_WaitS2Done;
    $display("[Cycle %0d] TSC-NTS SIMD: Computing S2 chunk 0", cycle_count);
  endrule

  rule tsc_nts_wait_s20(state == Wait_NTS_S20 && pipeline.computation_done());
    let s2_chunk = pipeline.get_result();
    writeVec(result_chunk0, s2_chunk);
    state <= Process_NTS_S21;
    $display("[Cycle %0d] TSC-NTS SIMD: S2 chunk 0 complete", cycle_count);
  endrule

  rule tsc_nts_compute_s21 (state == Process_NTS_S21 && !pipeline.computation_done());
    Vector#(256, BF16) e1_chunk = newVector();
    Vector#(256, BF16) aa_chunk = newVector();
    Vector#(256, BF16) e2_chunk = newVector();
    Vector#(256, BF16) vv_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      e1_chunk[i] = tsc_nts_e1[256 + i];
      aa_chunk[i] = tsc_aa[256 + i];
      e2_chunk[i] = tsc_nts_e2[256 + i];
      vv_chunk[i] = sa_result_v[256 + i];
    end

    pipeline.start_computation(e1_chunk, aa_chunk, e2_chunk, vv_chunk);
    state <= Wait_NTS_S21;
    $display("[Cycle %0d] TSC-NTS SIMD: Computing S2 chunk 1", cycle_count);
  endrule
  
  rule tsc_nts_wait_s21(state == Wait_NTS_S21 && pipeline.computation_done());
    let s2_chunk = pipeline.get_result();
    writeVec(result_chunk1, s2_chunk);
    state <= Process_NTS_S22;
    $display("[Cycle %0d] TSC-NTS SIMD: S2 chunk 1 complete", cycle_count);
  endrule

  rule tsc_nts_compute_s22 (state == Process_NTS_S22 && !pipeline.computation_done());
    Vector#(256, BF16) e1_chunk = newVector();
    Vector#(256, BF16) aa_chunk = newVector();
    Vector#(256, BF16) e2_chunk = newVector();
    Vector#(256, BF16) vv_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      e1_chunk[i] = tsc_nts_e1[512 + i];
      aa_chunk[i] = tsc_aa[512 + i];
      e2_chunk[i] = tsc_nts_e2[512 + i];
      vv_chunk[i] = sa_result_v[512 + i];
    end

    pipeline.start_computation(e1_chunk, aa_chunk, e2_chunk, vv_chunk);
    state <= Wait_NTS_S22;
    $display("[Cycle %0d] TSC-NTS SIMD: Computing S2 chunk 2", cycle_count);
  endrule

  rule tsc_nts_wait_s22 (state == Wait_NTS_S22 && pipeline.computation_done());
    let s2_chunk = pipeline.get_result();
    writeVec(result_chunk2, s2_chunk);

    Vector#(512, BF16) s2_part01 = append(readVec(result_chunk0), readVec(result_chunk1));
    Vector#(768, BF16) s2_final = append(s2_part01, s2_chunk);
    tsc_nts_s2 <= s2_final;
    tsc_state <= TSC_Done;
    state <= Idle;
    $display("[Cycle %0d] TSC-NTS SIMD: S2 computation complete", cycle_count);
  endrule
  
  //sigmoid 
  rule tsc_r_feed_sigmoid (tsc_state == TSC_Sigmoid && sa_r_ready);
    sigmoid.putVectors(sa_result_r);
    $display("[Cycle %0d] Sigmoid: Fed sa_result_r to sigmoid", cycle_count);
    tsc_state <= TSC_WaitSigmoid;
  endrule

  rule tsc_r_collect_results (tsc_state == TSC_WaitSigmoid && sigmoid.hasResult());
    let result <- sigmoid.getResult();
    sigmoid_result_r <= result;
    $display("[Cycle %0d] Sigmoid: Sigmoid results collected r[2] = %h : r[766] = %h", cycle_count, result[2], result[766]);
    tsc_state <= TSC_RWKV;
    state <= Process_RWKV0;
    $display("[Cycle %0d] COP: Sigmoid Done Starting SIMD for RWKV Computaton", cycle_count);
  endrule

  // RWKV Compute r * wkv
  rule tsc_compute_rwkv0 (tsc_state == TSC_RWKV && state == Process_RWKV0 && !pipeline.computation_done());
    Vector#(256, BF16) r_chunk = newVector();
    Vector#(256, BF16) wkv_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      r_chunk[i] = sigmoid_result_r[i];
      wkv_chunk[i] = div_result_wkv[i];
    end

    pipeline.start_computation(r_chunk, wkv_chunk, zeros, zeros);
    state <= Wait_RWKV0;
    tsc_state <= TSC_WaitRWKV;
    $display("[Cycle %0d] RWKV SIMD: Computing chunk 0", cycle_count);
  endrule

  rule tsc_wait_rwkv0 (state == Wait_RWKV0 && pipeline.computation_done());
    let rwkv_chunk = pipeline.get_result();
    writeVec(result_chunk0, rwkv_chunk);
    state <= Process_RWKV1;
    $display("[Cycle %0d] RWKV SIMD: Completed chunk 0", cycle_count);
  endrule

  rule tsc_compute_rwkv1 (state == Process_RWKV1 && !pipeline.computation_done());
    Vector#(256, BF16) r_chunk = newVector();
    Vector#(256, BF16) wkv_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      r_chunk[i] = sigmoid_result_r[256 + i];
      wkv_chunk[i] = div_result_wkv[256 + i];
    end

    pipeline.start_computation(r_chunk, wkv_chunk, zeros, zeros);
    state <= Wait_RWKV1;
    $display("[Cycle %0d] RWKV SIMD: Computing chunk 1", cycle_count);
  endrule

  rule tsc_wait_rwkv1 (state == Wait_RWKV1 && pipeline.computation_done());
    let rwkv_chunk = pipeline.get_result();
    writeVec(result_chunk1, rwkv_chunk);
    state <= Process_RWKV2;
    $display("[Cycle %0d] RWKV SIMD: Completed chunk 1", cycle_count);
  endrule

  rule tsc_compute_rwkv2 (state == Process_RWKV2 && !pipeline.computation_done());
    Vector#(256, BF16) r_chunk = newVector();
    Vector#(256, BF16) wkv_chunk = newVector();

    for (Integer i = 0; i < 256; i = i + 1) begin
      r_chunk[i] = sigmoid_result_r[512 + i];
      wkv_chunk[i] = div_result_wkv[512 + i];
    end

    pipeline.start_computation(r_chunk, wkv_chunk, zeros, zeros);
    state <= Wait_RWKV2;
    $display("[Cycle %0d] RWKV SIMD: Computing chunk 2", cycle_count);
  endrule

  rule tsc_wait_rwvk2 (state == Wait_RWKV2 && pipeline.computation_done());
    let rwkv_chunk = pipeline.get_result();
    writeVec(result_chunk2, rwkv_chunk);

    Vector#(512, BF16) rwkv_part1 = append(readVec(result_chunk0), readVec(result_chunk1));
    Vector#(768, BF16) rwkv_final = append(rwkv_part1, rwkv_chunk);
    tsc_rwkv <= rwkv_final;
    tsc_state <= TSC_Done;

    sa1_first_input <= rwkv_final;
    sa1_state <= SA_WaitWeights;
    sa1_input_chunk_idx <= 0;
    sa1_output_row_idx <=0;
    sa1_weights_ready <= False;
    sa1_started <= False;
    sa1_accumulator <= unpack(0);
    current_sa_operation <= SA_Operation_O;

    state <= Idle;
    $display("[Cycle %0d] RWKV SIMD: RWKV Computation Done. Starting SA for O", cycle_count);
  endrule

  rule tsc_done (tsc_state == TSC_Done);
    $display("[Cycle %0d] TSC DONE: CTS + NTS + STATE VEC", cycle_count);
    tsc_state <= TSC_Idle;
  endrule

  rule lif_feed_inputs (tsc_state == ProcessLIF && lif_chunk_fed < 48);
    Bit#(10) start_idx = zeroExtend(lif_chunk_fed) << 4;

    Vector#(16, BF16) chunk = newVector();
    for (Integer i = 0; i < 16; i = i + 1) begin
      chunk[i] = sa_result_o[start_idx + fromInteger(i)];
    end

    lif.feed_inputs(chunk);
    $display("[Cycle %0d] LIF : Fed chunk %0d to LIF", cycle_count, lif_chunk_fed);

    lif_chunk_fed <= lif_chunk_fed + 1;
    if (lif_chunk_fed == 47) begin
      tsc_state <= WaitLIF;
      $display("[Cycle %0d] LIF : ALL 48 CHUNKS FED TO LIF", cycle_count, lif_chunk_fed);
    end
  endrule

  rule all_done (tsc_state == WaitLIF && !lif_done);
    if (lif.is_done() == True) begin
      lif_done <= lif.is_done();
      tsc_state <= DoneLIF; 
      $display("[Cycle %0d] COP: All computation complete GG Bois", cycle_count);
    end
  endrule

  rule one_last_rule (tsc_state == DoneLIF);
    $display();
    $display();
    $display("============================================");
    $display("----------- GG BOIS MONICA WORKS -----------");
    $display("============================================");
    $display();
    state <= Done;
  endrule

  // ========== INTERFACE METHODS
  method Action start_computation() if (state == Idle || state == Done);
    state <= LoadK0;
    results_ready <= False;
    current_sa_operation <= SA_Operation_K;
    $display("[Cycle %0d] COP: Starting computation", cycle_count);
  endmethod

  method Vector#(768, BF16) get_result_k() if (state == Done);
    return simd_result_k;
  endmethod

  //method Bool computation_done() = results_ready;
  method Bool computation_done() = (state == Done);

  method Vector#(16, Vector#(48, Bool)) get_output() if (state == Done);
    return lif.get_all_spikes();
  endmethod
endmodule
endpackage
