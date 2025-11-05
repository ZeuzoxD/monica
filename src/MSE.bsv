package MSE;

import Vector::*;
import BF16::*;
import Sub16::*;
import TorchMaximum32::*;
import BF16ExpVector8::*;

// Streaming interface
interface MSEIfc;
  method Action start(Bool store_p_vec);
  method Action feed_input(Vector#(32, BF16) pp_chunk, Vector#(32, BF16) ww_chunk);
  method ActionValue#(Vector#(8, BF16)) get_e1();
  method ActionValue#(Vector#(8, BF16)) get_e2();
  method ActionValue#(Vector#(32, BF16)) get_p();
  method Bool e1_ready();
  method Bool e2_ready();
  method Bool p_ready();
  method Bool input_ready();
endinterface

typedef enum {
  Idle,
  Processing
} State deriving (Bits, Eq);

(* synthesize *)
module mkMSE(MSEIfc);
  TorchMaximum32Ifc max_unit <- mkTorchMaximum32();
  Sub16Ifc sub_unit <- mkSub16();
  BF16ExpVector8 exp_unit1 <- mkBF16ExpVector8();
  BF16ExpVector8 exp_unit2 <- mkBF16ExpVector8();

  // Double buffer for better overlap
  Reg#(Vector#(32, BF16)) pp_buf0 <- mkReg(unpack(0));
  Reg#(Vector#(32, BF16)) ww_buf0 <- mkReg(unpack(0));
  Reg#(Vector#(32, BF16)) p_buf0 <- mkReg(unpack(0));
  Reg#(Bool) buf0_valid <- mkReg(False);
  Reg#(Bit#(3)) buf0_groups <- mkReg(0);
  
  Reg#(Vector#(32, BF16)) pp_buf1 <- mkReg(unpack(0));
  Reg#(Vector#(32, BF16)) ww_buf1 <- mkReg(unpack(0));
  Reg#(Vector#(32, BF16)) p_buf1 <- mkReg(unpack(0));
  Reg#(Bool) buf1_valid <- mkReg(False);
  Reg#(Bit#(3)) buf1_groups <- mkReg(0);
  
  Reg#(Bool) using_buf0 <- mkReg(True);
  
  Reg#(Bool) store_p_flag <- mkReg(False);
  Reg#(Maybe#(Vector#(32, BF16))) p_output <- mkReg(tagged Invalid);

  Reg#(State) state <- mkReg(Idle);
  Reg#(Bit#(6)) chunks_fed <- mkReg(0);
  Reg#(Bit#(7)) sub_idx <- mkReg(0);
  Reg#(Bit#(32)) cycle_count <- mkReg(0);

  rule count_cycles;
    cycle_count <= cycle_count + 1;
  endrule

  // Process from active buffer
  rule process_subtraction (state == Processing && 
                           ((using_buf0 && buf0_valid && buf0_groups > 0) ||
                            (!using_buf0 && buf1_valid && buf1_groups > 0)));
    
    Vector#(32, BF16) pp_act = using_buf0 ? pp_buf0 : pp_buf1;
    Vector#(32, BF16) ww_act = using_buf0 ? ww_buf0 : ww_buf1;
    Vector#(32, BF16) p_act = using_buf0 ? p_buf0 : p_buf1;
    Bit#(3) grps = using_buf0 ? buf0_groups : buf1_groups;
    
    Bit#(5) offset = zeroExtend(4 - grps) << 3;
    
    Vector#(8, BF16) pp_8 = newVector();
    Vector#(8, BF16) ww_8 = newVector();
    Vector#(8, BF16) p_8 = newVector();
    
    for (Integer i = 0; i < 8; i = i + 1) begin
      Bit#(5) idx = offset + fromInteger(i);
      pp_8[i] = pp_act[idx];
      ww_8[i] = ww_act[idx];
      p_8[i] = p_act[idx];
    end

    let sub_results <- sub_unit.compute(pp_8, ww_8, p_8);
    match {.diff_pp, .diff_ww} = sub_results;

    exp_unit1.put_data(diff_pp);  // e1 = exp(pp - p)
    exp_unit2.put_data(diff_ww);  // e2 = exp(ww - p)
    
    if (using_buf0) begin
      if (buf0_groups == 1) begin
        buf0_valid <= False;
        using_buf0 <= False;
      end
      buf0_groups <= buf0_groups - 1;
    end else begin
      if (buf1_groups == 1) begin
        buf1_valid <= False;
        using_buf0 <= True;
      end
      buf1_groups <= buf1_groups - 1;
    end
    
    sub_idx <= sub_idx + 1;
  endrule

  method Action start(Bool store_p_vec) if (state == Idle);
    state <= Processing;
    chunks_fed <= 0;
    sub_idx <= 0;
    buf0_valid <= False;
    buf1_valid <= False;
    buf0_groups <= 0;
    buf1_groups <= 0;
    using_buf0 <= True;
    store_p_flag <= store_p_vec;
    p_output <= tagged Invalid;
  endmethod

  method Action feed_input(Vector#(32, BF16) pp_chunk_in, Vector#(32, BF16) ww_chunk_in) 
    if (state == Processing && ((!buf0_valid) || (!buf1_valid)));
    Vector#(32, BF16) p_32 = max_unit.findMax(pp_chunk_in, ww_chunk_in);
    
    // Store to available buffer
    if (!buf0_valid) begin
      pp_buf0 <= pp_chunk_in;
      ww_buf0 <= ww_chunk_in;
      p_buf0 <= p_32;
      buf0_groups <= 4;
      buf0_valid <= True;
    end else begin
      pp_buf1 <= pp_chunk_in;
      ww_buf1 <= ww_chunk_in;
      p_buf1 <= p_32;
      buf1_groups <= 4;
      buf1_valid <= True;
    end
    
    if (store_p_flag && chunks_fed == 0) begin
      p_output <= tagged Valid p_32;
    end

    chunks_fed <= chunks_fed + 1;
  endmethod

  method ActionValue#(Vector#(8, BF16)) get_e1() if (exp_unit1.hasResult());
    let result <- exp_unit1.getResult();
    return result;
  endmethod

  method ActionValue#(Vector#(8, BF16)) get_e2() if (exp_unit2.hasResult());
    let result <- exp_unit2.getResult();
    return result;
  endmethod

  method ActionValue#(Vector#(32, BF16)) get_p() if (isValid(p_output));
    let result = fromMaybe(?, p_output);
    p_output <= tagged Invalid;
    return result;
  endmethod

  method Bool e1_ready();
    return exp_unit1.hasResult();
  endmethod

  method Bool e2_ready();
    return exp_unit2.hasResult();
  endmethod

  method Bool p_ready();
    return isValid(p_output);
  endmethod

  method Bool input_ready();
    return (state == Processing && ((!buf0_valid) || (!buf1_valid)));
  endmethod

endmodule

// Testbench with random inputs
(* synthesize *)
module mkMSETB(Empty);
  MSEIfc dut <- mkMSE();
  
  Reg#(Bool) test_started <- mkReg(False);
  Reg#(Bit#(32)) cycle_count <- mkReg(0);
  Reg#(Bit#(6)) input_chunk <- mkReg(0);
  Reg#(Bool) input_done <- mkReg(False);
  
  Reg#(Bit#(7)) e1_collected <- mkReg(0);
  Reg#(Bit#(7)) e2_collected <- mkReg(0);
  Reg#(Vector#(768, BF16)) e1_results <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) e2_results <- mkReg(unpack(0));
  Reg#(Maybe#(Vector#(32, BF16))) p_result <- mkReg(tagged Invalid);
  
  // Store input for verification
  Reg#(Vector#(768, BF16)) input_pp <- mkReg(unpack(0));
  Reg#(Vector#(768, BF16)) input_ww <- mkReg(unpack(0));
  
  rule count_cycles;
    cycle_count <= cycle_count + 1;
  endrule
  
  rule start_test (!test_started && cycle_count == 10);
    dut.start(True);  // Store p vector
    test_started <= True;
    
    $display("\n================================================");
    $display("    MSE STREAMING TEST - RANDOM INPUTS");
    $display("================================================");
    $display("Will generate pseudo-random BF16 values");
    $display("Store P vector: YES");
    $display("================================================\n");
  endrule
  
  rule feed_input (test_started && !input_done && dut.input_ready());
    Vector#(32, BF16) pp_32 = newVector();
    Vector#(32, BF16) ww_32 = newVector();
    
    // Generate pseudo-random values using chunk index
    Bit#(16) base_pp = 16'h3f00 + (zeroExtend(input_chunk) << 4);  // ~0.5 to ~1.5
    Bit#(16) base_ww = 16'h3e80 + (zeroExtend(input_chunk) << 3);  // ~0.25 to ~1.25
    
    for (Integer i = 0; i < 32; i = i + 1) begin
      pp_32[i] = toBF16(base_pp + fromInteger(i));
      ww_32[i] = toBF16(base_ww + fromInteger(i*2));
    end
    
    // Store for later verification
    Vector#(768, BF16) temp_pp = input_pp;
    Vector#(768, BF16) temp_ww = input_ww;
    Bit#(10) base_idx = zeroExtend(input_chunk) << 5;
    for (Integer i = 0; i < 32; i = i + 1) begin
      temp_pp[base_idx + fromInteger(i)] = pp_32[i];
      temp_ww[base_idx + fromInteger(i)] = ww_32[i];
    end
    input_pp <= temp_pp;
    input_ww <= temp_ww;
    
    dut.feed_input(pp_32, ww_32);
    
    if (input_chunk == 23) begin
      input_done <= True;
      $display("[Cycle %0d] All 24 input chunks fed", cycle_count);
    end else begin
      input_chunk <= input_chunk + 1;
    end
  endrule
  
  rule collect_p (test_started && dut.p_ready() && !isValid(p_result));
    let p <- dut.get_p();
    p_result <= tagged Valid p;
  endrule
  
  rule collect_e1 (test_started && dut.e1_ready());
    let e1_8 <- dut.get_e1();
    
    Vector#(768, BF16) temp = e1_results;
    Bit#(10) base = zeroExtend(e1_collected) << 3;
    
    for (Integer i = 0; i < 8; i = i + 1) begin
      temp[base + fromInteger(i)] = e1_8[i];
    end
    
    e1_results <= temp;
    e1_collected <= e1_collected + 1;
  endrule
  
  rule collect_e2 (test_started && dut.e2_ready());
    let e2_8 <- dut.get_e2();
    
    Vector#(768, BF16) temp = e2_results;
    Bit#(10) base = zeroExtend(e2_collected) << 3;
    
    for (Integer i = 0; i < 8; i = i + 1) begin
      temp[base + fromInteger(i)] = e2_8[i];
    end
    
    e2_results <= temp;
    e2_collected <= e2_collected + 1;
  endrule
  
  rule check_result (test_started && input_done && e1_collected == 96 && e2_collected == 96);
    $display("\n================================================");
    $display("    MSE TEST COMPLETE - VERIFICATION");
    $display("================================================");
    
    Vector#(768, BF16) pp = input_pp;
    Vector#(768, BF16) ww = input_ww;
    Vector#(768, BF16) e1 = e1_results;
    Vector#(768, BF16) e2 = e2_results;
    
    // Verify first few elements
    $display("\nFirst 4 elements:");
    for (Integer i = 0; i < 4; i = i + 1) begin
      Bit#(16) pp_val = fromBF16(pp[i]);
      Bit#(16) ww_val = fromBF16(ww[i]);
      Bit#(16) e1_val = fromBF16(e1[i]);
      Bit#(16) e2_val = fromBF16(e2[i]);
      $display("  [%0d] pp=%04h ww=%04h -> e1=%04h e2=%04h", i, pp_val, ww_val, e1_val, e2_val);
    end
    
    $display("\nMiddle 4 elements (384-387):");
    for (Integer i = 384; i < 388; i = i + 1) begin
      Bit#(16) pp_val = fromBF16(pp[i]);
      Bit#(16) ww_val = fromBF16(ww[i]);
      Bit#(16) e1_val = fromBF16(e1[i]);
      Bit#(16) e2_val = fromBF16(e2[i]);
      $display("  [%0d] pp=%04h ww=%04h -> e1=%04h e2=%04h", i, pp_val, ww_val, e1_val, e2_val);
    end
    
    if (isValid(p_result)) begin
      $display("\nP vector (first 32 elements captured):");
      Vector#(32, BF16) p = fromMaybe(?, p_result);
      $display("  p[0..3]: %04h %04h %04h %04h", 
               fromBF16(p[0]), fromBF16(p[1]), fromBF16(p[2]), fromBF16(p[3]));
    end
    
    $display("\nTotal cycles: %0d", cycle_count - 10);
    $display("Status: COMPLETE\n");
    $finish;
  endrule
  
  rule timeout (cycle_count > 500);
    $display("ERROR: Timeout at cycle %0d", cycle_count);
    $finish(1);
  endrule

endmodule

endpackage 
