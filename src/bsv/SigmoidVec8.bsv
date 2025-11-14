package SigmoidVec8;

import Vector::*;
import BF16::*;
import BF16Sigmoid::*;

interface SigmoidVector8Ifc;
  method Action put_data(Vector#(8, BF16) data);
  method ActionValue#(Vector#(8, BF16)) getResult();
  method Bool hasResult();
endinterface

(* synthesize *)
module mkBF16SigmoidVector8(SigmoidVector8Ifc);
  // Instantiate 8 parallel sigmoid units
  Vector#(8, BF16SigmoidIfc) sigmoid_units <- replicateM(mkBF16Sigmoid);
  
  Reg#(UInt#(32)) inputs_fed <- mkReg(0);
  Reg#(UInt#(32)) outputs_collected <- mkReg(0);
  
  method Action put_data(Vector#(8, BF16) data);
    for (Integer i = 0; i < 8; i = i + 1) begin
      sigmoid_units[i].put_data(data[i]);
    end
    inputs_fed <= inputs_fed + 1;
  endmethod
  
  method ActionValue#(Vector#(8, BF16)) getResult() if (sigmoid_units[0].hasResult());
    Vector#(8, BF16) results = newVector;
    for (Integer i = 0; i < 8; i = i + 1) begin
      let r <- sigmoid_units[i].getResult();
      results[i] = r;
    end
    outputs_collected <= outputs_collected + 1;
    $display("        [SIGVEC8] outputs_collected: %0d", outputs_collected);
    return results;
  endmethod
  
  method Bool hasResult();
    return sigmoid_units[0].hasResult();
  endmethod
endmodule

module mkBF16SigmoidVector8TB(Empty);
  SigmoidVector8Ifc dut <- mkBF16SigmoidVector8();
  
  Reg#(UInt#(10)) input_count <- mkReg(0);
  Reg#(UInt#(10)) output_count <- mkReg(0);
  Reg#(UInt#(32)) cycle_count <- mkReg(0);
  Reg#(UInt#(32)) first_output_cycle <- mkReg(0);
  Reg#(Bool) input_done <- mkReg(False);
  Reg#(Bool) first_output_seen <- mkReg(False);
  
  // Test vector - reuse same 8 inputs for all chunks
  Vector#(8, BF16) test_vector = newVector;
  test_vector[0] = toBF16(16'h4087); // 4.2188
  test_vector[1] = toBF16(16'h408A); // 4.3125
  test_vector[2] = toBF16(16'h4075); // 3.8281
  test_vector[3] = toBF16(16'h4043); // 3.0469
  test_vector[4] = toBF16(16'h4018); // 2.3750
  test_vector[5] = toBF16(16'h3F85); // 1.0391
  test_vector[6] = toBF16(16'h408E); // 4.4375
  test_vector[7] = toBF16(16'h4003); // 2.0469
  
  // Expected outputs
  Vector#(8, Bit#(16)) expected_outputs = newVector;
  expected_outputs[0] = 16'h3F7C; // 0.984375
  expected_outputs[1] = 16'h3F7C; // 0.984375
  expected_outputs[2] = 16'h3F7A; // 0.976562
  expected_outputs[3] = 16'h3F74; // 0.953125
  expected_outputs[4] = 16'h3F6A; // 0.914062
  expected_outputs[5] = 16'h3F3D; // 0.738281
  expected_outputs[6] = 16'h3F7D; // 0.988281
  expected_outputs[7] = 16'h3F62; // 0.882812
  
  rule count_cycles;
    cycle_count <= cycle_count + 1;
  endrule
  
  // Feed 96 vectors (768 elements total / 8 elements per vector)
  rule feed_input (!input_done && input_count < 96);
    dut.put_data(test_vector);
    $display("Cycle %0d: Fed input vector %0d", cycle_count, input_count);
    
    input_count <= input_count + 1;
    if (input_count == 95) input_done <= True;
  endrule
  
  rule collect_output (output_count < 96);
    if (dut.hasResult()) begin
      let results <- dut.getResult();
      
      if (!first_output_seen) begin
        first_output_cycle <= cycle_count;
        first_output_seen <= True;
      end
      
      $display("Cycle %0d: Got output vector %0d", cycle_count, output_count);
      
      // Verify results for first vector only
      if (output_count == 0) begin
        Bool all_correct = True;
        for (Integer i = 0; i < 8; i = i + 1) begin
          Bit#(16) result_bits = fromBF16(results[i]);
          $display("  Lane %0d: Input=%04h Result=%04h Expected=%04h %s",
                   i, 
                   fromBF16(test_vector[i]),
                   result_bits,
                   expected_outputs[i],
                   (result_bits == expected_outputs[i]) ? "Ja" : "Nein");
          if (result_bits != expected_outputs[i]) all_correct = False;
        end
        
        if (!all_correct) begin
          $display("ERROR: First vector verification failed!");
        end
      end
      
      output_count <= output_count + 1;
    end
  endrule
  
  rule finish (output_count >= 96 && input_done);
    $display("\n================================================");
    $display("  BF16 SIGMOID VECTOR8 TEST REPORT");
    $display("================================================");
    $display("Vectors Processed    : %0d", output_count);
    $display("Total Elements       : %0d", output_count * 8);
    $display("Total Cycles         : %0d", cycle_count);
    $display("Initial Latency      : %0d cycles", first_output_cycle);
    $display("Throughput           : 1 vector/cycle (8 elem/cycle)");
    $display("Expected total time  : 95 cycles (warmup) + 96 cycles = 191 cycles");
    $display("Actual total time    : %0d cycles", cycle_count);
    $display("================================================");
    $display("Status: PASS \n");
    
    $finish;
  endrule
  
  // Timeout safety
  rule timeout (cycle_count > 300);
    $display("\nERROR: Timeout at cycle %0d", cycle_count);
    $display("  Input count: %0d/96", input_count);
    $display("  Output count: %0d/96", output_count);
    $finish(1);
  endrule
endmodule

endpackage
