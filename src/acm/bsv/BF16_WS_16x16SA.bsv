package BF16_WS_16x16SA;

import BF16::*;
import BF16_PE::*;
import Vector::*;
import StmtFSM::*;

interface BF16_SA_IFC;
  method Action load_weights(
    Vector#(16, Vector#(16, BF16)) w
  );
  method Action load_activations(
    Vector#(16, BF16) act
  );
  method Action start();
  method Bool is_done();
  method ActionValue#(Vector#(16, BF16)) get_result();
endinterface

(* synthesize *)
module mkBF16_16x16SA(BF16_SA_IFC);
  Vector#(16, Vector#(16, BF16PE_IFC)) pe_array <- replicateM(replicateM(mkBF16_PE));
  
  Vector#(16, Vector#(16, Reg#(BF16))) mat_w <- replicateM(replicateM(mkReg(toBF16(16'h0000))));
  Vector#(16, Reg#(BF16)) mat_a <- replicateM(mkReg(toBF16(16'h0000)));

  Vector#(16, Reg#(BF16)) result_matrix <- replicateM(mkReg(toBF16(16'h0000)));
  Vector#(16, Reg#(Bool)) result_captured <- replicateM(mkReg(False));

  Reg#(Bool) computing <- mkReg(False);
  Reg#(Int#(32)) cycle_count <- mkReg(0);
  Int#(32) total_cycle = 31;

  rule systolic_compute if (computing && cycle_count < total_cycle);
    //$display("\n Cycle %0d ", cycle_count);
    for (Integer i=0; i<16; i=i+1) begin
      for (Integer j=0; j<16; j=j+1) begin

        BF16 act_val = toBF16(16'h0000);
        BF16 psum_in = toBF16(16'h0000);


        // Activation flow (left to right)
        // Read from left neighbor's OUTPUT register (was updated in previous cycle)
        if (i == 0) begin
        	if (cycle_count == fromInteger(j)) begin
        		act_val = mat_a[j];
        	end else begin
        		act_val = toBF16(16'h0000);
          end
        end 
        else begin
          act_val = pe_array[i-1][j].get_activation_out();
        end
        
        // Psum flow (top to bottom)
        if (j==0) begin
          psum_in = toBF16(16'h0000);
        end 
        else begin
          psum_in = pe_array[i][j-1].get_psum_out();
        end

        //$display("      PE[%0d][%0d]", i, j);
        pe_array[i][j].compute(act_val, psum_in);
      end
    end
    cycle_count <= cycle_count + 1;
  endrule


  rule capture_out if (computing && cycle_count < total_cycle + 1);
    for (Integer i = 0; i < 16; i = i + 1) begin
      Int#(32) expected_cycle = fromInteger(i + 16);

      if (cycle_count == expected_cycle && !result_captured[i]) begin
        BF16 captured_val = pe_array[i][15].get_psum_out();
        result_matrix[i] <= captured_val;
        result_captured[i] <= True;
        //$display ("   [CAPTURE] Result[%0d] = %h from PE[11][%0d]", i, captured_val, i);
      end
    end
  endrule

  rule stop_compute if (cycle_count >= total_cycle);
    computing <= False;
  endrule

  method Action load_weights(Vector#(16, Vector#(16, BF16)) w) if (!computing);
    for (Integer i = 0; i < 16; i = i + 1) begin
      for (Integer j = 0; j < 16; j = j + 1) begin
        mat_w[i][j] <= w[i][j];
        pe_array[i][j].load_weight(w[i][j]);
      end
    end
  endmethod


  method Action load_activations(Vector#(16, BF16) act) if (!computing);
    for (Integer i = 0; i < 16; i = i + 1) begin
      mat_a[i] <= act[i];
    end
  endmethod

  method Action start() if (!computing);
    // Just set the flag and counter - no need to initialize PE registers
    // The first compute cycle will properly initialize everything
    for (Integer i = 0; i < 16; i = i + 1) begin
      result_captured[i] <= False;
    end
    computing <= True;
    cycle_count <= 0;
  endmethod

  method Bool is_done();
    return (cycle_count >= total_cycle);
  endmethod

  method ActionValue#(Vector#(16, BF16)) get_result() if (!computing && cycle_count >= total_cycle);
    Vector#(16, BF16) result = newVector();
    for (Integer i = 0; i < 16; i = i + 1) begin
      result[i] = result_matrix[i]; 
    end
    return result;
  endmethod

endmodule

endpackage
