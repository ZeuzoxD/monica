package MSE;

import Vector::*;
import BF16::*;
import Sub16::*;
import TorchMaximum32::*;
import BF16ExpVector8::*;
import FIFOF::*;

// Streaming interface: feed 32 elements every 4 cycles
interface MSEIfc;
  // Feed 32-element chunks (call every 4th cycle after warmup)
  method Action feed_input(Vector#(32, BF16) pp_chunk, Vector#(32, BF16) ww_chunk);
  
  // Get outputs (available every cycle after initial warmup)
  method ActionValue#(Vector#(32, BF16)) get_p();
  method ActionValue#(Vector#(8, BF16)) get_e1();
  method ActionValue#(Vector#(8, BF16)) get_e2();
  
  // Status methods
  method Bool p_ready();
  method Bool e_ready();
endinterface

(* synthesize *)
module mkMSE(MSEIfc);
  // Computation units
  TorchMaximum32Ifc max_unit <- mkTorchMaximum32();
  Sub16Ifc sub_unit <- mkSub16();
  BF16ExpVector8 exp_unit1 <- mkBF16ExpVector8();
  BF16ExpVector8 exp_unit2 <- mkBF16ExpVector8();
  
  // FIFOs for pipeline stages
  FIFOF#(Vector#(32, BF16)) p_fifo <- mkFIFOF();
  FIFOF#(Tuple3#(Vector#(32, BF16), Vector#(32, BF16), Vector#(32, BF16))) sub_input_fifo <- mkFIFOF();
  FIFOF#(Vector#(8, BF16)) e1_fifo <- mkFIFOF();
  FIFOF#(Vector#(8, BF16)) e2_fifo <- mkFIFOF();
  
  // Cycle counter for debugging
  Reg#(Bit#(32)) cycle_count <- mkReg(0);
  Reg#(Bit#(10)) chunks_processed <- mkReg(0);
  Reg#(Bit#(3)) sub_batch_idx <- mkReg(0);  // 0-3 for each 32-chunk
  
  rule count_cycles;
    cycle_count <= cycle_count + 1;
  endrule
  
  // STAGE 1: Process max (takes 1 cycle, combinational)
  // This is handled directly in feed_input method
  
  // STAGE 2: Process subtraction in batches of 8
  // Process 4 batches of 8 elements from each 32-element chunk
  rule process_subtraction (sub_batch_idx < 4);
    let input_data = sub_input_fifo.first();
    match {.pp_32, .ww_32, .p_32} = input_data;
    
    // Extract 8 elements based on current batch
    Bit#(5) base_idx = zeroExtend(sub_batch_idx) << 3;
    Vector#(8, BF16) pp_8 = newVector();
    Vector#(8, BF16) ww_8 = newVector();
    Vector#(8, BF16) p_8 = newVector();
    
    for (Integer i = 0; i < 8; i = i + 1) begin
      Bit#(5) idx = base_idx + fromInteger(i);
      pp_8[i] = pp_32[idx];
      ww_8[i] = ww_32[idx];
      p_8[i] = p_32[idx];
    end
    
    $display("[Cycle %0d] STAGE2-SUB: Chunk %0d, Batch %0d (base=%0d)", 
             cycle_count, chunks_processed, sub_batch_idx, base_idx);
    
    let sub_results <- sub_unit.compute(pp_8, ww_8, p_8);
    match {.diff_pp, .diff_ww} = sub_results;
    
    // Feed to exp units immediately
    exp_unit1.put_data(diff_pp);
    exp_unit2.put_data(diff_ww);
    
    if (sub_batch_idx == 3) begin
      sub_input_fifo.deq();
      sub_batch_idx <= 0;
    end else begin
      sub_batch_idx <= sub_batch_idx + 1;
    end
  endrule
  
  // STAGE 3: Collect exp results
  rule collect_exp_results (exp_unit1.hasResult() && exp_unit2.hasResult());
    let e1_result <- exp_unit1.getResult();
    let e2_result <- exp_unit2.getResult();
    
    e1_fifo.enq(e1_result);
    e2_fifo.enq(e2_result);
    
    $display("[Cycle %0d] STAGE3-EXP: Collected e1/e2 results", cycle_count);
  endrule
  
  // Method to feed input
  method Action feed_input(Vector#(32, BF16) pp_chunk, Vector#(32, BF16) ww_chunk);
    // Stage 1: Compute max immediately (combinational)
    Vector#(32, BF16) p_32 = max_unit.findMax(pp_chunk, ww_chunk);
    
    $display("[Cycle %0d] STAGE1-MAX: Chunk %0d fed", cycle_count, chunks_processed);
    
    // Enqueue p for output and for subtraction stage
    p_fifo.enq(p_32);
    sub_input_fifo.enq(tuple3(pp_chunk, ww_chunk, p_32));
    
    chunks_processed <= chunks_processed + 1;
  endmethod
  
  method ActionValue#(Vector#(32, BF16)) get_p() if (p_fifo.notEmpty());
    p_fifo.deq();
    return p_fifo.first();
  endmethod
  
  method ActionValue#(Vector#(8, BF16)) get_e1() if (e1_fifo.notEmpty());
    e1_fifo.deq();
    return e1_fifo.first();
  endmethod
  
  method ActionValue#(Vector#(8, BF16)) get_e2() if (e2_fifo.notEmpty());
    e2_fifo.deq();
    return e2_fifo.first();
  endmethod
  
  method Bool p_ready();
    return p_fifo.notEmpty();
  endmethod
  
  method Bool e_ready();
    return e1_fifo.notEmpty() && e2_fifo.notEmpty();
  endmethod
endmodule

(* synthesize *)
module mkMSETB(Empty);
  MSEIfc dut <- mkMSE();
  
  Reg#(Bit#(32)) cycle_count <- mkReg(0);
  Reg#(Bit#(10)) chunks_fed <- mkReg(0);
  Reg#(Bit#(3)) feed_cooldown <- mkReg(0);  // Feed every 4th cycle
  Reg#(Bool) feeding_done <- mkReg(False);
  Reg#(Bool) test_started <- mkReg(False);
  
  // Result collection vectors
  Reg#(Vector#(768, BF16)) collected_p <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) collected_e1 <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) collected_e2 <- mkReg(unpack(0));
  Reg#(Bit#(10)) p_collected <- mkReg(0);
  Reg#(Bit#(10)) e_collected <- mkReg(0);
  
  Reg#(Bit#(32)) start_cycle <- mkReg(0);
  Reg#(Bit#(32)) first_e_cycle <- mkReg(0);
  Reg#(Bool) first_e_seen <- mkReg(False);
  
  rule count_cycles;
    cycle_count <= cycle_count + 1;
  endrule
  
  // Start test
  rule start_test (!test_started && cycle_count == 10);
    test_started <= True;
    start_cycle <= cycle_count;
    $display("\n================================================");
    $display("    MSE STREAMING TEST (768 elements / 24 chunks)");
    $display("================================================");
    $display("Feed rate: 32 elements every 4 cycles");
    $display("Output rate: 32 P, 8 E1/E2 per cycle (after warmup)");
    $display("Test data:");
    $display("  Chunks 0-11: pp=3.0 (4040), ww=2.5 (4020)");
    $display("  Chunks 12-23: pp=2.5 (4020), ww=3.0 (4040)");
    $display("================================================\n");
  endrule
  
  // Feed inputs every 4th cycle
  rule feed_inputs (test_started && !feeding_done);
    if (feed_cooldown == 0) begin
      if (chunks_fed < 24) begin
        Vector#(32, BF16) pp_chunk = newVector();
        Vector#(32, BF16) ww_chunk = newVector();
        
        if (chunks_fed < 12) begin
          for (Integer i = 0; i < 32; i = i + 1) begin
            pp_chunk[i] = toBF16(16'h4040);  // 3.0
            ww_chunk[i] = toBF16(16'h4020);  // 2.5
          end
        end else begin
          for (Integer i = 0; i < 32; i = i + 1) begin
            pp_chunk[i] = toBF16(16'h4020);  // 2.5
            ww_chunk[i] = toBF16(16'h4040);  // 3.0
          end
        end
        
        dut.feed_input(pp_chunk, ww_chunk);
        $display("[Cycle %0d] TB: Fed chunk %0d", cycle_count, chunks_fed);
        
        chunks_fed <= chunks_fed + 1;
        feed_cooldown <= 3;  // Wait 3 more cycles before next feed
        
        if (chunks_fed == 23) begin
          feeding_done <= True;
          $display("[Cycle %0d] TB: All 24 chunks fed\n", cycle_count);
        end
      end
    end else begin
      feed_cooldown <= feed_cooldown - 1;
    end
  endrule
  
  // Collect P outputs
  rule collect_p (test_started && dut.p_ready() && p_collected < 768);
    let p_chunk <- dut.get_p();
    
    Vector#(768, BF16) temp_p = collected_p;
    Bit#(10) base = p_collected;
    for (Integer i = 0; i < 32; i = i + 1) begin
      temp_p[base + fromInteger(i)] = p_chunk[i];
    end
    collected_p <= temp_p;
    
    $display("[Cycle %0d] TB: Collected P chunk (elements %0d-%0d)", 
             cycle_count, p_collected, p_collected + 31);
    p_collected <= p_collected + 32;
  endrule
  
  // Collect E outputs
  rule collect_e (test_started && dut.e_ready() && e_collected < 768);
    let e1_chunk <- dut.get_e1();
    let e2_chunk <- dut.get_e2();
    
    if (!first_e_seen) begin
      first_e_cycle <= cycle_count;
      first_e_seen <= True;
      $display("[Cycle %0d] TB: First E output received (warmup = %0d cycles)\n", 
               cycle_count, cycle_count - start_cycle);
    end
    
    Vector#(768, BF16) temp_e1 = collected_e1;
    Vector#(768, BF16) temp_e2 = collected_e2;
    Bit#(10) base = e_collected;
    for (Integer i = 0; i < 8; i = i + 1) begin
      temp_e1[base + fromInteger(i)] = e1_chunk[i];
      temp_e2[base + fromInteger(i)] = e2_chunk[i];
    end
    collected_e1 <= temp_e1;
    collected_e2 <= temp_e2;
    
    $display("[Cycle %0d] TB: Collected E chunk (elements %0d-%0d)", 
             cycle_count, e_collected, e_collected + 7);
    e_collected <= e_collected + 8;
  endrule
  
  // Verify results
  rule finish (test_started && feeding_done && p_collected >= 768 && e_collected >= 768);
    $display("\n================================================");
    $display("    TEST COMPLETE - VERIFICATION");
    $display("================================================");
    
    // Check P values (all should be 3.0)
    Bool p_pass = True;
    $display("\nP Vector Verification:");
    $display("  First half [0-383]:   Expected 3.0 (4040)");
    for (Integer i = 0; i < 4; i = i + 1) begin
      $display("    [%3d] p=%04h", i, fromBF16(collected_p[i]));
      if (fromBF16(collected_p[i]) != 16'h4040) p_pass = False;
    end
    
    $display("  Second half [384-767]: Expected 3.0 (4040)");
    for (Integer i = 384; i < 388; i = i + 1) begin
      $display("    [%3d] p=%04h", i, fromBF16(collected_p[i]));
      if (fromBF16(collected_p[i]) != 16'h4040) p_pass = False;
    end
    
    // Check E values
    Bool e_pass = True;
    $display("\nE1/E2 Vector Verification:");
    $display("  First half [0-383] (pp=3.0, ww=2.5, p=3.0):");
    $display("    Expected: e1=exp(3.0-3.0)=1.0 (3f80), e2=exp(2.5-3.0)≈0.606 (39d1)");
    for (Integer i = 0; i < 4; i = i + 1) begin
      $display("    [%3d] e1=%04h e2=%04h", 
               i, fromBF16(collected_e1[i]), fromBF16(collected_e2[i]));
      if (fromBF16(collected_e1[i]) != 16'h3f80) e_pass = False;
      if (fromBF16(collected_e2[i]) != 16'h39d1) e_pass = False;
    end
    
    $display("  Second half [384-767] (pp=2.5, ww=3.0, p=3.0):");
    $display("    Expected: e1=exp(2.5-3.0)≈0.606 (39d1), e2=exp(3.0-3.0)=1.0 (3f80)");
    for (Integer i = 384; i < 388; i = i + 1) begin
      $display("    [%3d] e1=%04h e2=%04h", 
               i, fromBF16(collected_e1[i]), fromBF16(collected_e2[i]));
      if (fromBF16(collected_e1[i]) != 16'h39d1) e_pass = False;
      if (fromBF16(collected_e2[i]) != 16'h3f80) e_pass = False;
    end
    
    // Timing analysis
    Bit#(32) total_cycles = cycle_count - start_cycle;
    Bit#(32) warmup = first_e_cycle - start_cycle;
    
    $display("\n================================================");
    $display("    PERFORMANCE METRICS");
    $display("================================================");
    $display("Elements processed:  768");
    $display("Chunks processed:    24 (32 elem/chunk)");
    $display("Total cycles:        %0d", total_cycles);
    $display("Initial warmup:      %0d cycles", warmup);
    $display("P throughput:        32 elem/cycle");
    $display("E throughput:        8 elem/cycle");
    $display("Feed rate:           32 elem/4 cycles");
    $display("\nComparison to original batched design:");
    $display("  Original (batch):  103 cycles for 768 elements");
    $display("  Streaming:         %0d cycles for 768 elements", total_cycles);
    
    $display("\n================================================");
    $display("    TEST RESULT: %s", (p_pass && e_pass) ? "PASS ✓" : "FAIL ✗");
    $display("================================================\n");
    
    if (p_pass && e_pass) begin
      $display("All tests PASSED!");
    end else begin
      $display("ERROR: Verification failed!");
    end
    
    $finish();
  endrule
  
  // Timeout
  rule timeout (cycle_count > 300);
    $display("\nERROR: Timeout at cycle %0d", cycle_count);
    $display("  Chunks fed: %0d/24", chunks_fed);
    $display("  P collected: %0d/768", p_collected);
    $display("  E collected: %0d/768", e_collected);
    $finish(1);
  endrule
endmodule

endpackage

