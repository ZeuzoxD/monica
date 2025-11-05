package TorchMaximum32;
import Vector::*;
import TorchMaximum::*;
import BF16::*;

// Vector of 32 BF16 elements
typedef Vector#(32, BF16) BF16Vec32;

interface TorchMaximum32Ifc;
    method BF16Vec32 findMax(BF16Vec32 vec_a, BF16Vec32 vec_b);  // Element-wise maximum
endinterface

// Element-wise maximum function
function BF16Vec32 elementWiseMax(BF16Vec32 vec_a, BF16Vec32 vec_b);
    Vector#(32, BF16) result = newVector;
    
    // Parallel element-wise comparison
    for (Integer i = 0; i < 32; i = i + 1) begin
        result[i] = toBF16(maxBF16(fromBF16(vec_a[i]), fromBF16(vec_b[i])));
    end
    
    return result;
endfunction

(* synthesize *)
module mkTorchMaximum32(TorchMaximum32Ifc);
    method BF16Vec32 findMax(BF16Vec32 vec_a, BF16Vec32 vec_b);
        return elementWiseMax(vec_a, vec_b);
    endmethod
endmodule

endpackage
