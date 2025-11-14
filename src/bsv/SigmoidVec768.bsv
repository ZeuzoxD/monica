package SigmoidVec768;
import Vector::*;
import BF16::*;
import SigmoidVec8::*;

interface SigmoidVector768Ifc;
  method Action putVectors(Vector#(768, BF16) data);
  method ActionValue#(Vector#(768, BF16)) getResult();
  method Bool hasResult();
endinterface

(* synthesize *)
module mkBF16SigmoidVector768(SigmoidVector768Ifc);
  SigmoidVector8Ifc sigmoid_module <- mkBF16SigmoidVector8();
  
  Reg#(Vector#(768, BF16)) input_buffer <- mkRegU();
  Vector#(96, Reg#(Vector#(8, BF16))) output_chunks <- replicateM(mkRegU());
  
  // State machine
  Reg#(Bool) busy <- mkReg(False);
  Reg#(UInt#(10)) feed_index <- mkReg(0);       
  Reg#(UInt#(10)) collect_index <- mkReg(0); 
  Reg#(Bool) result_ready <- mkReg(False);
  
  // Cycle counter
  Reg#(UInt#(32)) cycle_count <- mkReg(0);
  
  rule count_cycles;
    cycle_count <= cycle_count + 1;
  endrule
  
  // Feed module every cycle - this rule fires first
  (* descending_urgency = "feed_modules, collect_results" *)
  rule feed_modules (busy && feed_index < 96);
    UInt#(10) base_idx = zeroExtend(feed_index) * 8;
    Vector#(8, BF16) chunk = newVector();
    for (Integer i = 0; i < 8; i = i + 1) begin
      chunk[i] = input_buffer[base_idx + fromInteger(i)];
    end
    
    sigmoid_module.put_data(chunk);
    feed_index <= feed_index + 1;
    $display("Cycle %0d: [VEC768] Fed chunk %0d to sigmoid_module", cycle_count, feed_index);
  endrule
  
  // Collect results when available
  rule collect_results (busy && collect_index < 96 && sigmoid_module.hasResult());
    let result_chunk <- sigmoid_module.getResult();
    output_chunks[collect_index] <= result_chunk;
    $display("Cycle %0d: [VEC768] Collected chunk %0d", cycle_count, collect_index);
    
    if (collect_index == 95) begin
      busy <= False;
      result_ready <= True;
      $display("Cycle %0d: [VEC768] All chunks collected, result ready", cycle_count);
    end
    
    collect_index <= collect_index + 1;
  endrule
  
  // Method: Accept 768-element input vector
  method Action putVectors(Vector#(768, BF16) data) if (!busy);
    input_buffer <= data;
    busy <= True;
    feed_index <= 0;
    collect_index <= 0;
    result_ready <= False;
    $display("Cycle %0d: [VEC768] Started processing 768 elements", cycle_count);
  endmethod
  
  // Method: Return 768-element result vector
  method ActionValue#(Vector#(768, BF16)) getResult() if (result_ready && !busy);
    result_ready <= False;
    Vector#(768, BF16) result = newVector();
    
    for (Integer chunk = 0; chunk < 96; chunk = chunk + 1) begin
      for (Integer i = 0; i < 8; i = i + 1) begin
        result[chunk * 8 + i] = output_chunks[chunk][i];
      end
    end
    
    $display("Cycle %0d: [VEC768] Returning final result", cycle_count);
    return result;
  endmethod
  
  // Method: Check if result is ready
  method Bool hasResult();
    return result_ready;
  endmethod
  
endmodule

// Testbench for 768-element vector
module mkBF16SigmoidVector768TB(Empty);
  SigmoidVector768Ifc dut <- mkBF16SigmoidVector768();
  
  Reg#(UInt#(32)) cycle_count <- mkReg(0);
  Reg#(Bool) input_sent <- mkReg(False);
  Reg#(Bool) output_received <- mkReg(False);
  Reg#(UInt#(32)) start_cycle <- mkReg(0);
  
  rule count_cycles;
    cycle_count <= cycle_count + 1;
  endrule
  
  // Create test input vector (768 elements)
  Vector#(768, BF16) test_input = newVector();
  for (Integer i = 0; i < 768; i = i + 1) begin
    // Cycle through some test values
    if (i < 96)
      test_input[i] = toBF16(16'h4087); // 4.2188
    else if (i < 192)
      test_input[i] = toBF16(16'h408A); // 4.3125
    else if (i < 288)
      test_input[i] = toBF16(16'h4075); // 3.8281
    else if (i < 384)
      test_input[i] = toBF16(16'h4043); // 3.0469
    else if (i < 480)
      test_input[i] = toBF16(16'h4018); // 2.3750
    else if (i < 576)
      test_input[i] = toBF16(16'h3F85); // 1.0391
    else if (i < 672)
      test_input[i] = toBF16(16'h408E); // 4.4375
    else
      test_input[i] = toBF16(16'h4003); // 2.0469
  end
  
  rule send_input (!input_sent && cycle_count > 5);
    dut.putVectors(test_input);
    input_sent <= True;
    start_cycle <= cycle_count;
    $display("\nCycle %0d: [TB] Sent 768-element input vector", cycle_count);
  endrule
  
  rule receive_output (input_sent && !output_received && dut.hasResult());
    let result <- dut.getResult();
    output_received <= True;
    
    UInt#(32) elapsed = cycle_count - start_cycle;
    
    $display("\nCycle %0d: [TB] Received 768-element output vector", cycle_count);
    $display("========================================");
    $display("  PERFORMANCE SUMMARY");
    $display("========================================");
    $display("  Start cycle:     %0d", start_cycle);
    $display("  End cycle:       %0d", cycle_count);
    $display("  Total cycles:    %0d", elapsed);
    $display("  Expected:        ~100 cycles (96 inputs + pipeline latency)");
    $display("  Throughput:      %0d elements / %0d cycles", 768, elapsed);
    $display("========================================");
    
    // Verify first few results
    $display("\nFirst 8 results verification:");
    for (Integer i = 0; i < 768; i = i + 1) begin
      $display("  Input[%0d]: %04h  Element[%0d]: %04h", i, fromBF16(test_input[i]), i, fromBF16(result[i]));
    end
  endrule
  
  rule finish (output_received);
    $display("\nTest completed successfully!");
    $finish;
  endrule
  
  rule timeout (cycle_count > 300);
    $display("\nERROR: Timeout at cycle %0d", cycle_count);
    $finish(1);
  endrule
endmodule

endpackage
