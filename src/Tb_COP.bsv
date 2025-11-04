package Tb_COP;

import COP::*;
import BF16::*;
import Vector::*;

(* synthesize *)
module mkTb_COP(Empty);
  COP_Ifc cop <- mkCOP();

  Reg#(Bit#(32)) cycle <- mkReg(0);
  Reg#(Bool) started <- mkReg(False);
  Reg#(Bool) printed <- mkReg(False);

  Vector#(768, BF16) x = newVector();
  Vector#(768, BF16) test_d = newVector();

  // Operation tracking (0=K, 1=V, 2=R)
  Reg#(Bit#(2)) current_operation <- mkReg(0);

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


  for (Integer i = 0; i < 768; i = i + 1) begin
    x[i] = toBF16(16'h4000);      // 2.0
    test_d[i] = toBF16(16'h3f80); // 1.0
  end
   
  Bit#(32) test_i = 32'd42;

  // Weight matrices for FIRST MM: 192x768
  function Vector#(16, Vector#(16, BF16)) make_sa1_weight_matrix(Bit#(4) row_group, Bit#(6) input_chunk);
    Vector#(16, Vector#(16, BF16)) w = newVector();
    for (Integer row = 0; row < 16; row = row + 1) begin
      w[row] = newVector();
      for (Integer col = 0; col < 16; col = col + 1) begin
        if (input_chunk == 0 && row == col) begin
          w[row][col] = toBF16(16'h3f80); // 1.0 on diagonal for first chunk
        end else begin
          w[row][col] = toBF16(16'h3c00); // 0.015625 (1/64) for others
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
          w[row][col] = toBF16(16'h3f80); // 1.0 on diagonal for first chunk
        end else begin
          w[row][col] = toBF16(16'h3d00); // 0.03125 (1/32) for others
        end
      end
    end

    return w;
  endfunction


  rule count_cycles;
    cycle <= cycle + 1;
  endrule
  
  rule start_cop (!started && cycle == 5);
    cop.start_computation();
    started <= True;
    $display("[Cycle %0d] Testbench: Started COP computation", cycle);
    $display("[Cycle %0d] TB: ===== STARTING OPERATION 0 (K) =====", cycle);
  endrule 

  rule load_sa1_weights (!cop.computation_done() && !sa1_complete && sa1_weights_loaded < 576);
    Vector#(16, Vector#(16, BF16)) weight_matrix = make_sa1_weight_matrix(sa1_current_row_group, sa1_current_input_chunk);
    cop.load_sa1_weights(weight_matrix);
    sa1_weights_loaded <= sa1_weights_loaded + 1;

    // Display every 48th weight load (completion of each row group)
    if ((sa1_weights_loaded + 1) % 48 == 0) begin
      $display("[Cycle %0d] TB: *** SA1 [Op %0d] Row group %0d COMPLETE *** (loaded %0d/576 weight matrices)", 
                cycle, current_operation, sa1_current_row_group, sa1_weights_loaded + 1);
    end else if (sa1_weights_loaded % 48 == 0) begin
      $display("[Cycle %0d] TB: SA1 [Op %0d] Starting row_group=%0d (weights %0d-%0d)", 
                cycle, current_operation, sa1_current_row_group, sa1_weights_loaded, sa1_weights_loaded + 47);
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
      $display("[Cycle %0d] TB: SA1 [Op %0d] COMPLETE - All 576 weight matrices loaded", cycle, current_operation);
      $display("[Cycle %0d] TB: Now waiting for SA2 [Op %0d] to start...", cycle, current_operation);
    end
  endrule

  rule load_sa2_weights (!cop.computation_done() && sa1_complete && !sa2_complete && sa2_weights_loaded < 576);
    Vector#(16, Vector#(16, BF16)) weight_matrix = make_sa2_weight_matrix(sa2_current_row_group, sa2_current_input_chunk);
    cop.load_sa2_weights(weight_matrix);
    sa2_weights_loaded <= sa2_weights_loaded + 1;

    // Display every 12th weight load (completion of each row group)
    if ((sa2_weights_loaded + 1) % 12 == 0) begin
      $display("[Cycle %0d] TB: *** SA2 [Op %0d] Row group %0d COMPLETE *** (loaded %0d/576 weight matrices)", 
                cycle, current_operation, sa2_current_row_group, sa2_weights_loaded + 1);
    end else if (sa2_weights_loaded % 12 == 0) begin
      $display("[Cycle %0d] TB: SA2 [Op %0d] Starting row_group=%0d (weights %0d-%0d)", 
                cycle, current_operation, sa2_current_row_group, sa2_weights_loaded, sa2_weights_loaded + 11);
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
      $display("[Cycle %0d] TB: SA2 [Op %0d] COMPLETE - All 576 weight matrices loaded", cycle, current_operation);
      
      // Check if we need to move to next operation
      if (current_operation < 2) begin
        $display("[Cycle %0d] TB: Moving to operation %0d (preparing for next SA cycle)", cycle, current_operation + 1);
      end else begin
        $display("[Cycle %0d] TB: ALL OPERATIONS (K, V, R) COMPLETE!", cycle);
      end
    end
  endrule

  rule prepare_next_operation (sa2_complete && current_operation < 2 && !cop.computation_done());
    // Reset counters for next operation
    sa1_weights_loaded <= 0;
    sa1_current_row_group <= 0;
    sa1_current_input_chunk <= 0;
    sa1_complete <= False;
    
    sa2_weights_loaded <= 0;
    sa2_current_row_group <= 0;
    sa2_current_input_chunk <= 0;
    sa2_complete <= False;
    
    current_operation <= current_operation + 1;
    
    if (current_operation == 0) begin
      $display("[Cycle %0d] TB: ===== STARTING OPERATION 1 (V) =====", cycle);
    end else if (current_operation == 1) begin
      $display("[Cycle %0d] TB: ===== STARTING OPERATION 2 (R) =====", cycle);
    end
    $display("[Cycle %0d] TB: Counters reset, ready to load weights for next operation", cycle);
  endrule

  rule check_done (started && cop.computation_done() && !printed);
    $display("\n[Cycle %0d] ========== ALL OPERATIONS COMPLETE ==========", cycle);
    $display("[Cycle %0d] Completed K, V, and R operations through SA1 + SA2", cycle);
      
    let result_k = cop.get_result_k();
      
    $display("\n=== K Results (First 10) ===");
    $display("result_k[0] = 0x%04h", fromBF16(result_k[0]));
    $display("result_k[1] = 0x%04h", fromBF16(result_k[1]));
    $display("result_k[2] = 0x%04h", fromBF16(result_k[2]));
    $display("result_k[3] = 0x%04h", fromBF16(result_k[3]));
    $display("result_k[4] = 0x%04h", fromBF16(result_k[4]));
    $display("result_k[5] = 0x%04h", fromBF16(result_k[5]));
    $display("result_k[6] = 0x%04h", fromBF16(result_k[6]));
    $display("result_k[7] = 0x%04h", fromBF16(result_k[7]));
    $display("result_k[8] = 0x%04h", fromBF16(result_k[8]));
    $display("result_k[9] = 0x%04h", fromBF16(result_k[9]));
      
    $display("\n=== K Results (Last 10) ===");
    $display("result_k[758] = 0x%04h", fromBF16(result_k[758]));
    $display("result_k[759] = 0x%04h", fromBF16(result_k[759]));
    $display("result_k[760] = 0x%04h", fromBF16(result_k[760]));
    $display("result_k[761] = 0x%04h", fromBF16(result_k[761]));
    $display("result_k[762] = 0x%04h", fromBF16(result_k[762]));
    $display("result_k[763] = 0x%04h", fromBF16(result_k[763]));
    $display("result_k[764] = 0x%04h", fromBF16(result_k[764]));
    $display("result_k[765] = 0x%04h", fromBF16(result_k[765]));
    $display("result_k[766] = 0x%04h", fromBF16(result_k[766]));
    $display("result_k[767] = 0x%04h", fromBF16(result_k[767]));
      
    printed <= True;
    $display("\n[Cycle %0d] Testbench: Finishing simulation", cycle);
    $finish(0);
  endrule
   
  rule timeout (cycle > 130000);
    $display("[Cycle %0d] ERROR: Timeout! Computation didn't complete.", cycle);
    $display("[Cycle %0d] Current operation: %0d, SA1 complete: %0d, SA2 complete: %0d", 
              cycle, current_operation, sa1_complete, sa2_complete);
    $finish(1);
  endrule
   
endmodule

endpackage
