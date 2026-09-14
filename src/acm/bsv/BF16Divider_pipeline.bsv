package BF16Divider_pipeline;

import Vector::*;
import BF16::*;

function Vector#(128, BF16) lookup();
  Vector#(128, BF16) v;
  v[0] = toBF16(16'h3F80);
  v[1] = toBF16(16'h3F7E);
  v[2] = toBF16(16'h3F7C);
  v[3] = toBF16(16'h3F7A);
  v[4] = toBF16(16'h3F78);
  v[5] = toBF16(16'h3F76);
  v[6] = toBF16(16'h3F74);
  v[7] = toBF16(16'h3F72);
  v[8] = toBF16(16'h3F70);
  v[9] = toBF16(16'h3F6F);
  v[10] = toBF16(16'h3F6D);
  v[11] = toBF16(16'h3F6B);
  v[12] = toBF16(16'h3F6A);
  v[13] = toBF16(16'h3F68);
  v[14] = toBF16(16'h3F66);
  v[15] = toBF16(16'h3F65);
  v[16] = toBF16(16'h3F63);
  v[17] = toBF16(16'h3F62);
  v[18] = toBF16(16'h3F60);
  v[19] = toBF16(16'h3F5E);
  v[20] = toBF16(16'h3F5D);
  v[21] = toBF16(16'h3F5B);
  v[22] = toBF16(16'h3F5A);
  v[23] = toBF16(16'h3F59);
  v[24] = toBF16(16'h3F57);
  v[25] = toBF16(16'h3F56);
  v[26] = toBF16(16'h3F54);
  v[27] = toBF16(16'h3F53);
  v[28] = toBF16(16'h3F52);
  v[29] = toBF16(16'h3F50);
  v[30] = toBF16(16'h3F4F);
  v[31] = toBF16(16'h3F4E);
  v[32] = toBF16(16'h3F4C);
  v[33] = toBF16(16'h3F4B);
  v[34] = toBF16(16'h3F4A);
  v[35] = toBF16(16'h3F49);
  v[36] = toBF16(16'h3F47);
  v[37] = toBF16(16'h3F46);
  v[38] = toBF16(16'h3F45);
  v[39] = toBF16(16'h3F44);
  v[40] = toBF16(16'h3F43);
  v[41] = toBF16(16'h3F41);
  v[42] = toBF16(16'h3F40);
  v[43] = toBF16(16'h3F3F);
  v[44] = toBF16(16'h3F3E);
  v[45] = toBF16(16'h3F3D);
  v[46] = toBF16(16'h3F3C);
  v[47] = toBF16(16'h3F3B);
  v[48] = toBF16(16'h3F3A);
  v[49] = toBF16(16'h3F39);
  v[50] = toBF16(16'h3F38);
  v[51] = toBF16(16'h3F37);
  v[52] = toBF16(16'h3F36);
  v[53] = toBF16(16'h3F35);
  v[54] = toBF16(16'h3F34);
  v[55] = toBF16(16'h3F33);
  v[56] = toBF16(16'h3F32);
  v[57] = toBF16(16'h3F31);
  v[58] = toBF16(16'h3F30);
  v[59] = toBF16(16'h3F2F);
  v[60] = toBF16(16'h3F2E);
  v[61] = toBF16(16'h3F2D);
  v[62] = toBF16(16'h3F2C);
  v[63] = toBF16(16'h3F2B);
  v[64] = toBF16(16'h3F2A);
  v[65] = toBF16(16'h3F29);
  v[66] = toBF16(16'h3F28);
  v[67] = toBF16(16'h3F28);
  v[68] = toBF16(16'h3F27);
  v[69] = toBF16(16'h3F26);
  v[70] = toBF16(16'h3F25);
  v[71] = toBF16(16'h3F24);
  v[72] = toBF16(16'h3F23);
  v[73] = toBF16(16'h3F23);
  v[74] = toBF16(16'h3F22);
  v[75] = toBF16(16'h3F21);
  v[76] = toBF16(16'h3F20);
  v[77] = toBF16(16'h3F1F);
  v[78] = toBF16(16'h3F1F);
  v[79] = toBF16(16'h3F1E);
  v[80] = toBF16(16'h3F1D);
  v[81] = toBF16(16'h3F1C);
  v[82] = toBF16(16'h3F1C);
  v[83] = toBF16(16'h3F1B);
  v[84] = toBF16(16'h3F1A);
  v[85] = toBF16(16'h3F19);
  v[86] = toBF16(16'h3F19);
  v[87] = toBF16(16'h3F18);
  v[88] = toBF16(16'h3F17);
  v[89] = toBF16(16'h3F17);
  v[90] = toBF16(16'h3F16);
  v[91] = toBF16(16'h3F15);
  v[92] = toBF16(16'h3F14);
  v[93] = toBF16(16'h3F14);
  v[94] = toBF16(16'h3F13);
  v[95] = toBF16(16'h3F12);
  v[96] = toBF16(16'h3F12);
  v[97] = toBF16(16'h3F11);
  v[98] = toBF16(16'h3F11);
  v[99] = toBF16(16'h3F10);
  v[100] = toBF16(16'h3F0F);
  v[101] = toBF16(16'h3F0F);
  v[102] = toBF16(16'h3F0E);
  v[103] = toBF16(16'h3F0D);
  v[104] = toBF16(16'h3F0D);
  v[105] = toBF16(16'h3F0C);
  v[106] = toBF16(16'h3F0C);
  v[107] = toBF16(16'h3F0B);
  v[108] = toBF16(16'h3F0A);
  v[109] = toBF16(16'h3F0A);
  v[110] = toBF16(16'h3F09);
  v[111] = toBF16(16'h3F09);
  v[112] = toBF16(16'h3F08);
  v[113] = toBF16(16'h3F07);
  v[114] = toBF16(16'h3F07);
  v[115] = toBF16(16'h3F06);
  v[116] = toBF16(16'h3F06);
  v[117] = toBF16(16'h3F05);
  v[118] = toBF16(16'h3F05);
  v[119] = toBF16(16'h3F04);
  v[120] = toBF16(16'h3F04);
  v[121] = toBF16(16'h3F03);
  v[122] = toBF16(16'h3F03);
  v[123] = toBF16(16'h3F02);
  v[124] = toBF16(16'h3F02);
  v[125] = toBF16(16'h3F01);
  v[126] = toBF16(16'h3F01);
  v[127] = toBF16(16'h3F00);
  return v;
endfunction


// Pipeline stage structure - exactly like sigmoid
typedef struct {
   Bit#(16) a;
   Bit#(16) b;
   Bool valid;
} PipelineStage deriving (Bits, Eq);

interface BF16DividerIFC;
  method Action put_data(Bit#(16) a, Bit#(16) b);
  method ActionValue#(Bit#(16)) getResult();
  method Bool hasResult();
endinterface

(*synthesize*)
module mkBF16Divider (BF16DividerIFC);
  // Three separate multiplier instances - one for each multiplication
  BF16MultiplierIFC mult1 <- mkBF16Multiplier();  // Stage 2: a * r
  BF16MultiplierIFC mult2 <- mkBF16Multiplier();  // Stage 2: b * r
  BF16MultiplierIFC mult3 <- mkBF16Multiplier();  // Stage 4: x_new * r_new
  BF16SubIFC sub <- mkBF16Sub();
  
  Vector#(128, BF16) lut_table = lookup();
  
  // Pipeline stage registers - exactly like sigmoid
  Reg#(PipelineStage) stage1 <- mkReg(PipelineStage{a: 16'h0000, b: 16'h0000, valid: False});
  Reg#(PipelineStage) stage2 <- mkReg(PipelineStage{a: 16'h0000, b: 16'h0000, valid: False});
  Reg#(PipelineStage) stage3 <- mkReg(PipelineStage{a: 16'h0000, b: 16'h0000, valid: False});
  Reg#(PipelineStage) stage4 <- mkReg(PipelineStage{a: 16'h0000, b: 16'h0000, valid: False});
  
  // Intermediate computation registers for stage 1
  Reg#(Bool) s1_is_special <- mkRegU;
  Reg#(Bit#(16)) s1_special_result <- mkRegU;
  Reg#(Bit#(1)) s1_result_sign <- mkRegU;
  Reg#(Bit#(16)) s1_a_abs <- mkRegU;
  Reg#(Bit#(16)) s1_b_abs <- mkRegU;
  Reg#(Bit#(16)) s1_r <- mkRegU;
  
  // Intermediate computation registers for stage 2
  Reg#(Bool) s2_is_special <- mkRegU;
  Reg#(Bit#(16)) s2_special_result <- mkRegU;
  Reg#(Bit#(1)) s2_result_sign <- mkRegU;
  Reg#(Bit#(16)) s2_x_new <- mkRegU;
  Reg#(Bit#(16)) s2_y_new <- mkRegU;
  
  // Intermediate computation registers for stage 3
  Reg#(Bool) s3_is_special <- mkRegU;
  Reg#(Bit#(16)) s3_special_result <- mkRegU;
  Reg#(Bit#(1)) s3_result_sign <- mkRegU;
  Reg#(Bit#(16)) s3_r_new <- mkRegU;
  Reg#(Bit#(16)) s3_x_new <- mkRegU;
  
  // Result registers
  Reg#(Bit#(16)) result_data <- mkRegU;
  Reg#(Bool) result_valid <- mkReg(False);
  
  // Stage 1: Check special cases, LUT lookup, compute initial reciprocal
  rule pipeline_stage1;
    if (stage1.valid) begin
      BF16 a = toBF16(stage1.a);
      BF16 b = toBF16(stage1.b);
      
      Bool a_zero = (a.exp == 0);
      Bool b_zero = (b.exp == 0);
      Bool is_special = a_zero || b_zero;
      
      Bit#(16) special_result = 16'h0000;
      if (b_zero) begin
        special_result = a_zero ? {1'b0, 8'hFF, 7'b1} : {a.sign ^ b.sign, 8'hFF, 7'b0};
      end else if (a_zero) begin
        special_result = {a.sign ^ b.sign, 8'b0, 7'b0};
      end
      
      Bit#(1) result_sign = a.sign ^ b.sign;
      Bit#(16) a_abs = {1'b0, a.exp, a.mantissa};
      Bit#(16) b_abs = {1'b0, b.exp, b.mantissa};
      
      Bit#(7) b_mant_idx = b.mantissa;
      BF16 lut_recip = lut_table[b_mant_idx];
      
      Int#(9) lut_exp_signed = unpack({1'b0, lut_recip.exp});
      Int#(9) b_exp_signed = unpack({1'b0, b.exp});
      Int#(9) recip_exp_signed = lut_exp_signed - b_exp_signed + 127;
      Bit#(8) recip_exp = truncate(pack(recip_exp_signed));
      
      Bit#(16) r = fromBF16(BF16 {
        sign: 1'b0,
        exp: recip_exp,
        mantissa: lut_recip.mantissa
      });
      
      s1_is_special <= is_special;
      s1_special_result <= special_result;
      s1_result_sign <= result_sign;
      s1_a_abs <= a_abs;
      s1_b_abs <= b_abs;
      s1_r <= r;
      
      stage2 <= PipelineStage{a: stage1.a, b: stage1.b, valid: True};
    end else begin
      stage2 <= PipelineStage{a: 16'h0000, b: 16'h0000, valid: False};
    end
  endrule
  
  // Stage 2: First Goldschmidt iteration (x_new = a*r, y_new = b*r)
  rule pipeline_stage2;
    if (stage2.valid) begin
      if (s1_is_special) begin
        s2_is_special <= True;
        s2_special_result <= s1_special_result;
        s2_result_sign <= s1_result_sign;
        s2_x_new <= 16'h0000;
        s2_y_new <= 16'h0000;
      end else begin
        // Use separate multiplier instances
        Bit#(16) x_new = mult1.multiply(s1_a_abs, s1_r);
        Bit#(16) y_new = mult2.multiply(s1_b_abs, s1_r);
        
        s2_is_special <= False;
        s2_special_result <= 16'h0000;
        s2_result_sign <= s1_result_sign;
        s2_x_new <= x_new;
        s2_y_new <= y_new;
      end
      
      stage3 <= PipelineStage{a: stage2.a, b: stage2.b, valid: True};
    end else begin
      stage3 <= PipelineStage{a: 16'h0000, b: 16'h0000, valid: False};
    end
  endrule
  
  // Stage 3: Compute r_new = 2 - y_new
  rule pipeline_stage3;
    if (stage3.valid) begin
      if (s2_is_special) begin
        s3_is_special <= True;
        s3_special_result <= s2_special_result;
        s3_result_sign <= s2_result_sign;
        s3_r_new <= 16'h0000;
        s3_x_new <= 16'h0000;
      end else begin
        Bit#(16) two = 16'h4000;
        Bit#(16) r_new = sub.sub(two, s2_y_new);
        
        s3_is_special <= False;
        s3_special_result <= 16'h0000;
        s3_result_sign <= s2_result_sign;
        s3_r_new <= r_new;
        s3_x_new <= s2_x_new;
      end
      
      stage4 <= PipelineStage{a: stage3.a, b: stage3.b, valid: True};
    end else begin
      stage4 <= PipelineStage{a: 16'h0000, b: 16'h0000, valid: False};
    end
  endrule
  
  // Stage 4: Final multiplication and sign application
  rule pipeline_stage4;
    if (stage4.valid) begin
      Bit#(16) final_result;
      
      if (s3_is_special) begin
        final_result = s3_special_result;
      end else begin
        // Use third multiplier instance
        Bit#(16) result_abs = mult3.multiply(s3_x_new, s3_r_new);
        BF16 result_bf16 = toBF16(result_abs);
        final_result = {s3_result_sign, result_bf16.exp, result_bf16.mantissa};
      end
      
      result_data <= final_result;
      result_valid <= True;
    end else if (result_valid) begin
      result_valid <= False;
    end
  endrule
  
  method Action put_data(Bit#(16) a, Bit#(16) b);
    stage1 <= PipelineStage{a: a, b: b, valid: True};
  endmethod
  
  method ActionValue#(Bit#(16)) getResult() if (result_valid);
    return result_data;
  endmethod
  
  method Bool hasResult();
    return result_valid;
  endmethod
endmodule

endpackage

