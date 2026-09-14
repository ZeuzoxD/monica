package BF16VectorDivider;

import Vector::*;
import BF16::*;
import BF16Divider_pipeline::*;


// Vector size
typedef 768 VecSize;

// Interface for vector divider
interface BF16VectorDividerIFC;
    // Feed input vectors (BF16 format)
    method Action putVectors(Vector#(VecSize, BF16) a, Vector#(VecSize, BF16) b);
    

    // Get result vector when ready (BF16 format)
    method ActionValue#(Vector#(VecSize, BF16)) getResult();

    
    // Check if result is available
    method Bool hasResult();
endinterface


(* synthesize *)
module mkBF16VectorDivider (BF16VectorDividerIFC);
    
    // Single pipelined divider instance
    BF16DividerIFC divider <- mkBF16Divider();
    
    // Input vector buffers (BF16 format)
    Reg#(Vector#(VecSize, BF16)) vec_a <- mkRegU();
    Reg#(Vector#(VecSize, BF16)) vec_b <- mkRegU();
    
    // Output vector buffer (BF16 format)
    Reg#(Vector#(VecSize, BF16)) vec_result <- mkRegU();
    

    // State machine
    Reg#(Bool) busy <- mkReg(False);
    Reg#(UInt#(10)) feed_index <- mkReg(0);     // Which element to feed next (0-767)
    Reg#(UInt#(10)) collect_index <- mkReg(0);  // Which element result to collect next (0-767)
    Reg#(Bool) result_ready <- mkReg(False);
    
    // Rule: Feed elements to the divider pipeline
    (* descending_urgency = "collect_results, feed_inputs" *)
    rule feed_inputs (busy && feed_index < 768);
        // Convert BF16 to Bit#(16) for divider
        divider.put_data(fromBF16(vec_a[feed_index]), fromBF16(vec_b[feed_index]));
        feed_index <= feed_index + 1;
    endrule
    

    // Rule: Collect results from the divider pipeline
    rule collect_results (busy && divider.hasResult() && collect_index < 768);
        let result <- divider.getResult();
        // Convert Bit#(16) back to BF16
        vec_result[collect_index] <= toBF16(result);
        
        if (collect_index == 767) begin
            // All results collected
            busy <= False;
            result_ready <= True;
        end
        
        collect_index <= collect_index + 1;
    endrule
    

    // Method: Accept new input vectors (BF16 format)
    method Action putVectors(Vector#(VecSize, BF16) a, Vector#(VecSize, BF16) b) if (!busy);
        vec_a <= a;
        vec_b <= b;
        busy <= True;
        feed_index <= 0;
        collect_index <= 0;
        result_ready <= False;
    endmethod
    
    // Method: Return result vector (BF16 format)
    method ActionValue#(Vector#(VecSize, BF16)) getResult() if (result_ready && !busy);
        result_ready <= False;
        return vec_result;
    endmethod
    
    // Method: Check if result is ready

    method Bool hasResult();
        return result_ready;
    endmethod
    
endmodule

endpackage
