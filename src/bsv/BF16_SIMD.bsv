package BF16_SIMD;

import BF16::*;
import Vector::*;
import FIFOF::*;

interface IfcBF16_SIMD;
   method Action start_computation(Vector#(64, BF16) a, Vector#(64, BF16) b, 
                                   Vector#(64, BF16) c, Vector#(64, BF16) d);
   method Vector#(64, BF16) get_result();
   method Bool computation_done();
endinterface

typedef struct {
   Bit#(7) index;
   Bit#(16) mult1_result;  // Changed to Bit#(16) to avoid conversion overhead
   Bit#(16) mult2_result;
} PipelineStage deriving (Bits, Eq);

(* synthesize *)
module mkBF16_SIMD(IfcBF16_SIMD);

   // TWO multipliers for PARALLEL multiplication (a*b and c*d at same time)
   BF16MultiplierIFC mult1 <- mkBF16Multiplier();
   BF16MultiplierIFC mult2 <- mkBF16Multiplier();
   
   // ONE adder for sequential addition
   BF16AdderIFC adder <- mkBF16Adder();
   
   // Input storage
   Reg#(Vector#(64, BF16)) reg_a <- mkRegU();
   Reg#(Vector#(64, BF16)) reg_b <- mkRegU();
   Reg#(Vector#(64, BF16)) reg_c <- mkRegU();
   Reg#(Vector#(64, BF16)) reg_d <- mkRegU();
   
   // Output storage
   Vector#(64, Reg#(BF16)) result_regs <- replicateM(mkRegU());
   
   // Pipeline control
   Reg#(Bool) active <- mkReg(False);
   Reg#(Bit#(7)) issue_index <- mkReg(0);
   Reg#(Bit#(7)) complete_count <- mkReg(0);
   
   // Pipeline registers between multiply and add stages (instead of FIFO)
   Reg#(Maybe#(PipelineStage)) pipeline_stage <- mkReg(tagged Invalid);

   // COMBINED RULE: Issues next multiply AND performs current addition in SAME CYCLE
   rule pipeline_process if (active);
      // STAGE 2: Perform addition from previous cycle (if valid)
      if (pipeline_stage matches tagged Valid .stage_data) begin
         let add_result = adder.add(stage_data.mult1_result, stage_data.mult2_result);
         result_regs[stage_data.index] <= toBF16(add_result);
         complete_count <= complete_count + 1;
         
         // Check if all computations are done
         if (complete_count + 1 == 64) begin
            active <= False;
         end
      end
      
      // STAGE 1: Issue next multiplication (PARALLEL: both mult1 and mult2)
      if (issue_index < 64) begin
         let result1 = mult1.multiply(fromBF16(reg_a[issue_index]), 
                                      fromBF16(reg_b[issue_index]));
         let result2 = mult2.multiply(fromBF16(reg_c[issue_index]), 
                                      fromBF16(reg_d[issue_index]));
         
         pipeline_stage <= tagged Valid (PipelineStage {
            index: issue_index,
            mult1_result: result1,
            mult2_result: result2
         });
         
         issue_index <= issue_index + 1;
      end else begin
         pipeline_stage <= tagged Invalid;
      end
   endrule

   method Action start_computation(Vector#(64, BF16) a, Vector#(64, BF16) b, 
                                   Vector#(64, BF16) c, Vector#(64, BF16) d) if (!active);
      reg_a <= a;
      reg_b <= b;
      reg_c <= c;
      reg_d <= d;
      
      // Reset pipeline state
      issue_index <= 0;
      complete_count <= 0;
      active <= True;
   endmethod

   method Vector#(64, BF16) get_result() if (!active && complete_count == 64);
      return readVReg(result_regs);
   endmethod

   method Bool computation_done() = (!active && complete_count == 64);

endmodule

endpackage