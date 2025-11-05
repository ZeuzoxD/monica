package BF16;

import Vector::*;

typedef struct {
  Bit#(1) sign;
  Bit#(8) exp;
  Bit#(7) mantissa;
} BF16 deriving (Bits, Eq);

typedef Vector#(8, BF16) BF16Vec8;

function BF16 toBF16(Bit#(16) val);
  return BF16 {
    sign: val[15],
    exp: val[14:7],
    mantissa: val[6:0]
  };
endfunction

function Bit#(16) fromBF16(BF16 val);
  return {val.sign, val.exp, val.mantissa};
endfunction

interface BF16AdderIFC;
    method Bit#(16) add(Bit#(16) a, Bit#(16) b);
endinterface

// Area-optimized BF16 adder with zero handling
module mkBF16Adder (BF16AdderIFC);
   
    method Bit#(16) add(Bit#(16) a_raw, Bit#(16) b_raw);
        
        // Zero handling - check for zero inputs
        Bool a_zero = (a_raw == 16'h0000);
        Bool b_zero = (b_raw == 16'h0000);
        
        Bit#(16) result;
        
        if (a_zero && b_zero) begin
            result = 16'h0000;
        end else if (a_zero) begin
            result = b_raw;
        end else if (b_zero) begin
            result = a_raw;
        end else begin
            // Both operands are non-zero - proceed with normal addition
            BF16 a = toBF16(a_raw);
            BF16 b = toBF16(b_raw);
           
            // Add implicit leading 1 to mantissas (8 bits total)
            Bit#(8) a_mantissa = {1'b1, a.mantissa};
            Bit#(8) b_mantissa = {1'b1, b.mantissa};
           
            // Determine which operand has larger exponent
            Bool a_larger = (a.exp >= b.exp);
           
            // Get the larger and smaller operands
            BF16 larger = a_larger ? a : b;
            BF16 smaller = a_larger ? b : a;
            Bit#(8) larger_man = a_larger ? a_mantissa : b_mantissa;
            Bit#(8) smaller_man = a_larger ? b_mantissa : a_mantissa;
           
            // Calculate exponent difference and shift amount
            Bit#(8) exp_diff = larger.exp - smaller.exp;
            Bit#(8) shift_amount = (exp_diff > 8) ? 8 : exp_diff;
           
            // Shift smaller mantissa right to align with larger
            Bit#(8) shifted_smaller = smaller_man >> shift_amount;
           
            // Determine if this is addition or subtraction
            Bool effective_sub = (larger.sign != smaller.sign);
           
            // Perform addition or subtraction
            Bit#(9) man_result;
           
            if (effective_sub) begin
                man_result = zeroExtend(larger_man) - zeroExtend(shifted_smaller);
            end else begin
                man_result = zeroExtend(larger_man) + zeroExtend(shifted_smaller);
            end
           
            // Zero result detection - if subtraction yields zero
            if (man_result == 0) begin
                result = 16'h0000;
            end else begin
                // Normalize the result
                Bit#(8) final_exp = larger.exp;
                Bit#(7) final_mantissa;
               
                if (man_result[8] == 1'b1) begin
                    // Overflow: shift right and increment exponent
                    final_exp = larger.exp + 1;
                    final_mantissa = man_result[7:1];
                end else if (man_result[7] == 1'b1) begin
                    // Normal case: remove implicit leading 1
                    final_mantissa = man_result[6:0];
                end else begin
                    // Need to shift left to normalize
                    if (man_result[6] == 1'b1) begin
                        final_exp = larger.exp - 1;
                        final_mantissa = {man_result[5:0], 1'b0};
                    end else if (man_result[5] == 1'b1) begin
                        final_exp = larger.exp - 2;
                        final_mantissa = {man_result[4:0], 2'b0};
                    end else if (man_result[4] == 1'b1) begin
                        final_exp = larger.exp - 3;
                        final_mantissa = {man_result[3:0], 3'b0};
                    end else begin
                        // Further normalization needed - simplified
                        final_exp = larger.exp - 4;
                        final_mantissa = {man_result[2:0], 4'b0};
                    end
                end
               
                // Create result
                BF16 final_result = BF16 {
                    sign: larger.sign,
                    exp: final_exp,
                    mantissa: final_mantissa
                };
               
                result = fromBF16(final_result);
            end
        end
        
        return result;
    endmethod
endmodule

interface BF16MultiplierIFC;
  method Bit#(16) multiply(Bit#(16) a, Bit#(16) b);
endinterface

module mkBF16Multiplier (BF16MultiplierIFC);
  method Bit#(16) multiply(Bit#(16) a_raw, Bit#(16) b_raw);
    BF16 a = toBF16(a_raw);
    BF16 b = toBF16(b_raw);

    Bool a_zero = (a.exp == 0);
    Bool b_zero = (b.exp == 0);
    Bool result_zero = a_zero || b_zero;

    Bit#(1) result_sign = a.sign ^ b.sign;

    Bit#(8) a_mantissa = {1'b1, a.mantissa};
    Bit#(8) b_mantissa = {1'b1, b.mantissa};

    Bit#(16) mantissa_product = zeroExtend(a_mantissa) * zeroExtend(b_mantissa);

    Bit#(9) exp_sum = zeroExtend(a.exp) + zeroExtend(b.exp);
    Bit#(9) raw_exp = exp_sum - 127;

    Bool exp_overflow = (raw_exp > 255);
    Bool exp_underflow = (raw_exp < 0);

    Bit#(8) final_exp;
    Bit#(7) final_mantissa;

    if (exp_overflow || exp_underflow) begin
      final_exp = exp_overflow ? 8'hFF : 8'b0;
      final_mantissa = 7'b0;
    end else if (mantissa_product[15] == 1'b1) begin
      final_exp = truncate(raw_exp + 1);
      final_mantissa = mantissa_product[14:8];
    end else begin
      final_exp = truncate(raw_exp);
      final_mantissa = mantissa_product[13:7];
    end

    BF16 result;
    if (result_zero) begin
      result = BF16 {
        sign: result_sign,
        exp: 8'b0,
        mantissa: 7'b0
      };
    end else begin
      result = BF16 {
        sign: result_sign,
        exp: final_exp,
        mantissa: final_mantissa
      };
    end

    return fromBF16(result);
  endmethod
endmodule

// Negate a BF16 number (flip sign bit)
function Bit#(16) negateBF16(Bit#(16) val);
    return {~val[15], val[14:0]};
endfunction

interface BF16SubIFC;
    method Bit#(16) sub(Bit#(16) a, Bit#(16) b);
endinterface

// Pure combinational BF16 subtractor using the BF16 adder
module mkBF16Sub (BF16SubIFC);
    
    BF16AdderIFC adder <- mkBF16Adder();
    
    method Bit#(16) sub(Bit#(16) a, Bit#(16) b);
        // Subtraction: a - b = a + (-b)
        // Simply negate b and use the adder
        Bit#(16) neg_b = negateBF16(b);
        return adder.add(a, neg_b);
    endmethod
    
endmodule

endpackage
