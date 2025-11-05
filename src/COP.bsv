package COP;

import Vector::*;
import BF16::*;
import MSE::*;
import BRAMCore::*;
import BF16_WS_16x16SA::*;
import BF16_SIMD_Pipeline::*;
import BRAMWeightLoader::*;

interface COP_Ifc;
  method Action start_computation();
  method Vector#(768, BF16) get_result_k();
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
  // WW operation
  ProcessWW0, WaitWW0, 
  ProcessWW1, WaitWW1, 
  ProcessWW2, WaitWW2, 
  Done
} State deriving (Bits, Eq);

typedef enum {
  SA_Operation_K, SA_Operation_V, SA_Operation_R, SA_Operation_Done
} SA_Operation deriving (Bits, Eq);

typedef enum {
  SA_Idle, SA_WaitWeights, SA_LoadAct, SA_Compute, SA_RowDone, SA_AllDone
} SA_State deriving (Bits, Eq);

typedef enum {
  TSC_Idle,
  TSC_LoadData, // load pp, time_first from BRAM
  TSC_WaitDataLoad,
  TSC_ComputeWW, // start ww calculation via SIMD
  TSC_WaitWWDone,
  TSC_FeedMSE,
  TSC_WaitMSEDone,
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

  // ========== Modules Instantiation
  IfcBF16_SIMD_Pipeline pipeline <- mkBF16_SIMD_Pipeline();
  BRAMWeightLoaderIfc weight_loader <- mkBRAMWeightLoader();
  BF16_SA_IFC sa <- mkBF16_16x16SA();
  BF16AdderIFC bf16_add <- mkBF16Adder();
  MSEIfc mse <- mkMSE();

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
  Reg#(Vector#(768, BF16)) tsc_pp <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_time_first <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_ww <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_kk <- mkReg(unpack(0));  // Store K result for WW computation
  Reg#(Bool) tsc_data_loaded <- mkReg(False);
  Reg#(Bool) tsc_ww_computed <- mkReg(False);
  Reg#(Bit#(10)) tsc_load_addr <- mkReg(0);
  Reg#(Bit#(6)) tsc_mse_chunk_fed <- mkReg(0);  // 0-23 for 24 chunks of 32 elements

  // MSE module and results
  Reg#(Vector#(768, BF16)) tsc_e1 <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) tsc_e2 <- mkReg(unpack(0));
  Reg#(Bit#(7)) tsc_e1_collected <- mkReg(0);  // 0-95 for 96 chunks of 8 elements
  Reg#(Bit#(7)) tsc_e2_collected <- mkReg(0);
  Reg#(Bool) tsc_mse_started <- mkReg(False);


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
    //state <= Done;
    results_ready <= True;
    $display("[Cycle %0d] SIMD: R operation complete ", cycle_count);
    $display("[Cycle %0d] SIMD: ALL SIMD COMPUTATION DONE", cycle_count);
  endrule

  // ========== WW SIMD (for TSC)
  rule compute_ww0 (state == ProcessWW0 && !pipeline.computation_done());
    Vector#(256, BF16) ones = replicate(toBF16(16'h3f80)); // 1.0
    Vector#(256, BF16) kk_chunk0 = newVector();
    Vector#(256, BF16) tf_chunk0 = newVector();
  
    for (Integer i = 0; i < 256; i = i + 1) begin
      kk_chunk0[i] = tsc_kk[i];
      tf_chunk0[i] = tsc_time_first[i];
    end
  
    pipeline.start_computation(ones, kk_chunk0, ones, tf_chunk0); // 1*kk + 1*tf
    state <= WaitWW0;
    $display("[Cycle %0d] SIMD: WW Computing chunk 0 (ww = kk + time_first)", cycle_count);
  endrule

  rule wait_ww0 (state == WaitWW0 && pipeline.computation_done());
    let ww_chunk = pipeline.get_result();
    writeVec(result_chunk0, ww_chunk);
    state <= ProcessWW1;
    $display("[Cycle %0d] SIMD: WW Chunk 0 complete", cycle_count);
  endrule

  rule compute_ww1 (state == ProcessWW1 && !pipeline.computation_done());
    Vector#(256, BF16) ones = replicate(toBF16(16'h3f80));
    Vector#(256, BF16) kk_chunk1 = newVector();
    Vector#(256, BF16) tf_chunk1 = newVector();
  
    for (Integer i = 0; i < 256; i = i + 1) begin
      kk_chunk1[i] = tsc_kk[256 + i];
      tf_chunk1[i] = tsc_time_first[256 + i];
    end
  
    pipeline.start_computation(ones, kk_chunk1, ones, tf_chunk1);
    state <= WaitWW1;
    $display("[Cycle %0d] SIMD: WW Computing chunk 1", cycle_count);
  endrule

  rule wait_ww1 (state == WaitWW1 && pipeline.computation_done());
    let ww_chunk = pipeline.get_result();
    writeVec(result_chunk1, ww_chunk);
    state <= ProcessWW2;
    $display("[Cycle %0d] SIMD: WW Chunk 1 complete", cycle_count);
  endrule

  rule compute_ww2 (state == ProcessWW2 && !pipeline.computation_done());
    Vector#(256, BF16) ones = replicate(toBF16(16'h3f80));
    Vector#(256, BF16) kk_chunk2 = newVector();
    Vector#(256, BF16) tf_chunk2 = newVector();
  
    for (Integer i = 0; i < 256; i = i + 1) begin
      kk_chunk2[i] = tsc_kk[512 + i];
      tf_chunk2[i] = tsc_time_first[512 + i];
    end
  
    pipeline.start_computation(ones, kk_chunk2, ones, tf_chunk2);
    state <= WaitWW2;
    $display("[Cycle %0d] SIMD: WW Computing chunk 2", cycle_count);
  endrule

  rule wait_ww2 (state == WaitWW2 && pipeline.computation_done());
    let ww_chunk = pipeline.get_result();
    writeVec(result_chunk2, ww_chunk);
  
    // Assemble full WW vector
    Vector#(512, BF16) ww_part01 = append(readVec(result_chunk0), readVec(result_chunk1));
    Vector#(768, BF16) ww_final = append(ww_part01, ww_chunk);
    tsc_ww <= ww_final;
    tsc_ww_computed <= True;
    tsc_state <= TSC_FeedMSE;  // Signal TSC to start MSE
  
    $display("[Cycle %0d] SIMD: WW All chunks complete. WW ready", cycle_count);
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
        tsc_kk <= sa2_final_output;
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
        current_sa_operation <= SA_Operation_R;
        $display("[Cycle %0d] COP: V SA complete. Starting SA for R", cycle_count);
      end

      SA_Operation_R: begin
        sa_result_r <= sa2_final_output;
        current_sa_operation <= SA_Operation_Done;
        state <= Done;
        $display("[Cycle %0d] COP: R SA complete. ALL OPERATIONS DONE", cycle_count);
      end

      default: begin
        $display("[Cycle %0d] ERROR: Unexpected SA operation state", cycle_count);
      end
    endcase
  endrule


  // ========== TSC RULES
  rule tsc_load_data (tsc_state == TSC_LoadData && !tsc_data_loaded);
    bram_pp.put(False, 0, ?);
    bram_time_first.put(False, 0, ?);
    tsc_load_addr <= 1;
    tsc_state <= TSC_WaitDataLoad;
    $display("[Cycle %0d] TSC: Loading pp and time_first from BRAM");
  endrule

  rule tsc_wait_data_load (tsc_state == TSC_WaitDataLoad && tsc_load_addr < 768);
    let idx = tsc_load_addr - 1;

    Vector#(768, BF16) temp_pp = tsc_pp;
    Vector#(768, BF16) temp_tf = tsc_time_first;
    temp_pp[idx] = toBF16(bram_pp.read());
    temp_tf[idx] = toBF16(bram_time_first.read());
    tsc_pp <= temp_pp;
    tsc_time_first <= temp_tf;

    if (tsc_load_addr < 768) begin
      bram_pp.put(False, tsc_load_addr, ?);
      bram_time_first.put(False, tsc_load_addr, ?);
    end
    
    tsc_load_addr <= tsc_load_addr + 1;
  endrule

  rule tsc_data_load_done (tsc_state == TSC_WaitDataLoad && tsc_load_addr == 768);
    Vector#(768, BF16) temp_pp = tsc_pp;
    Vector#(768, BF16) temp_tf = tsc_time_first;
    temp_pp[767] = toBF16(bram_pp.read());
    temp_tf[767] = toBF16(bram_time_first.read());
    tsc_pp <= temp_pp;
    tsc_time_first <= temp_tf;

    tsc_data_loaded <= True;
    tsc_state <= TSC_ComputeWW;
    state <= ProcessWW0;
    base_addr <= 0;
    $display("[Cycle %0d] TSC: Data loaded. Starting WW computation", cycle_count);
  endrule

  rule tsc_start_mse (tsc_state == TSC_FeedMSE && !tsc_mse_started);
    mse.start(False);  // Don't need p output
    tsc_mse_started <= True;
    tsc_mse_chunk_fed <= 0;
    $display("[Cycle %0d] TSC: Starting MSE processing", cycle_count);
  endrule

  rule tsc_feed_mse (tsc_state == TSC_FeedMSE && tsc_mse_started && mse.input_ready() && tsc_mse_chunk_fed < 24);
    Bit#(10) start_idx = zeroExtend(tsc_mse_chunk_fed) << 5; // *32
    Vector#(32, BF16) pp_chunk = newVector();
    Vector#(32, BF16) ww_chunk = newVector();

    for (Integer i = 0; i < 32; i = i + 1) begin
      pp_chunk[i] = tsc_pp[start_idx + fromInteger(i)];
      ww_chunk[i] = tsc_ww[start_idx + fromInteger(i)];
    end
    mse.feed_input(pp_chunk, ww_chunk);
    tsc_mse_chunk_fed <= tsc_mse_chunk_fed + 1;
    if (tsc_mse_chunk_fed == 23) begin
      tsc_state <= TSC_WaitMSEDone;
      $display("[Cycle %0d] TSC-MSE: All 24 input chunks fed", cycle_count);
    end
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

endmodule
endpackage
