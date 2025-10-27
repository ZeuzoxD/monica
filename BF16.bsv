package BF16;

typedef struct {
  Bit#(1) sign;
  Bit#(8) exp;
  Bit#(7) mantissa;
} BF16 deriving (Bits, Eq);

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

module mkBF16Adder (BF16AdderIFC);  
  method Bit#(16) add(Bit#(16) a_raw, Bit#(16) b_raw);
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
        
    // Create and return result
    BF16 result = BF16 {
      sign: larger.sign,
      exp: final_exp,
      mantissa: final_mantissa
    };
        
    return fromBF16(result);
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


// ================== BF16 to Int16 Module ==================
interface BF16ToIntIFC;
  method Int#(16) convert(Bit#(16) bf16_val);
endinterface

module mkBF16ToInt (BF16ToIntIFC);
  method Int#(16) convert(Bit#(16) bf16_val);
    Int#(16) result;
    
    if (bf16_val == 16'h0000) begin
      result = 0;  // Zero case
    end else begin
      BF16 bf16 = toBF16(bf16_val);
      Bool sign = (bf16.sign == 1'b1);
      Int#(16) exponent = unpack(zeroExtend(bf16.exp)) - 127;
      
      if (exponent < 0) begin
        result = 0;  // |value| < 1, rounds to 0
      end else if (exponent >= 15) begin
        result = sign ? -32768 : 32767;  // Overflow protection for Int16
      end else begin
        // Get mantissa with implicit leading 1
        Bit#(16) mantissa_with_implicit = {1'b1, bf16.mantissa, 8'b0};
        
        // Calculate shift amount
        Int#(16) shift_amount = 15 - exponent;
        
        if (shift_amount > 0) begin
          Bit#(16) integer_part = mantissa_with_implicit >> shift_amount;
          // Check the bit that was shifted out for rounding
          Bool should_round_up = mantissa_with_implicit[shift_amount - 1] == 1'b1;
          
          Int#(16) temp_result = unpack(integer_part);
          if (should_round_up) temp_result = temp_result + 1;
          result = sign ? -temp_result : temp_result;
        end else begin
          Bit#(16) integer_part = mantissa_with_implicit << (-shift_amount);
          Int#(16) temp_result = unpack(integer_part);
          result = sign ? -temp_result : temp_result;
        end
      end
    end
    
    return result;
  endmethod
endmodule

// ================== Int16 to BF16 Module ==================
interface IntToBF16IFC;
  method Bit#(16) convert(Int#(16) int_val);
endinterface

module mkIntToBF16 (IntToBF16IFC);
  method Bit#(16) convert(Int#(16) val);
    BF16 result = BF16 {sign: 1'b0, exp: 8'h00, mantissa: 7'h00};
    
    if (val != 0) begin
      Bool sign = (val < 0);
      Bit#(16) abs_val = pack(sign ? -val : val);
      
      // Find leading 1 position
      Int#(16) leading_pos = 0;
      for (Int#(16) i = 15; i >= 0; i = i - 1) begin
        if (abs_val[i] == 1'b1 && leading_pos == 0) begin
          leading_pos = i;
        end
      end
      
      Int#(16) exp = leading_pos + 127;
      if (exp > 0 && exp < 255) begin
        Bit#(16) normalized = abs_val << (15 - leading_pos);
        Bit#(7) mantissa = normalized[14:8];  // Take top 7 bits for BF16
        
        result = BF16 {
          sign: pack(sign),
          exp: pack(exp)[7:0],
          mantissa: mantissa
        };
      end
    end
    
    return fromBF16(result);
  endmethod
endmodule

// ================== Power of 2 Module ==================
interface Power2BF16IFC;
  method Bit#(16) compute(Int#(16) m);
endinterface

module mkPower2BF16 (Power2BF16IFC);
  method Bit#(16) compute(Int#(16) m);
    BF16 result;
    Int#(16) exp_bits = 127 - m;
    
    if (exp_bits <= 0) begin
      result = BF16 {sign: 1'b0, exp: 8'h00, mantissa: 7'h00};  // Zero
    end else if (exp_bits >= 255) begin
      result = BF16 {sign: 1'b0, exp: 8'hFF, mantissa: 7'h00};  // Infinity
    end else begin
      result = BF16 {
        sign: 1'b0,
        exp: pack(exp_bits)[7:0],
        mantissa: 7'h00
      };
    end
    
    return fromBF16(result);
  endmethod
endmodule

endpackage
