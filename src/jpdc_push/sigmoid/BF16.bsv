package BF16;

import Vector::*;

typedef struct {
  Bit#(1) sign;
  Bit#(8) exp;
  Bit#(7) mantissa;
} BF16 deriving (Bits, Eq);

typedef Vector#(768, BF16) BF16Vec768;
typedef Vector#(32, BF16) BF16Vec32;
typedef Vector#(8, BF16) BF16Vec8;

// Convert 16-bit raw to BF16 struct
function BF16 toBF16(Bit#(16) val);
  return BF16 {
    sign: val[15],
    exp: val[14:7],
    mantissa: val[6:0]
  };
endfunction

// Convert BF16 struct to 16-bit raw
function Bit#(16) fromBF16(BF16 val);
  return {val.sign, val.exp, val.mantissa};
endfunction

// Negate BF16 value (flip sign)
function BF16 bf16_neg(Bit#(16) a);
  BF16 tmp = toBF16(a);
  tmp.sign = ~tmp.sign;
  return tmp;
endfunction

// Negate a BF16 number (flip sign bit)
function Bit#(16) negateBF16(Bit#(16) val);
    return {~val[15], val[14:0]};
endfunction

// Comparator: returns True if a > b
function Bool bf16_gt(Bit#(16) a_raw, Bit#(16) b_raw);
   BF16 a = toBF16(a_raw);
   BF16 b = toBF16(b_raw);
   Bool result;

   // Handle sign first
   if (a.sign != b.sign) begin
      result = (a.sign == 0);  // positive > negative
   end else begin
      // Both same sign
      if (a.sign == 0) begin
         // positive numbers: higher exp or mantissa = greater
         if (a.exp > b.exp) result = True;
         else if (a.exp < b.exp) result = False;
         else result = (a.mantissa > b.mantissa);
      end else begin
         // negative numbers: reversed order
         if (a.exp > b.exp) result = False;
         else if (a.exp < b.exp) result = True;
         else result = (a.mantissa < b.mantissa);
      end
   end

   return result;
endfunction

// Greater-than-or-equal comparison
function Bool bf16_gte(Bit#(16) a, Bit#(16) b);
  return bf16_gt(a, b) || (a == b);
endfunction

// Three-operand BF16 adder interface
interface BF16ThreeOpAddIFC;
    method Bit#(16) add3(Bit#(16) a, Bit#(16) b, Bit#(16) c);
endinterface

module mkBF16ThreeOpAdd (BF16ThreeOpAddIFC);
    method Bit#(16) add3(Bit#(16) a_raw, Bit#(16) b_raw, Bit#(16) c_raw);
        BF16 a = toBF16(a_raw);
        BF16 b = toBF16(b_raw);
        BF16 c = toBF16(c_raw);

        Bit#(16) result_raw;

        // Check for zero operands
        Bool a_zero = (a.exp == 0 && a.mantissa == 0);
        Bool b_zero = (b.exp == 0 && b.mantissa == 0);
        Bool c_zero = (c.exp == 0 && c.mantissa == 0);

        if (a_zero && b_zero && c_zero) begin
            result_raw = 16'b0;
        end else if (a_zero && b_zero) begin
            result_raw = c_raw;
        end else if (a_zero && c_zero) begin
            result_raw = b_raw;
        end else if (b_zero && c_zero) begin
            // Only -a remains
            BF16 neg_a = a;
            neg_a.sign = ~a.sign;
            result_raw = fromBF16(neg_a);
        end else begin
            // Find maximum exponent among all three
            Bit#(8) max_exp = a.exp;
            if (b.exp > max_exp) max_exp = b.exp;
            if (c.exp > max_exp) max_exp = c.exp;

            // Align all three mantissas to max exponent
            Bit#(8) exp_diff_a = max_exp - a.exp;
            Bit#(8) exp_diff_b = max_exp - b.exp;
            Bit#(8) exp_diff_c = max_exp - c.exp;

            Bit#(8) man_a = a_zero ? 0 : ({1'b1, a.mantissa} >> exp_diff_a);
            Bit#(8) man_b = b_zero ? 0 : ({1'b1, b.mantissa} >> exp_diff_b);
            Bit#(8) man_c = c_zero ? 0 : ({1'b1, c.mantissa} >> exp_diff_c);

            // Convert to signed
            Bit#(10) ext_a = zeroExtend(man_a);
            Bit#(10) ext_b = zeroExtend(man_b);
            Bit#(10) ext_c = zeroExtend(man_c);
            
            // Apply signs: negate 'a', use b and c as-is
            Int#(11) signed_a = (a.sign == 0) ? -signExtend(unpack(ext_a)) : signExtend(unpack(ext_a));
            Int#(11) signed_b = (b.sign == 1) ? -signExtend(unpack(ext_b)) : signExtend(unpack(ext_b));
            Int#(11) signed_c = (c.sign == 1) ? -signExtend(unpack(ext_c)) : signExtend(unpack(ext_c));

            // Add all three
            Int#(11) signed_result = signed_a + signed_b + signed_c;

            // Extract sign and get absolute value
            Bool is_negative = (signed_result < 0);
            Bit#(1) result_sign = is_negative ? 1'b1 : 1'b0;
            
            Int#(11) abs_signed = is_negative ? -signed_result : signed_result;
            Bit#(10) abs_result = truncate(pack(abs_signed));

            // Handle zero result
            if (abs_result == 0) begin
                result_raw = 16'b0;
            end else begin
                // Normalize the result
                Bit#(8) final_exp = max_exp;
                Bit#(7) final_mant;
                Bit#(10) tmp = abs_result;

                // Check for overflow
                if (tmp[9] == 1) begin
                    final_exp = max_exp + 2;
                    final_mant = tmp[8:2];
                end else if (tmp[8] == 1) begin
                    final_exp = max_exp + 1;
                    final_mant = tmp[7:1];
                end else begin
                    // Normalize - unrolled loop
                    Bit#(8) shift_count = 0;
                    
                    if (tmp[7] == 0 && tmp != 0) begin
                        tmp = tmp << 1; shift_count = shift_count + 1;
                        if (tmp[7] == 0 && tmp != 0) begin
                            tmp = tmp << 1; shift_count = shift_count + 1;
                            if (tmp[7] == 0 && tmp != 0) begin
                                tmp = tmp << 1; shift_count = shift_count + 1;
                                if (tmp[7] == 0 && tmp != 0) begin
                                    tmp = tmp << 1; shift_count = shift_count + 1;
                                    if (tmp[7] == 0 && tmp != 0) begin
                                        tmp = tmp << 1; shift_count = shift_count + 1;
                                        if (tmp[7] == 0 && tmp != 0) begin
                                            tmp = tmp << 1; shift_count = shift_count + 1;
                                            if (tmp[7] == 0 && tmp != 0) begin
                                                tmp = tmp << 1; shift_count = shift_count + 1;
                                                if (tmp[7] == 0 && tmp != 0) begin
                                                    tmp = tmp << 1; shift_count = shift_count + 1;
                                                end
                                            end
                                        end
                                    end
                                end
                            end
                        end
                    end
                    
                    final_exp = max_exp - shift_count;
                    final_mant = tmp[6:0];
                end

                // Assemble result
                BF16 result = BF16 { 
                    sign: result_sign, 
                    exp: final_exp, 
                    mantissa: final_mant 
                };
                result_raw = fromBF16(result);
            end
        end

        return result_raw;
    endmethod
endmodule

// BF16 Adder interface
interface BF16AdderIFC;
    method Bit#(16) add(Bit#(16) a, Bit#(16) b);
endinterface

module mkBF16Adder (BF16AdderIFC);
    method Bit#(16) add(Bit#(16) a_raw, Bit#(16) b_raw);
        BF16 a = toBF16(a_raw);
        BF16 b = toBF16(b_raw);
        Bit#(16) result_raw;
        
        if ((a.exp == 0 && a.mantissa == 0)) 
            result_raw = b_raw;
        else if ((b.exp == 0 && b.mantissa == 0)) 
            result_raw = a_raw;
        else begin
            BF16 bigger;
            BF16 smaller;
            Bit#(8) bigger_m;
            Bit#(8) smaller_m;
            Bit#(8) exp_diff;
            
            if (a.exp >= b.exp) begin
                bigger = a; smaller = b;
                exp_diff = a.exp - b.exp;
                bigger_m = {1'b1, a.mantissa};
                smaller_m = ({1'b1, b.mantissa} >> exp_diff);
            end else begin
                bigger = b; smaller = a;
                exp_diff = b.exp - a.exp;
                bigger_m = {1'b1, b.mantissa};
                smaller_m = ({1'b1, a.mantissa} >> exp_diff);
            end
            
            Bit#(9) man_result;
            Bit#(1) result_sign;
            
            if (a.sign == b.sign) begin
                man_result = zeroExtend(bigger_m) + zeroExtend(smaller_m);
                result_sign = bigger.sign;
            end else begin
                if (bigger_m >= smaller_m) begin
                    man_result = zeroExtend(bigger_m) - zeroExtend(smaller_m);
                    result_sign = bigger.sign;
                end else begin
                    man_result = zeroExtend(smaller_m) - zeroExtend(bigger_m);
                    result_sign = smaller.sign;
                end
            end
            
            Bit#(8) final_exp = bigger.exp;
            Bit#(7) final_mant;
            Bit#(9) tmp = man_result;
            
            if (tmp[8] == 1) begin
                final_exp = bigger.exp + 1;
                final_mant = tmp[7:1];
            end else begin
                Bit#(8) shift_count = 0;
                if (tmp[7] == 0 && tmp != 0) begin
                    tmp = tmp << 1; shift_count = shift_count + 1;
                    if (tmp[7] == 0 && tmp != 0) begin
                        tmp = tmp << 1; shift_count = shift_count + 1;
                        if (tmp[7] == 0 && tmp != 0) begin
                            tmp = tmp << 1; shift_count = shift_count + 1;
                            if (tmp[7] == 0 && tmp != 0) begin
                                tmp = tmp << 1; shift_count = shift_count + 1;
                                if (tmp[7] == 0 && tmp != 0) begin
                                    tmp = tmp << 1; shift_count = shift_count + 1;
                                    if (tmp[7] == 0 && tmp != 0) begin
                                        tmp = tmp << 1; shift_count = shift_count + 1;
                                        if (tmp[7] == 0 && tmp != 0) begin
                                            tmp = tmp << 1; shift_count = shift_count + 1;
                                            if (tmp[7] == 0 && tmp != 0) begin
                                                tmp = tmp << 1; shift_count = shift_count + 1;
                                            end
                                        end
                                    end
                                end
                            end
                        end
                    end
                end
                final_exp = bigger.exp - shift_count;
                final_mant = tmp[6:0];
            end
            
            BF16 result = BF16 { sign: result_sign, exp: final_exp, mantissa: final_mant };
            result_raw = fromBF16(result);
        end
        
        return result_raw;
    endmethod
endmodule

// BF16 Multiplier interface
interface BF16MultiplierIFC;
    method Bit#(16) multiply(Bit#(16) a, Bit#(16) b);
endinterface

module mkBF16Multiplier (BF16MultiplierIFC);
    method Bit#(16) multiply(Bit#(16) a_raw, Bit#(16) b_raw);
        // Direct bit manipulation
        Bit#(1) a_sign = a_raw[15];
        Bit#(8) a_exp = a_raw[14:7];
        Bit#(7) a_mant = a_raw[6:0];
        
        Bit#(1) b_sign = b_raw[15];
        Bit#(8) b_exp = b_raw[14:7];
        Bit#(7) b_mant = b_raw[6:0];
        
        // Result sign
        Bit#(1) res_sign = a_sign ^ b_sign;
        
        // Check for zero
        Bool a_zero = (a_exp == 0 && a_mant == 0);
        Bool b_zero = (b_exp == 0 && b_mant == 0);
        
        Bit#(16) result;
        
        if (a_zero || b_zero) begin
            result = {res_sign, 15'b0};
        end else begin
            // Determine if inputs are denormal
            Bool a_denorm = (a_exp == 0);
            Bool b_denorm = (b_exp == 0);
            
            // Mantissa with correct implicit bit
            Bit#(8) a_full_mant = a_denorm ? {1'b0, a_mant} : {1'b1, a_mant};
            Bit#(8) b_full_mant = b_denorm ? {1'b0, b_mant} : {1'b1, b_mant};
            
            // Multiply mantissas
            Bit#(16) mant_prod = zeroExtend(a_full_mant) * zeroExtend(b_full_mant);
            
            // Exponent calculation with denormal handling
            Bit#(9) a_exp_eff = a_denorm ? 9'd1 : zeroExtend(a_exp);
            Bit#(9) b_exp_eff = b_denorm ? 9'd1 : zeroExtend(b_exp);
            Bit#(9) exp_sum = a_exp_eff + b_exp_eff;
            
            // Adjust for bias
            Bit#(10) exp_temp = zeroExtend(exp_sum);
            Bit#(10) bias_10 = 10'd127;
            Bit#(10) raw_exp_10 = exp_temp - bias_10;
            
            // Normalize mantissa and adjust exponent
            Bit#(10) final_exp_10;
            Bit#(7) final_mant;
            
            if (mant_prod[15] == 1'b1) begin
                final_exp_10 = raw_exp_10 + 1;
                final_mant = mant_prod[14:8];
            end else if (mant_prod[14] == 1'b1) begin
                final_exp_10 = raw_exp_10;
                final_mant = mant_prod[13:7];
            end else begin
                // Normalize - unrolled loop
                Bit#(10) shifted_exp = raw_exp_10;
                Bit#(16) shifted_mant = mant_prod;
                
                if (shifted_mant[13] == 0 && shifted_mant != 0) begin
                    shifted_mant = shifted_mant << 1; shifted_exp = shifted_exp - 1;
                    if (shifted_mant[13] == 0 && shifted_mant != 0) begin
                        shifted_mant = shifted_mant << 1; shifted_exp = shifted_exp - 1;
                        if (shifted_mant[13] == 0 && shifted_mant != 0) begin
                            shifted_mant = shifted_mant << 1; shifted_exp = shifted_exp - 1;
                            if (shifted_mant[13] == 0 && shifted_mant != 0) begin
                                shifted_mant = shifted_mant << 1; shifted_exp = shifted_exp - 1;
                                if (shifted_mant[13] == 0 && shifted_mant != 0) begin
                                    shifted_mant = shifted_mant << 1; shifted_exp = shifted_exp - 1;
                                    if (shifted_mant[13] == 0 && shifted_mant != 0) begin
                                        shifted_mant = shifted_mant << 1; shifted_exp = shifted_exp - 1;
                                        if (shifted_mant[13] == 0 && shifted_mant != 0) begin
                                            shifted_mant = shifted_mant << 1; shifted_exp = shifted_exp - 1;
                                            if (shifted_mant[13] == 0 && shifted_mant != 0) begin
                                                shifted_mant = shifted_mant << 1; shifted_exp = shifted_exp - 1;
                                                if (shifted_mant[13] == 0 && shifted_mant != 0) begin
                                                    shifted_mant = shifted_mant << 1; shifted_exp = shifted_exp - 1;
                                                    if (shifted_mant[13] == 0 && shifted_mant != 0) begin
                                                        shifted_mant = shifted_mant << 1; shifted_exp = shifted_exp - 1;
                                                        if (shifted_mant[13] == 0 && shifted_mant != 0) begin
                                                            shifted_mant = shifted_mant << 1; shifted_exp = shifted_exp - 1;
                                                            if (shifted_mant[13] == 0 && shifted_mant != 0) begin
                                                                shifted_mant = shifted_mant << 1; shifted_exp = shifted_exp - 1;
                                                                if (shifted_mant[13] == 0 && shifted_mant != 0) begin
                                                                    shifted_mant = shifted_mant << 1; shifted_exp = shifted_exp - 1;
                                                                end
                                                            end
                                                        end
                                                    end
                                                end
                                            end
                                        end
                                    end
                                end
                            end
                        end
                    end
                end
                
                final_exp_10 = shifted_exp;
                final_mant = shifted_mant[13:7];
            end
            
            // Handle exponent overflow/underflow
            Bit#(8) final_exp;
            
            if (final_exp_10[9] == 1'b1 || final_exp_10 == 0) begin
                if (final_exp_10 == 0) begin
                    final_exp = 8'b0;
                end else begin
                    final_exp = 8'b0;
                    final_mant = 7'b0;
                end
            end else if (final_exp_10 >= 10'd255) begin
                final_exp = 8'hFF;
                final_mant = 7'b0;
            end else begin
                final_exp = truncate(final_exp_10);
            end
            
            result = {res_sign, final_exp, final_mant};
        end
        
        return result;
    endmethod
endmodule

// BF16 Subtractor interface
interface BF16SubIFC;
    method Bit#(16) sub(Bit#(16) a, Bit#(16) b);
endinterface

module mkBF16Sub (BF16SubIFC);
    BF16AdderIFC adder <- mkBF16Adder();
    
    method Bit#(16) sub(Bit#(16) a, Bit#(16) b);
        // Subtraction: a - b = a + (-b)
        Bit#(16) neg_b = negateBF16(b);
        return adder.add(a, neg_b);
    endmethod
endmodule

endpackage
