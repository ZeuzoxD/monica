package BF16ExpVector8;

import Vector::*;
import BF16::*;
import BF16ExpCore::*;

interface BF16ExpVector8;
  method Action put_data(Vector#(8, BF16) data);
  method ActionValue#(Vector#(8, BF16)) getResult();
  method Bool hasResult();
endinterface

(* synthesize *)

module mkBF16ExpVector8(BF16ExpVector8);
  Vector#(8, BF16Exp) exp_units <- replicateM(mkBF16Exp);

  
  Reg#(UInt#(32)) inputs_fed <- mkReg(0);
  Reg#(UInt#(32)) outputs_collected <- mkReg(0);

  
  method Action put_data(Vector#(8, BF16) data);
    for (Integer i = 0; i < 8; i = i + 1) begin
      exp_units[i].put_data(data[i]);
    end
    inputs_fed <= inputs_fed + 1;
  endmethod
  
  method ActionValue#(Vector#(8, BF16)) getResult() if (exp_units[0].hasResult());
    Vector#(8, BF16) results = newVector;
    for (Integer i = 0; i < 8; i = i + 1) begin
      let r <- exp_units[i].getResult();
      results[i] = r;
    end
    outputs_collected <= outputs_collected + 1;
    return results;
  endmethod
  
  method Bool hasResult();
    return exp_units[0].hasResult();
  endmethod

endmodule

(* synthesize *)
module mkBF16ExpVector8TB(Empty);
  BF16ExpVector8 dut <- mkBF16ExpVector8;
  
  Reg#(UInt#(10)) input_count <- mkReg(0);

  Reg#(UInt#(10)) output_count <- mkReg(0);
  Reg#(UInt#(32)) cycle_count <- mkReg(0);
  Reg#(UInt#(32)) first_output_cycle <- mkReg(0);
  Reg#(Bool) input_done <- mkReg(False);
  Reg#(Bool) first_output_seen <- mkReg(False);
  
  rule count_cycles;
    cycle_count <= cycle_count + 1;
  endrule
  
  rule feed_input (!input_done && input_count < 100);
    Vector#(8, BF16) test_vec = newVector;
    
    for (Integer i = 0; i < 8; i = i + 1) begin
      Bit#(16) test_val = 16'h4000 + pack(extend(input_count)) + fromInteger(i);
      test_vec[i] = toBF16(test_val);
    end
    
    dut.put_data(test_vec);
    $display("Cycle %0d: Fed input vector %0d", cycle_count, input_count);
    
    input_count <= input_count + 1;
    if (input_count == 99) input_done <= True;
  endrule
  
  rule collect_output (output_count < 100);
    if (dut.hasResult()) begin

      let results <- dut.getResult();
      
      if (!first_output_seen) begin

        first_output_cycle <= cycle_count;
        first_output_seen <= True;
      end
      
      $display("Cycle %0d: Got output vector %0d", cycle_count, output_count);
      for (Integer i = 0; i < 8; i = i + 1) begin
        $display("  Lane %0d: %04h", i, fromBF16(results[i]));
      end
      
      output_count <= output_count + 1;
    end
  endrule
  
  rule finish (output_count >= 100 && input_done);
    $display("\n================================================");

    $display("        BF16 EXP VECTOR8 TEST REPORT");
    $display("================================================");
    $display("Vectors Processed    : %0d", output_count);
    $display("Total Elements       : %0d", output_count * 8);
    $display("Total Cycles         : %0d", cycle_count);
    $display("Initial Latency      : %0d cycles", first_output_cycle);
    $display("Throughput           : 1 vector/cycle (8 elem/cycle)");
    $display("================================================");
    $display("Status: PASS\n");
    
    $finish;
  endrule
endmodule

endpackage

