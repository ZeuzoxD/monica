package BF16_PE;
import BF16::*;

interface BF16PE_IFC;
  method Action load_weight(BF16 w);
  method Action compute(BF16 act_in, BF16 psum_in);
  
  method BF16 get_activation_out();
  method BF16 get_psum_out();
endinterface

(* synthesize *)
module mkBF16_PE (BF16PE_IFC);
  Reg#(BF16) weight_reg <- mkReg(toBF16(16'h0000));
  
  // Output registers - these hold the results from PREVIOUS cycle
  Reg#(BF16) activation_out_reg <- mkReg(toBF16(16'h0000));
  Reg#(BF16) psum_out_reg <- mkReg(toBF16(16'h0000));
 
  BF16MultiplierIFC multiplier <- mkBF16Multiplier();
  BF16AdderIFC adder <- mkBF16Adder();
  
  method Action compute(BF16 act_in, BF16 psum_in);
    // Step 1: Multiply weight * activation (both converted to Bit#(16))
    Bit#(16) product = multiplier.multiply(fromBF16(weight_reg), fromBF16(act_in));
    
    // Step 2: Add product + psum_in (both as Bit#(16))
    Bit#(16) sum = adder.add(product, fromBF16(psum_in));
    
    // Step 3: Update output registers for NEXT cycle
    // Convert sum back to BF16 type before storing
    activation_out_reg <= act_in;
    psum_out_reg <= toBF16(sum);  // ✓ Convert Bit#(16) to BF16 and store
    
  endmethod
  
  method Action load_weight(BF16 w);
    weight_reg <= w;
  endmethod
    
  method BF16 get_activation_out();
    return activation_out_reg;
  endmethod
    
  method BF16 get_psum_out();
    return psum_out_reg;
  endmethod
endmodule

endpackage
