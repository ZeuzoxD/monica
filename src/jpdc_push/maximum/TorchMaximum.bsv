package TorchMaximum;
import BF16::*;

// Correct BF16 maximum function
function Bit#(16) maxBF16(Bit#(16) a, Bit#(16) b);
    // Extract signs
    Bool a_negative = (a[15] == 1'b1);
    Bool b_negative = (b[15] == 1'b1);
    
    if (!a_negative && !b_negative) begin
        // Both positive: standard unsigned comparison
        return (a > b) ? a : b;
    end
    else if (a_negative && b_negative) begin
        // Both negative: reverse comparison (less negative is larger)
        return (a > b) ? b : a;  // In two's complement-like, larger bits = less negative
    end
    else begin
        // Mixed signs: positive always wins
        return a_negative ? b : a;
    end
endfunction

interface TorchMaximumLiteIfc;
    method BF16 getMax(BF16 a, BF16 b);  // Purely combinational method
endinterface

(* synthesize *)
module mkTorchMaximum(TorchMaximumLiteIfc);
    method BF16 getMax(BF16 a, BF16 b);
        return toBF16(maxBF16(fromBF16(a), fromBF16(b)));  // Direct combinational logic
    endmethod
endmodule

endpackage
