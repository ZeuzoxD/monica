package BF16ExpCore;

import Vector::*;
import BF16::*;

typedef Int#(16) Int16;


BF16 c1_val = toBF16(16'h41B9);
BF16 c2_val = toBF16(16'h3D31);
BF16 one_val = toBF16(16'h3f80);

function Vector#(16, BF16) init_lut();
  Vector#(16, BF16) v;
  v[0] = toBF16(16'h3F80);
  v[1] = toBF16(16'h3F75);
  v[2] = toBF16(16'h3F6B);
  v[3] = toBF16(16'h3F61);
  v[4] = toBF16(16'h3F57);

  v[5] = toBF16(16'h3F4E);
  v[6] = toBF16(16'h3F46);
  v[7] = toBF16(16'h3F3D);

  v[8] = toBF16(16'h3F35);
  v[9] = toBF16(16'h3F2E);
  v[10] = toBF16(16'h3F26);
  v[11] = toBF16(16'h3F1F);
  v[12] = toBF16(16'h3F18);
  v[13] = toBF16(16'h3F12);
  v[14] = toBF16(16'h3F0C);
  v[15] = toBF16(16'h3F06);
  return v;
endfunction


Vector#(16, BF16) lut_vals = init_lut();


function BF16 power2BF16 (Int16 m);
  BF16 result;

  Int#(16) exp_bits = 127 - m;

  if (exp_bits <= 0) begin
    result = toBF16(16'h0000);  // zero

  end else if (exp_bits >= 255) begin
    result = toBF16(16'h7F80); // Infinity
  end else begin
    result = BF16 {
      sign: 1'b0,

      exp: pack(exp_bits)[7:0],
      mantissa: 7'h00
    };
  end
  return result;
endfunction

function BF16 intToBF16(Int16 val);
  BF16 result = BF16 {sign: 1'b0, exp: 8'h00, mantissa: 7'h00};
  
  if (val != 0) begin
    Bool sign = (val < 0);
    Bit#(16) abs_val = pack(sign ? -val : val);

    // Find leading 1 position

    Int16 leading_pos = 0;
    for (Int16 i = 15; i >= 0; i = i - 1) begin
      if (abs_val[i] == 1'b1 && leading_pos == 0) begin
        leading_pos = i;
      end
    end

    Int16 exp = leading_pos + 127;
    if (exp > 0 && exp < 255) begin
      Bit#(16) normalized = abs_val << (15 - leading_pos);
      Bit#(7) mantissa = normalized[14:8];
      
      result = BF16 {
        sign: pack(sign),
        exp: pack(exp)[7:0],
        mantissa: mantissa
      };
    end
  end
  return result;
endfunction

function Int16 bf16ToInt (BF16 bf16_val);
  Int16 result;
  Bit#(16) bf16_bits = fromBF16(bf16_val);
  

  if (bf16_bits == 16'h0000) begin

    result = 0;
  end else begin
    Bool sign = (bf16_val.sign == 1'b1);
    Int16 exponent = unpack(zeroExtend(bf16_val.exp)) - 127;

    if (exponent < 0) begin
      result = 0;
    end else if (exponent >= 15) begin
      result = sign ? -32768 : 32767;

    end else begin
      Bit#(16) mantissa_with_implicit = {1'b1, bf16_val.mantissa, 8'b0};
      Int16 shift_amount = 15 - exponent;
      

      if (shift_amount > 0) begin

        Bit#(16) integer_part = mantissa_with_implicit >> shift_amount;
        Bool should_round_up = mantissa_with_implicit[shift_amount - 1] == 1'b1;


        Int16 temp_result = unpack(integer_part);
        if (should_round_up) temp_result = temp_result + 1;
        result = sign ? -temp_result : temp_result;

      end else begin
        Bit#(16) integer_part = mantissa_with_implicit << (-shift_amount);

        Int16 temp_result = unpack(integer_part);
        result = sign ? -temp_result : temp_result;
      end
    end
  end
  return result;
endfunction

typedef struct {
  BF16 data;
  Bool valid;
} PipelineStage deriving (Bits, Eq);

interface BF16Exp;
  method Action put_data(BF16 data);
  method ActionValue#(BF16) getResult();
  method Bool hasResult();
endinterface

(* synthesize *)

module mkBF16Exp(BF16Exp);
  BF16SubIFC subtractor1 <- mkBF16Sub;
  BF16SubIFC subtractor2 <- mkBF16Sub;
  
  BF16MultiplierIFC mult1 <- mkBF16Multiplier;
  BF16MultiplierIFC mult2 <- mkBF16Multiplier;
  BF16MultiplierIFC mult3 <- mkBF16Multiplier;
  BF16MultiplierIFC mult4 <- mkBF16Multiplier;

  Reg#(PipelineStage) stage1 <- mkReg(PipelineStage{data: toBF16(16'h0000), valid: False});
  Reg#(PipelineStage) stage2 <- mkReg(PipelineStage{data: toBF16(16'h0000), valid: False});
  Reg#(PipelineStage) stage3 <- mkReg(PipelineStage{data: toBF16(16'h0000), valid: False});

  Reg#(PipelineStage) stage4 <- mkReg(PipelineStage{data: toBF16(16'h0000), valid: False});

  Reg#(BF16) s1_zc1 <- mkRegU;
  Reg#(BF16) s1_input_z <- mkRegU;

  Reg#(Int16) s2_n <- mkRegU;
  Reg#(BF16) s2_input_z <- mkRegU;
  Reg#(BF16) s2_y <- mkRegU;

  Reg#(Int16) s3_n <- mkRegU;
  Reg#(BF16) s3_y <- mkRegU;
  Reg#(BF16) s3_x <- mkRegU;

  Reg#(BF16) result_data <- mkRegU;
  Reg#(Bool) result_valid <- mkReg(False);

  // STAGE 1: Input & first multiply (z * c1)
  rule pipeline_stage1;

    if (stage1.valid) begin
      BF16 zc1 = toBF16(mult1.multiply(fromBF16(stage1.data), fromBF16(c1_val)));
      s1_zc1 <= zc1;
      s1_input_z <= stage1.data;
      stage2 <= PipelineStage{data: stage1.data, valid: True};
    end else begin
      stage2 <= PipelineStage{data: toBF16(16'h0000), valid: False};
    end
  endrule

  // STAGE 2: Convert to int N, compute j,m, LUT lookup, compute F1, F2, Y
  rule pipeline_stage2;
    if (stage2.valid) begin
      Int16 n = bf16ToInt(s1_zc1);

      Int16 j_raw = n % 16;
      Int16 j = (j_raw < 0) ? (j_raw + 16) : j_raw;
      Int16 m = (n - j) / 16;

      
      UInt#(4) j_idx = unpack(pack(j)[3:0]);
      BF16 f2 = lut_vals[j_idx];
      BF16 f1 = power2BF16(m);

      BF16 y = toBF16(mult2.multiply(fromBF16(f1), fromBF16(f2)));
      s2_n <= n;
      s2_input_z <= s1_input_z;
      s2_y <= y;
      stage3 <= PipelineStage{data: stage2.data, valid: True};
    end else begin

      stage3 <= PipelineStage{data: toBF16(16'h0000), valid: False};
    end
  endrule

  // STAGE 3: Compute correction term zn, residual r, and X
  rule pipeline_stage3;
    if (stage3.valid) begin
      BF16 n_bf16 = intToBF16(s2_n);
      BF16 zn = toBF16(mult3.multiply(fromBF16(n_bf16), fromBF16(c2_val)));
      
      // r = z - zn
      BF16 r = toBF16(subtractor1.sub(fromBF16(s2_input_z), fromBF16(zn)));
      
      // x = 1 - r
      BF16 x = toBF16(subtractor2.sub(fromBF16(one_val), fromBF16(r)));
      
      s3_n <= s2_n;
      s3_y <= s2_y;

      s3_x <= x;
      stage4 <= PipelineStage{data: stage3.data, valid: True};
    end else begin
      stage4 <= PipelineStage{data: toBF16(16'h0000), valid: False};
    end

  endrule

  // STAGE 4: Final multiply and output

  rule pipeline_stage4;
    if (stage4.valid) begin
      BF16 final_result = toBF16(mult4.multiply(fromBF16(s3_y), fromBF16(s3_x)));
      result_data <= final_result;
      result_valid <= True;
    end else if (result_valid) begin
      result_valid <= False;
    end
  endrule


  method Action put_data(BF16 data);
    stage1 <= PipelineStage{data: data, valid: True};
  endmethod

  method ActionValue#(BF16) getResult() if (result_valid);

    return result_data;
  endmethod

  method Bool hasResult();
    return result_valid;
  endmethod
endmodule

endpackage

