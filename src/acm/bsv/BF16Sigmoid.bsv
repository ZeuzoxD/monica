package BF16Sigmoid;

import Vector::*;
import BF16::*;

typedef struct {
   BF16 data;
   Bool valid;
} PipelineStage deriving (Bits, Eq);

interface BF16SigmoidIfc;
    method Action put_data(BF16 data);
    method ActionValue#(BF16) getResult();
    method Bool hasResult();
endinterface

(* synthesize *)
module mkBF16Sigmoid(BF16SigmoidIfc);

   Reg#(PipelineStage) stage1 <- mkReg(PipelineStage{data: toBF16(16'h0000), valid: False});
   Reg#(PipelineStage) stage2 <- mkReg(PipelineStage{data: toBF16(16'h0000), valid: False});
   Reg#(PipelineStage) stage3 <- mkReg(PipelineStage{data: toBF16(16'h0000), valid: False});
   Reg#(PipelineStage) stage4 <- mkReg(PipelineStage{data: toBF16(16'h0000), valid: False});

   Reg#(Bool) s1_sign <- mkRegU;
   Reg#(Bit#(8)) s1_exp <- mkRegU;
   Reg#(Bit#(7)) s1_man <- mkRegU;
   
   Reg#(Bit#(8)) s2_new_exp <- mkRegU;
   Reg#(Bool) s2_sign <- mkRegU;
   Reg#(Bit#(8)) s2_exp <- mkRegU;
   Reg#(Bit#(7)) s2_man <- mkRegU;

   Reg#(Bit#(7)) s3_new_man <- mkRegU;
   Reg#(Bit#(8)) s3_new_exp <- mkRegU;

   Reg#(BF16) result_data <- mkRegU;
   Reg#(Bool) result_valid <- mkReg(False);

   rule pipeline_stage1;
      if (stage1.valid) begin
         s1_sign <= unpack(stage1.data.sign);
         s1_exp <= stage1.data.exp;
         s1_man <= stage1.data.mantissa;

         stage2 <= PipelineStage{data: stage1.data, valid: True};
      end else begin
         stage2 <= PipelineStage{data: toBF16(16'h0000), valid: False};
      end
   endrule

   rule pipeline_stage2;
      if (stage2.valid) begin
         Bit#(8) new_exp = 8'd0;

         if (s1_exp > 129) begin
           new_exp = s1_sign ? 8'd0 : 8'd127;
        end
        else if (s1_exp == 129) begin
           if (s1_sign) begin
              if (s1_man[6] == 1'b0) begin
                 new_exp = 8'd121;
              end
              else if (s1_man[5] == 1'b0) begin  
                 new_exp = 8'd120;
              end
              else if (s1_man[4] == 1'b0) begin  
                 new_exp = 8'd119;
              end
              else if (s1_man[3] == 1'b0) begin  
                 new_exp = 8'd118;
              end
              else begin
                new_exp = 8'd0;
              end
           end
           else begin
            new_exp = 8'd126;
           end
        end
        else if (s1_exp == 128) begin
           new_exp = s1_sign ? ((s1_man[6] == 1'b1) ? 8'd122 : 8'd123) : 8'd126;  
        end
        else if (s1_exp == 127) begin
           new_exp = s1_sign ? 8'd124 : 8'd126;
        end
        else begin
           new_exp = s1_sign ? 8'd125 : 8'd126;
        end

        s2_new_exp <= new_exp;
        s2_sign <= s1_sign;
        s2_exp <= s1_exp;
        s2_man <= s1_man;

        stage3 <= PipelineStage{data: stage2.data, valid: True};
      end else begin
         stage3 <= PipelineStage{data: toBF16(16'h0000), valid: False};
      end
   endrule

   rule pipeline_stage3;
      if (stage3.valid) begin
         Bit#(7) new_man = 7'd0;

         if (s2_exp > 129) begin
            new_man = 7'd0;
         end
         else if (s2_exp == 129) begin
            new_man = s2_sign ? 7'd0 : {3'h7, s2_man[6:3]};
         end
         else if (s2_exp == 128) begin
            new_man = s2_sign ? ~s2_man[6:0] : {2'h3, s2_man[6:2]};
         end
         else if (s2_exp == 127) begin
            new_man = s2_sign ? ~s2_man[6:0] : {1'h1, s2_man[6:1]};
         end
         else if (s2_exp == 126) begin
            new_man = s2_sign ? {1'h0, ~s2_man[6:1]} : {2'h1, s2_man[6:2]};  
         end
         else if (s2_exp == 125) begin
            new_man = s2_sign ? {2'h3, ~s2_man[6:2]} : {3'h1, s2_man[6:3]}; 
         end
         else if (s2_exp == 124) begin
            new_man = s2_sign ? {3'h7, ~s2_man[6:3]} : {4'h1, s2_man[6:4]};  
         end
         else begin  // This covers all other cases (s2_exp < 124)
            new_man = s2_sign ? {4'hF, ~s2_man[6:4]} : {5'h1, s2_man[6:5]};
         end

         s3_new_man <= new_man;
         s3_new_exp <= s2_new_exp;

         stage4 <= PipelineStage{data: stage3.data, valid: True};
      end else begin
         stage4 <= PipelineStage{data: toBF16(16'h0000), valid: False};
      end
   endrule

   rule pipeline_stage4;
      if (stage4.valid) begin
         BF16 result = toBF16(16'h0000);
         result.sign = pack(False); // Sigmoid is always positive
         result.exp = s3_new_exp;
         result.mantissa = s3_new_man;

         result_data <= result;
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

// Testbench
module mkBF16SigmoidTB(Empty);
    BF16SigmoidIfc dut <- mkBF16Sigmoid;
    
    // Test inputs for sigmoid function
    Vector#(500, BF16) test_inputs = newVector;
    test_inputs[0] = toBF16(16'h4087); // 4.2188
    test_inputs[1] = toBF16(16'h408A); // 4.3125
    test_inputs[2] = toBF16(16'h4075); // 3.8281
    test_inputs[3] = toBF16(16'h4043); // 3.0469
    test_inputs[4] = toBF16(16'h4018); // 2.3750
    test_inputs[5] = toBF16(16'h3F85); // 1.0391
    test_inputs[6] = toBF16(16'h408E); // 4.4375

    test_inputs[7] = toBF16(16'h4003); // 2.0469
    test_inputs[8] = toBF16(16'h4080); // 4.0000

    test_inputs[9] = toBF16(16'h3FDC); // 1.7188
    test_inputs[10] = toBF16(16'h4017); // 2.3594
    test_inputs[11] = toBF16(16'h4043); // 3.0469
    test_inputs[12] = toBF16(16'h4035); // 2.8281
    test_inputs[13] = toBF16(16'h4055); // 3.3281
    test_inputs[14] = toBF16(16'h403F); // 2.9844
    test_inputs[15] = toBF16(16'h4061); // 3.5156
    test_inputs[16] = toBF16(16'h3FC8); // 1.5625
    test_inputs[17] = toBF16(16'h3FCD); // 1.6016
    test_inputs[18] = toBF16(16'h3F8E); // 1.1094
    test_inputs[19] = toBF16(16'h4082); // 4.0625
    test_inputs[20] = toBF16(16'h3FF0); // 1.8750

    test_inputs[21] = toBF16(16'h4094); // 4.6250
    test_inputs[22] = toBF16(16'h4094); // 4.6250
    test_inputs[23] = toBF16(16'h3F92); // 1.1406
    test_inputs[24] = toBF16(16'h4082); // 4.0625
    test_inputs[25] = toBF16(16'h4073); // 3.7969
    test_inputs[26] = toBF16(16'h400B); // 2.1719

    test_inputs[27] = toBF16(16'h404E); // 3.2188
    test_inputs[28] = toBF16(16'h401F); // 2.4844
    test_inputs[29] = toBF16(16'h4097); // 4.7188
    test_inputs[30] = toBF16(16'h402F); // 2.7344
    test_inputs[31] = toBF16(16'h4031); // 2.7656

    test_inputs[32] = toBF16(16'h4095); // 4.6562
    test_inputs[33] = toBF16(16'h401C); // 2.4375
    test_inputs[34] = toBF16(16'h4098); // 4.7500
    test_inputs[35] = toBF16(16'h4040); // 3.0000
    test_inputs[36] = toBF16(16'h4022); // 2.5312
    test_inputs[37] = toBF16(16'h3FFA); // 1.9531
    test_inputs[38] = toBF16(16'h3F81); // 1.0078
    test_inputs[39] = toBF16(16'h408B); // 4.3438
    test_inputs[40] = toBF16(16'h4016); // 2.3438
    test_inputs[41] = toBF16(16'h4016); // 2.3438
    test_inputs[42] = toBF16(16'h400C); // 2.1875
    test_inputs[43] = toBF16(16'h4001); // 2.0156
    test_inputs[44] = toBF16(16'h3F94); // 1.1562
    test_inputs[45] = toBF16(16'h3F98); // 1.1875
    test_inputs[46] = toBF16(16'h403B); // 2.9219
    test_inputs[47] = toBF16(16'h4093); // 4.5938
    test_inputs[48] = toBF16(16'h4051); // 3.2656
    test_inputs[49] = toBF16(16'h4098); // 4.7500
    test_inputs[50] = toBF16(16'h406B); // 3.6719
    test_inputs[51] = toBF16(16'h3FA0); // 1.2500
    test_inputs[52] = toBF16(16'h4058); // 3.3750
    test_inputs[53] = toBF16(16'h403C); // 2.9375
    test_inputs[54] = toBF16(16'h3F83); // 1.0234
    test_inputs[55] = toBF16(16'h402C); // 2.6875

    test_inputs[56] = toBF16(16'h4066); // 3.5938
    test_inputs[57] = toBF16(16'h4008); // 2.1250
    test_inputs[58] = toBF16(16'h406C); // 3.6875
    test_inputs[59] = toBF16(16'h4083); // 4.0938
    test_inputs[60] = toBF16(16'h4016); // 2.3438
    test_inputs[61] = toBF16(16'h4063); // 3.5469
    test_inputs[62] = toBF16(16'h4027); // 2.6094
    test_inputs[63] = toBF16(16'h4065); // 3.5781
    test_inputs[64] = toBF16(16'h404D); // 3.2031
    test_inputs[65] = toBF16(16'h4092); // 4.5625
    test_inputs[66] = toBF16(16'h4081); // 4.0312
    test_inputs[67] = toBF16(16'h408E); // 4.4375
    test_inputs[68] = toBF16(16'h3FC3); // 1.5234
    test_inputs[69] = toBF16(16'h3FA3); // 1.2734
    test_inputs[70] = toBF16(16'h4091); // 4.5312
    test_inputs[71] = toBF16(16'h4017); // 2.3594
    test_inputs[72] = toBF16(16'h4088); // 4.2500

    test_inputs[73] = toBF16(16'h4091); // 4.5312
    test_inputs[74] = toBF16(16'h408C); // 4.3750
    test_inputs[75] = toBF16(16'h3FE2); // 1.7656
    test_inputs[76] = toBF16(16'h403F); // 2.9844
    test_inputs[77] = toBF16(16'h4014); // 2.3125
    test_inputs[78] = toBF16(16'h4083); // 4.0938
    test_inputs[79] = toBF16(16'h4092); // 4.5625
    test_inputs[80] = toBF16(16'h406E); // 3.7188
    test_inputs[81] = toBF16(16'h4093); // 4.5938
    test_inputs[82] = toBF16(16'h3FD1); // 1.6328
    test_inputs[83] = toBF16(16'h404C); // 3.1875
    test_inputs[84] = toBF16(16'h4034); // 2.8125
    test_inputs[85] = toBF16(16'h4046); // 3.0938
    test_inputs[86] = toBF16(16'h4083); // 4.0938
    test_inputs[87] = toBF16(16'h407F); // 3.9844

    test_inputs[88] = toBF16(16'h403C); // 2.9375
    test_inputs[89] = toBF16(16'h402B); // 2.6719
    test_inputs[90] = toBF16(16'h3FF8); // 1.9375
    test_inputs[91] = toBF16(16'h408F); // 4.4688
    test_inputs[92] = toBF16(16'h4064); // 3.5625
    test_inputs[93] = toBF16(16'h4081); // 4.0312
    test_inputs[94] = toBF16(16'h400A); // 2.1562
    test_inputs[95] = toBF16(16'h3FD3); // 1.6484

    test_inputs[96] = toBF16(16'h408D); // 4.4062
    test_inputs[97] = toBF16(16'h409A); // 4.8125
    test_inputs[98] = toBF16(16'h3FA0); // 1.2500
    test_inputs[99] = toBF16(16'h409E); // 4.9375
    test_inputs[100] = toBF16(16'h4042); // 3.0312
    test_inputs[101] = toBF16(16'h3FB8); // 1.4375
    test_inputs[102] = toBF16(16'h3FF2); // 1.8906
    test_inputs[103] = toBF16(16'h4020); // 2.5000
    test_inputs[104] = toBF16(16'h4013); // 2.2969
    test_inputs[105] = toBF16(16'h408D); // 4.4062
    test_inputs[106] = toBF16(16'h409B); // 4.8438
    test_inputs[107] = toBF16(16'h4067); // 3.6094
    test_inputs[108] = toBF16(16'h3FB9); // 1.4453
    test_inputs[109] = toBF16(16'h4030); // 2.7500
    test_inputs[110] = toBF16(16'h4067); // 3.6094
    test_inputs[111] = toBF16(16'h4047); // 3.1094
    test_inputs[112] = toBF16(16'h4089); // 4.2812
    test_inputs[113] = toBF16(16'h4014); // 2.3125
    test_inputs[114] = toBF16(16'h4057); // 3.3594
    test_inputs[115] = toBF16(16'h3FF9); // 1.9453
    test_inputs[116] = toBF16(16'h3F99); // 1.1953
    test_inputs[117] = toBF16(16'h4070); // 3.7500

    test_inputs[118] = toBF16(16'h401E); // 2.4688
    test_inputs[119] = toBF16(16'h4047); // 3.1094
    test_inputs[120] = toBF16(16'h4004); // 2.0625
    test_inputs[121] = toBF16(16'h4035); // 2.8281
    test_inputs[122] = toBF16(16'h4030); // 2.7500
    test_inputs[123] = toBF16(16'h3FC9); // 1.5703
    test_inputs[124] = toBF16(16'h4037); // 2.8594
    test_inputs[125] = toBF16(16'h4000); // 2.0000
    test_inputs[126] = toBF16(16'h4083); // 4.0938
    test_inputs[127] = toBF16(16'h3FEF); // 1.8672
    test_inputs[128] = toBF16(16'h409C); // 4.8750
    test_inputs[129] = toBF16(16'h409C); // 4.8750

    test_inputs[130] = toBF16(16'h3FCC); // 1.5938
    test_inputs[131] = toBF16(16'h4057); // 3.3594
    test_inputs[132] = toBF16(16'h408A); // 4.3125
    test_inputs[133] = toBF16(16'h4084); // 4.1250
    test_inputs[134] = toBF16(16'h3FB2); // 1.3906

    test_inputs[135] = toBF16(16'h4042); // 3.0312
    test_inputs[136] = toBF16(16'h408F); // 4.4688
    test_inputs[137] = toBF16(16'h3FD5); // 1.6641
    test_inputs[138] = toBF16(16'h406F); // 3.7344
    test_inputs[139] = toBF16(16'h4087); // 4.2188
    test_inputs[140] = toBF16(16'h400C); // 2.1875
    test_inputs[141] = toBF16(16'h405C); // 3.4375
    test_inputs[142] = toBF16(16'h402C); // 2.6875
    test_inputs[143] = toBF16(16'h3FD1); // 1.6328
    test_inputs[144] = toBF16(16'h4096); // 4.6875
    test_inputs[145] = toBF16(16'h4049); // 3.1406
    test_inputs[146] = toBF16(16'h4036); // 2.8438
    test_inputs[147] = toBF16(16'h407C); // 3.9375
    test_inputs[148] = toBF16(16'h4078); // 3.8750
    test_inputs[149] = toBF16(16'h402F); // 2.7344
    test_inputs[150] = toBF16(16'h4090); // 4.5000
    test_inputs[151] = toBF16(16'h408C); // 4.3750
    test_inputs[152] = toBF16(16'h3F94); // 1.1562
    test_inputs[153] = toBF16(16'h403C); // 2.9375
    test_inputs[154] = toBF16(16'h4072); // 3.7812
    test_inputs[155] = toBF16(16'h4090); // 4.5000
    test_inputs[156] = toBF16(16'h401F); // 2.4844
    test_inputs[157] = toBF16(16'h4034); // 2.8125
    test_inputs[158] = toBF16(16'h4036); // 2.8438
    test_inputs[159] = toBF16(16'h4027); // 2.6094
    test_inputs[160] = toBF16(16'h4090); // 4.5000
    test_inputs[161] = toBF16(16'h4022); // 2.5312
    test_inputs[162] = toBF16(16'h4068); // 3.6250
    test_inputs[163] = toBF16(16'h4091); // 4.5312
    test_inputs[164] = toBF16(16'h4077); // 3.8594
    test_inputs[165] = toBF16(16'h403F); // 2.9844
    test_inputs[166] = toBF16(16'h400F); // 2.2344
    test_inputs[167] = toBF16(16'h3FDE); // 1.7344
    test_inputs[168] = toBF16(16'h4001); // 2.0156

    test_inputs[169] = toBF16(16'h4088); // 4.2500
    test_inputs[170] = toBF16(16'h4094); // 4.6250
    test_inputs[171] = toBF16(16'h3FE4); // 1.7812

    test_inputs[172] = toBF16(16'h4068); // 3.6250
    test_inputs[173] = toBF16(16'h4054); // 3.3125
    test_inputs[174] = toBF16(16'h3FA0); // 1.2500

    test_inputs[175] = toBF16(16'h4083); // 4.0938
    test_inputs[176] = toBF16(16'h4002); // 2.0312
    test_inputs[177] = toBF16(16'h4087); // 4.2188
    test_inputs[178] = toBF16(16'h3FFF); // 1.9922
    test_inputs[179] = toBF16(16'h407E); // 3.9688
    test_inputs[180] = toBF16(16'h3FC1); // 1.5078
    test_inputs[181] = toBF16(16'h4095); // 4.6562
    test_inputs[182] = toBF16(16'h4041); // 3.0156
    test_inputs[183] = toBF16(16'h4081); // 4.0312

    test_inputs[184] = toBF16(16'h4083); // 4.0938
    test_inputs[185] = toBF16(16'h3FA0); // 1.2500
    test_inputs[186] = toBF16(16'h4003); // 2.0469

    test_inputs[187] = toBF16(16'h4013); // 2.2969
    test_inputs[188] = toBF16(16'h406F); // 3.7344
    test_inputs[189] = toBF16(16'h4060); // 3.5000
    test_inputs[190] = toBF16(16'h4062); // 3.5312
    test_inputs[191] = toBF16(16'h4009); // 2.1406
    test_inputs[192] = toBF16(16'h409B); // 4.8438
    test_inputs[193] = toBF16(16'h4010); // 2.2500

    test_inputs[194] = toBF16(16'h4046); // 3.0938
    test_inputs[195] = toBF16(16'h4021); // 2.5156
    test_inputs[196] = toBF16(16'h4081); // 4.0312
    test_inputs[197] = toBF16(16'h4048); // 3.1250

    test_inputs[198] = toBF16(16'h4079); // 3.8906
    test_inputs[199] = toBF16(16'h402E); // 2.7188
    test_inputs[200] = toBF16(16'h4057); // 3.3594
    test_inputs[201] = toBF16(16'h405D); // 3.4531
    test_inputs[202] = toBF16(16'h4034); // 2.8125
    test_inputs[203] = toBF16(16'h4030); // 2.7500
    test_inputs[204] = toBF16(16'h3FC8); // 1.5625
    test_inputs[205] = toBF16(16'h4028); // 2.6250
    test_inputs[206] = toBF16(16'h401E); // 2.4688
    test_inputs[207] = toBF16(16'h4092); // 4.5625
    test_inputs[208] = toBF16(16'h409D); // 4.9062
    test_inputs[209] = toBF16(16'h4025); // 2.5781
    test_inputs[210] = toBF16(16'h3FD2); // 1.6406
    test_inputs[211] = toBF16(16'h3F98); // 1.1875
    test_inputs[212] = toBF16(16'h403C); // 2.9375
    test_inputs[213] = toBF16(16'h3FCF); // 1.6172
    test_inputs[214] = toBF16(16'h4097); // 4.7188
    test_inputs[215] = toBF16(16'h4095); // 4.6562
    test_inputs[216] = toBF16(16'h3FD4); // 1.6562
    test_inputs[217] = toBF16(16'h400B); // 2.1719
    test_inputs[218] = toBF16(16'h4016); // 2.3438
    test_inputs[219] = toBF16(16'h4058); // 3.3750
    test_inputs[220] = toBF16(16'h4091); // 4.5312
    test_inputs[221] = toBF16(16'h408E); // 4.4375
    test_inputs[222] = toBF16(16'h3FF1); // 1.8828
    test_inputs[223] = toBF16(16'h3FB4); // 1.4062
    test_inputs[224] = toBF16(16'h3FB6); // 1.4219
    test_inputs[225] = toBF16(16'h3FBE); // 1.4844
    test_inputs[226] = toBF16(16'h4087); // 4.2188
    test_inputs[227] = toBF16(16'h4067); // 3.6094
    test_inputs[228] = toBF16(16'h407D); // 3.9531
    test_inputs[229] = toBF16(16'h3F9E); // 1.2344
    test_inputs[230] = toBF16(16'h408D); // 4.4062

    test_inputs[231] = toBF16(16'h403D); // 2.9531
    test_inputs[232] = toBF16(16'h4062); // 3.5312
    test_inputs[233] = toBF16(16'h405A); // 3.4062
    test_inputs[234] = toBF16(16'h3FB8); // 1.4375
    test_inputs[235] = toBF16(16'h4038); // 2.8750
    test_inputs[236] = toBF16(16'h403B); // 2.9219
    test_inputs[237] = toBF16(16'h4059); // 3.3906
    test_inputs[238] = toBF16(16'h409C); // 4.8750
    test_inputs[239] = toBF16(16'h407D); // 3.9531
    test_inputs[240] = toBF16(16'h409E); // 4.9375
    test_inputs[241] = toBF16(16'h4093); // 4.5938
    test_inputs[242] = toBF16(16'h404A); // 3.1562
    test_inputs[243] = toBF16(16'h4051); // 3.2656
    test_inputs[244] = toBF16(16'h3FF6); // 1.9219
    test_inputs[245] = toBF16(16'h402F); // 2.7344
    test_inputs[246] = toBF16(16'h4067); // 3.6094
    test_inputs[247] = toBF16(16'h4074); // 3.8125
    test_inputs[248] = toBF16(16'h409B); // 4.8438
    test_inputs[249] = toBF16(16'h3FE6); // 1.7969
    test_inputs[250] = toBF16(16'h408D); // 4.4062

    test_inputs[251] = toBF16(16'h3F8B); // 1.0859
    test_inputs[252] = toBF16(16'h4083); // 4.0938
    test_inputs[253] = toBF16(16'h4037); // 2.8594

    test_inputs[254] = toBF16(16'h3F95); // 1.1641
    test_inputs[255] = toBF16(16'h3FF7); // 1.9297
    test_inputs[256] = toBF16(16'h4083); // 4.0938
    test_inputs[257] = toBF16(16'h4059); // 3.3906
    test_inputs[258] = toBF16(16'h4010); // 2.2500
    test_inputs[259] = toBF16(16'h408A); // 4.3125

    test_inputs[260] = toBF16(16'h4047); // 3.1094
    test_inputs[261] = toBF16(16'h4086); // 4.1875
    test_inputs[262] = toBF16(16'h4039); // 2.8906
    test_inputs[263] = toBF16(16'h4060); // 3.5000

    test_inputs[264] = toBF16(16'h3FAC); // 1.3438
    test_inputs[265] = toBF16(16'h3FB4); // 1.4062
    test_inputs[266] = toBF16(16'h3FAE); // 1.3594
    test_inputs[267] = toBF16(16'h3F98); // 1.1875
    test_inputs[268] = toBF16(16'h4023); // 2.5469
    test_inputs[269] = toBF16(16'h409D); // 4.9062
    test_inputs[270] = toBF16(16'h3FCD); // 1.6016
    test_inputs[271] = toBF16(16'h407C); // 3.9375
    test_inputs[272] = toBF16(16'h3FC2); // 1.5156
    test_inputs[273] = toBF16(16'h3F96); // 1.1719
    test_inputs[274] = toBF16(16'h4010); // 2.2500
    test_inputs[275] = toBF16(16'h4097); // 4.7188
    test_inputs[276] = toBF16(16'h4030); // 2.7500
    test_inputs[277] = toBF16(16'h3F8D); // 1.1016
    test_inputs[278] = toBF16(16'h4014); // 2.3125
    test_inputs[279] = toBF16(16'h407F); // 3.9844
    test_inputs[280] = toBF16(16'h4091); // 4.5312
    test_inputs[281] = toBF16(16'h4097); // 4.7188

    test_inputs[282] = toBF16(16'h4055); // 3.3281
    test_inputs[283] = toBF16(16'h408D); // 4.4062
    test_inputs[284] = toBF16(16'h4040); // 3.0000
    test_inputs[285] = toBF16(16'h405A); // 3.4062
    test_inputs[286] = toBF16(16'h3FAD); // 1.3516
    test_inputs[287] = toBF16(16'h4073); // 3.7969
    test_inputs[288] = toBF16(16'h409A); // 4.8125
    test_inputs[289] = toBF16(16'h4086); // 4.1875
    test_inputs[290] = toBF16(16'h4029); // 2.6406

    test_inputs[291] = toBF16(16'h3FD6); // 1.6719
    test_inputs[292] = toBF16(16'h405B); // 3.4219
    test_inputs[293] = toBF16(16'h3FBB); // 1.4609
    test_inputs[294] = toBF16(16'h401D); // 2.4531
    test_inputs[295] = toBF16(16'h4013); // 2.2969
    test_inputs[296] = toBF16(16'h4011); // 2.2656
    test_inputs[297] = toBF16(16'h409E); // 4.9375
    test_inputs[298] = toBF16(16'h4082); // 4.0625
    test_inputs[299] = toBF16(16'h4098); // 4.7500
    test_inputs[300] = toBF16(16'h4091); // 4.5312
    test_inputs[301] = toBF16(16'h402A); // 2.6562
    test_inputs[302] = toBF16(16'h400F); // 2.2344
    test_inputs[303] = toBF16(16'h403E); // 2.9688
    test_inputs[304] = toBF16(16'h4075); // 3.8281
    test_inputs[305] = toBF16(16'h4033); // 2.7969
    test_inputs[306] = toBF16(16'h408F); // 4.4688
    test_inputs[307] = toBF16(16'h409C); // 4.8750
    test_inputs[308] = toBF16(16'h4050); // 3.2500
    test_inputs[309] = toBF16(16'h4004); // 2.0625
    test_inputs[310] = toBF16(16'h4034); // 2.8125
    test_inputs[311] = toBF16(16'h4082); // 4.0625
    test_inputs[312] = toBF16(16'h3F88); // 1.0625
    test_inputs[313] = toBF16(16'h408E); // 4.4375
    test_inputs[314] = toBF16(16'h4065); // 3.5781
    test_inputs[315] = toBF16(16'h3FB4); // 1.4062
    test_inputs[316] = toBF16(16'h3FE5); // 1.7891
    test_inputs[317] = toBF16(16'h405F); // 3.4844
    test_inputs[318] = toBF16(16'h4085); // 4.1562
    test_inputs[319] = toBF16(16'h3F89); // 1.0703
    test_inputs[320] = toBF16(16'h4035); // 2.8281
    test_inputs[321] = toBF16(16'h408F); // 4.4688
    test_inputs[322] = toBF16(16'h4000); // 2.0000
    test_inputs[323] = toBF16(16'h4094); // 4.6250

    test_inputs[324] = toBF16(16'h4077); // 3.8594
    test_inputs[325] = toBF16(16'h400D); // 2.2031
    test_inputs[326] = toBF16(16'h401F); // 2.4844

    test_inputs[327] = toBF16(16'h3F92); // 1.1406
    test_inputs[328] = toBF16(16'h4098); // 4.7500
    test_inputs[329] = toBF16(16'h4071); // 3.7656
    test_inputs[330] = toBF16(16'h4076); // 3.8438
    test_inputs[331] = toBF16(16'h409F); // 4.9688
    test_inputs[332] = toBF16(16'h407D); // 3.9531
    test_inputs[333] = toBF16(16'h402E); // 2.7188
    test_inputs[334] = toBF16(16'h3F90); // 1.1250
    test_inputs[335] = toBF16(16'h4045); // 3.0781
    test_inputs[336] = toBF16(16'h408E); // 4.4375
    test_inputs[337] = toBF16(16'h3FE8); // 1.8125
    test_inputs[338] = toBF16(16'h4034); // 2.8125

    test_inputs[339] = toBF16(16'h4010); // 2.2500
    test_inputs[340] = toBF16(16'h4080); // 4.0000
    test_inputs[341] = toBF16(16'h4092); // 4.5625
    test_inputs[342] = toBF16(16'h403A); // 2.9062
    test_inputs[343] = toBF16(16'h4030); // 2.7500
    test_inputs[344] = toBF16(16'h403A); // 2.9062
    test_inputs[345] = toBF16(16'h4074); // 3.8125

    test_inputs[346] = toBF16(16'h3FC1); // 1.5078
    test_inputs[347] = toBF16(16'h4075); // 3.8281
    test_inputs[348] = toBF16(16'h401E); // 2.4688
    test_inputs[349] = toBF16(16'h4093); // 4.5938
    test_inputs[350] = toBF16(16'h4023); // 2.5469
    test_inputs[351] = toBF16(16'h3F91); // 1.1328

    test_inputs[352] = toBF16(16'h3FE6); // 1.7969
    test_inputs[353] = toBF16(16'h401F); // 2.4844
    test_inputs[354] = toBF16(16'h400C); // 2.1875
    test_inputs[355] = toBF16(16'h408F); // 4.4688
    test_inputs[356] = toBF16(16'h3FC4); // 1.5312
    test_inputs[357] = toBF16(16'h409A); // 4.8125
    test_inputs[358] = toBF16(16'h400B); // 2.1719
    test_inputs[359] = toBF16(16'h3FD1); // 1.6328
    test_inputs[360] = toBF16(16'h4008); // 2.1250
    test_inputs[361] = toBF16(16'h4085); // 4.1562
    test_inputs[362] = toBF16(16'h409B); // 4.8438
    test_inputs[363] = toBF16(16'h3FC4); // 1.5312
    test_inputs[364] = toBF16(16'h3F91); // 1.1328
    test_inputs[365] = toBF16(16'h4080); // 4.0000
    test_inputs[366] = toBF16(16'h3FD1); // 1.6328
    test_inputs[367] = toBF16(16'h4005); // 2.0781
    test_inputs[368] = toBF16(16'h4047); // 3.1094
    test_inputs[369] = toBF16(16'h4009); // 2.1406
    test_inputs[370] = toBF16(16'h402B); // 2.6719

    test_inputs[371] = toBF16(16'h4026); // 2.5938
    test_inputs[372] = toBF16(16'h3FF4); // 1.9062
    test_inputs[373] = toBF16(16'h3FF8); // 1.9375
    test_inputs[374] = toBF16(16'h4063); // 3.5469
    test_inputs[375] = toBF16(16'h405C); // 3.4375
    test_inputs[376] = toBF16(16'h3FF8); // 1.9375
    test_inputs[377] = toBF16(16'h4098); // 4.7500
    test_inputs[378] = toBF16(16'h4096); // 4.6875
    test_inputs[379] = toBF16(16'h4018); // 2.3750
    test_inputs[380] = toBF16(16'h3F89); // 1.0703
    test_inputs[381] = toBF16(16'h4087); // 4.2188
    test_inputs[382] = toBF16(16'h406A); // 3.6562
    test_inputs[383] = toBF16(16'h3F99); // 1.1953
    test_inputs[384] = toBF16(16'h4099); // 4.7812
    test_inputs[385] = toBF16(16'h4033); // 2.7969
    test_inputs[386] = toBF16(16'h3F93); // 1.1484
    test_inputs[387] = toBF16(16'h4000); // 2.0000
    test_inputs[388] = toBF16(16'h406C); // 3.6875

    test_inputs[389] = toBF16(16'h401C); // 2.4375
    test_inputs[390] = toBF16(16'h3FBE); // 1.4844

    test_inputs[391] = toBF16(16'h4088); // 4.2500
    test_inputs[392] = toBF16(16'h4002); // 2.0312
    test_inputs[393] = toBF16(16'h4054); // 3.3125
    test_inputs[394] = toBF16(16'h3FA2); // 1.2656
    test_inputs[395] = toBF16(16'h4002); // 2.0312
    test_inputs[396] = toBF16(16'h4098); // 4.7500
    test_inputs[397] = toBF16(16'h4093); // 4.5938

    test_inputs[398] = toBF16(16'h3FBD); // 1.4766
    test_inputs[399] = toBF16(16'h4074); // 3.8125
    test_inputs[400] = toBF16(16'h4088); // 4.2500
    test_inputs[401] = toBF16(16'h3FB7); // 1.4297
    test_inputs[402] = toBF16(16'h402D); // 2.7031

    test_inputs[403] = toBF16(16'h4095); // 4.6562
    test_inputs[404] = toBF16(16'h403B); // 2.9219
    test_inputs[405] = toBF16(16'h4039); // 2.8906
    test_inputs[406] = toBF16(16'h4095); // 4.6562
    test_inputs[407] = toBF16(16'h4076); // 3.8438
    test_inputs[408] = toBF16(16'h400A); // 2.1562
    test_inputs[409] = toBF16(16'h4052); // 3.2812

    test_inputs[410] = toBF16(16'h3FF2); // 1.8906
    test_inputs[411] = toBF16(16'h400A); // 2.1562
    test_inputs[412] = toBF16(16'h408A); // 4.3125
    test_inputs[413] = toBF16(16'h4094); // 4.6250
    test_inputs[414] = toBF16(16'h4017); // 2.3594
    test_inputs[415] = toBF16(16'h3F96); // 1.1719
    test_inputs[416] = toBF16(16'h408F); // 4.4688
    test_inputs[417] = toBF16(16'h409F); // 4.9688
    test_inputs[418] = toBF16(16'h4030); // 2.7500
    test_inputs[419] = toBF16(16'h3FB7); // 1.4297
    test_inputs[420] = toBF16(16'h4010); // 2.2500
    test_inputs[421] = toBF16(16'h4091); // 4.5312
    test_inputs[422] = toBF16(16'h4025); // 2.5781
    test_inputs[423] = toBF16(16'h3F9A); // 1.2031
    test_inputs[424] = toBF16(16'h403F); // 2.9844
    test_inputs[425] = toBF16(16'h3F94); // 1.1562
    test_inputs[426] = toBF16(16'h3F95); // 1.1641

    test_inputs[427] = toBF16(16'h409F); // 4.9688
    test_inputs[428] = toBF16(16'h4048); // 3.1250
    test_inputs[429] = toBF16(16'h4044); // 3.0625
    test_inputs[430] = toBF16(16'h404C); // 3.1875
    test_inputs[431] = toBF16(16'h3FD0); // 1.6250
    test_inputs[432] = toBF16(16'h3FB4); // 1.4062
    test_inputs[433] = toBF16(16'h4091); // 4.5312
    test_inputs[434] = toBF16(16'h4072); // 3.7812
    test_inputs[435] = toBF16(16'h4099); // 4.7812

    test_inputs[436] = toBF16(16'h4024); // 2.5625
    test_inputs[437] = toBF16(16'h4010); // 2.2500
    test_inputs[438] = toBF16(16'h3FBB); // 1.4609
    test_inputs[439] = toBF16(16'h3FEF); // 1.8672
    test_inputs[440] = toBF16(16'h3FE5); // 1.7891
    test_inputs[441] = toBF16(16'h4058); // 3.3750
    test_inputs[442] = toBF16(16'h4092); // 4.5625
    test_inputs[443] = toBF16(16'h4091); // 4.5312

    test_inputs[444] = toBF16(16'h408F); // 4.4688
    test_inputs[445] = toBF16(16'h3FFB); // 1.9609

    test_inputs[446] = toBF16(16'h409E); // 4.9375
    test_inputs[447] = toBF16(16'h4006); // 2.0938
    test_inputs[448] = toBF16(16'h4082); // 4.0625
    test_inputs[449] = toBF16(16'h4092); // 4.5625
    test_inputs[450] = toBF16(16'h4054); // 3.3125
    test_inputs[451] = toBF16(16'h4068); // 3.6250
    test_inputs[452] = toBF16(16'h4079); // 3.8906
    test_inputs[453] = toBF16(16'h3FD3); // 1.6484
    test_inputs[454] = toBF16(16'h4014); // 2.3125
    test_inputs[455] = toBF16(16'h4005); // 2.0781
    test_inputs[456] = toBF16(16'h4087); // 4.2188
    test_inputs[457] = toBF16(16'h3FA0); // 1.2500
    test_inputs[458] = toBF16(16'h4002); // 2.0312
    test_inputs[459] = toBF16(16'h407C); // 3.9375
    test_inputs[460] = toBF16(16'h409C); // 4.8750
    test_inputs[461] = toBF16(16'h4098); // 4.7500
    test_inputs[462] = toBF16(16'h4086); // 4.1875
    test_inputs[463] = toBF16(16'h3F94); // 1.1562
    test_inputs[464] = toBF16(16'h4024); // 2.5625
    test_inputs[465] = toBF16(16'h4047); // 3.1094

    test_inputs[466] = toBF16(16'h4004); // 2.0625
    test_inputs[467] = toBF16(16'h400D); // 2.2031
    test_inputs[468] = toBF16(16'h4061); // 3.5156
    test_inputs[469] = toBF16(16'h4096); // 4.6875
    test_inputs[470] = toBF16(16'h4091); // 4.5312
    test_inputs[471] = toBF16(16'h4065); // 3.5781
    test_inputs[472] = toBF16(16'h4003); // 2.0469
    test_inputs[473] = toBF16(16'h4074); // 3.8125
    test_inputs[474] = toBF16(16'h3FF1); // 1.8828
    test_inputs[475] = toBF16(16'h4093); // 4.5938
    test_inputs[476] = toBF16(16'h4017); // 2.3594
    test_inputs[477] = toBF16(16'h4091); // 4.5312
    test_inputs[478] = toBF16(16'h3FAD); // 1.3516

    test_inputs[479] = toBF16(16'h4086); // 4.1875
    test_inputs[480] = toBF16(16'h407B); // 3.9219
    test_inputs[481] = toBF16(16'h4003); // 2.0469
    test_inputs[482] = toBF16(16'h3FE8); // 1.8125
    test_inputs[483] = toBF16(16'h409F); // 4.9688
    test_inputs[484] = toBF16(16'h4009); // 2.1406

    test_inputs[485] = toBF16(16'h404E); // 3.2188
    test_inputs[486] = toBF16(16'h404F); // 3.2344
    test_inputs[487] = toBF16(16'h4016); // 2.3438

    test_inputs[488] = toBF16(16'h3F97); // 1.1797
    test_inputs[489] = toBF16(16'h3FC9); // 1.5703
    test_inputs[490] = toBF16(16'h3FA9); // 1.3203
    test_inputs[491] = toBF16(16'h404B); // 3.1719
    test_inputs[492] = toBF16(16'h3FFA); // 1.9531
    test_inputs[493] = toBF16(16'h408D); // 4.4062
    test_inputs[494] = toBF16(16'h400E); // 2.2188
    test_inputs[495] = toBF16(16'h4084); // 4.1250
    test_inputs[496] = toBF16(16'h4097); // 4.7188
    test_inputs[497] = toBF16(16'h3FBD); // 1.4766
    test_inputs[498] = toBF16(16'h3FE2); // 1.7656
    test_inputs[499] = toBF16(16'h4085); // 4.1562


    Vector#(500, Bit#(16)) expected_outputs = newVector;
    expected_outputs[0] = 16'h3F7C; // 0.984375
    expected_outputs[1] = 16'h3F7C; // 0.984375
    expected_outputs[2] = 16'h3F7A; // 0.976562
    expected_outputs[3] = 16'h3F74; // 0.953125

    expected_outputs[4] = 16'h3F6A; // 0.914062
    expected_outputs[5] = 16'h3F3D; // 0.738281
    expected_outputs[6] = 16'h3F7D; // 0.988281
    expected_outputs[7] = 16'h3F62; // 0.882812
    expected_outputs[8] = 16'h3F7B; // 0.980469

    expected_outputs[9] = 16'h3F59; // 0.847656
    expected_outputs[10] = 16'h3F6A; // 0.914062
    expected_outputs[11] = 16'h3F74; // 0.953125
    expected_outputs[12] = 16'h3F71; // 0.941406
    expected_outputs[13] = 16'h3F77; // 0.964844
    expected_outputs[14] = 16'h3F73; // 0.949219
    expected_outputs[15] = 16'h3F78; // 0.968750
    expected_outputs[16] = 16'h3F53; // 0.824219

    expected_outputs[17] = 16'h3F55; // 0.832031
    expected_outputs[18] = 16'h3F40; // 0.750000
    expected_outputs[19] = 16'h3F7B; // 0.980469

    expected_outputs[20] = 16'h3F5E; // 0.867188
    expected_outputs[21] = 16'h3F7D; // 0.988281
    expected_outputs[22] = 16'h3F7D; // 0.988281
    expected_outputs[23] = 16'h3F42; // 0.757812
    expected_outputs[24] = 16'h3F7B; // 0.980469
    expected_outputs[25] = 16'h3F7A; // 0.976562
    expected_outputs[26] = 16'h3F65; // 0.894531

    expected_outputs[27] = 16'h3F76; // 0.960938
    expected_outputs[28] = 16'h3F6C; // 0.921875
    expected_outputs[29] = 16'h3F7D; // 0.988281
    expected_outputs[30] = 16'h3F70; // 0.937500
    expected_outputs[31] = 16'h3F70; // 0.937500
    expected_outputs[32] = 16'h3F7D; // 0.988281
    expected_outputs[33] = 16'h3F6B; // 0.917969
    expected_outputs[34] = 16'h3F7D; // 0.988281
    expected_outputs[35] = 16'h3F73; // 0.949219
    expected_outputs[36] = 16'h3F6D; // 0.925781

    expected_outputs[37] = 16'h3F60; // 0.875000
    expected_outputs[38] = 16'h3F3B; // 0.730469
    expected_outputs[39] = 16'h3F7C; // 0.984375
    expected_outputs[40] = 16'h3F69; // 0.910156
    expected_outputs[41] = 16'h3F69; // 0.910156
    expected_outputs[42] = 16'h3F66; // 0.898438

    expected_outputs[43] = 16'h3F62; // 0.882812
    expected_outputs[44] = 16'h3F42; // 0.757812
    expected_outputs[45] = 16'h3F44; // 0.765625
    expected_outputs[46] = 16'h3F72; // 0.945312
    expected_outputs[47] = 16'h3F7D; // 0.988281
    expected_outputs[48] = 16'h3F76; // 0.960938
    expected_outputs[49] = 16'h3F7D; // 0.988281
    expected_outputs[50] = 16'h3F79; // 0.972656
    expected_outputs[51] = 16'h3F47; // 0.777344
    expected_outputs[52] = 16'h3F77; // 0.964844
    expected_outputs[53] = 16'h3F73; // 0.949219
    expected_outputs[54] = 16'h3F3C; // 0.734375
    expected_outputs[55] = 16'h3F6F; // 0.933594
    expected_outputs[56] = 16'h3F79; // 0.972656
    expected_outputs[57] = 16'h3F64; // 0.890625
    expected_outputs[58] = 16'h3F79; // 0.972656
    expected_outputs[59] = 16'h3F7B; // 0.980469
    expected_outputs[60] = 16'h3F69; // 0.910156
    expected_outputs[61] = 16'h3F78; // 0.968750
    expected_outputs[62] = 16'h3F6E; // 0.929688
    expected_outputs[63] = 16'h3F79; // 0.972656
    expected_outputs[64] = 16'h3F76; // 0.960938
    expected_outputs[65] = 16'h3F7D; // 0.988281
    expected_outputs[66] = 16'h3F7B; // 0.980469

    expected_outputs[67] = 16'h3F7D; // 0.988281
    expected_outputs[68] = 16'h3F52; // 0.820312
    expected_outputs[69] = 16'h3F48; // 0.781250

    expected_outputs[70] = 16'h3F7D; // 0.988281
    expected_outputs[71] = 16'h3F6A; // 0.914062
    expected_outputs[72] = 16'h3F7C; // 0.984375
    expected_outputs[73] = 16'h3F7D; // 0.988281

    expected_outputs[74] = 16'h3F7C; // 0.984375
    expected_outputs[75] = 16'h3F5A; // 0.851562
    expected_outputs[76] = 16'h3F73; // 0.949219
    expected_outputs[77] = 16'h3F69; // 0.910156
    expected_outputs[78] = 16'h3F7B; // 0.980469
    expected_outputs[79] = 16'h3F7D; // 0.988281
    expected_outputs[80] = 16'h3F79; // 0.972656
    expected_outputs[81] = 16'h3F7D; // 0.988281
    expected_outputs[82] = 16'h3F56; // 0.835938
    expected_outputs[83] = 16'h3F75; // 0.957031
    expected_outputs[84] = 16'h3F71; // 0.941406
    expected_outputs[85] = 16'h3F75; // 0.957031
    expected_outputs[86] = 16'h3F7B; // 0.980469
    expected_outputs[87] = 16'h3F7B; // 0.980469
    expected_outputs[88] = 16'h3F73; // 0.949219
    expected_outputs[89] = 16'h3F6F; // 0.933594

    expected_outputs[90] = 16'h3F5F; // 0.871094
    expected_outputs[91] = 16'h3F7D; // 0.988281
    expected_outputs[92] = 16'h3F78; // 0.968750
    expected_outputs[93] = 16'h3F7B; // 0.980469
    expected_outputs[94] = 16'h3F65; // 0.894531
    expected_outputs[95] = 16'h3F56; // 0.835938
    expected_outputs[96] = 16'h3F7C; // 0.984375
    expected_outputs[97] = 16'h3F7D; // 0.988281
    expected_outputs[98] = 16'h3F47; // 0.777344
    expected_outputs[99] = 16'h3F7E; // 0.992188

    expected_outputs[100] = 16'h3F74; // 0.953125
    expected_outputs[101] = 16'h3F4E; // 0.804688
    expected_outputs[102] = 16'h3F5E; // 0.867188
    expected_outputs[103] = 16'h3F6C; // 0.921875
    expected_outputs[104] = 16'h3F68; // 0.906250
    expected_outputs[105] = 16'h3F7C; // 0.984375

    expected_outputs[106] = 16'h3F7E; // 0.992188
    expected_outputs[107] = 16'h3F79; // 0.972656
    expected_outputs[108] = 16'h3F4F; // 0.808594
    expected_outputs[109] = 16'h3F70; // 0.937500
    expected_outputs[110] = 16'h3F79; // 0.972656

    expected_outputs[111] = 16'h3F75; // 0.957031
    expected_outputs[112] = 16'h3F7C; // 0.984375
    expected_outputs[113] = 16'h3F69; // 0.910156
    expected_outputs[114] = 16'h3F77; // 0.964844
    expected_outputs[115] = 16'h3F5F; // 0.871094

    expected_outputs[116] = 16'h3F44; // 0.765625
    expected_outputs[117] = 16'h3F7A; // 0.976562
    expected_outputs[118] = 16'h3F6C; // 0.921875
    expected_outputs[119] = 16'h3F75; // 0.957031
    expected_outputs[120] = 16'h3F63; // 0.886719

    expected_outputs[121] = 16'h3F71; // 0.941406
    expected_outputs[122] = 16'h3F70; // 0.937500
    expected_outputs[123] = 16'h3F54; // 0.828125
    expected_outputs[124] = 16'h3F72; // 0.945312

    expected_outputs[125] = 16'h3F61; // 0.878906
    expected_outputs[126] = 16'h3F7B; // 0.980469
    expected_outputs[127] = 16'h3F5D; // 0.863281
    expected_outputs[128] = 16'h3F7E; // 0.992188
    expected_outputs[129] = 16'h3F7E; // 0.992188
    expected_outputs[130] = 16'h3F54; // 0.828125

    expected_outputs[131] = 16'h3F77; // 0.964844
    expected_outputs[132] = 16'h3F7C; // 0.984375
    expected_outputs[133] = 16'h3F7B; // 0.980469
    expected_outputs[134] = 16'h3F4C; // 0.796875
    expected_outputs[135] = 16'h3F74; // 0.953125
    expected_outputs[136] = 16'h3F7D; // 0.988281

    expected_outputs[137] = 16'h3F57; // 0.839844
    expected_outputs[138] = 16'h3F7A; // 0.976562
    expected_outputs[139] = 16'h3F7C; // 0.984375
    expected_outputs[140] = 16'h3F66; // 0.898438
    expected_outputs[141] = 16'h3F78; // 0.968750

    expected_outputs[142] = 16'h3F6F; // 0.933594
    expected_outputs[143] = 16'h3F56; // 0.835938
    expected_outputs[144] = 16'h3F7D; // 0.988281
    expected_outputs[145] = 16'h3F75; // 0.957031
    expected_outputs[146] = 16'h3F71; // 0.941406
    expected_outputs[147] = 16'h3F7B; // 0.980469
    expected_outputs[148] = 16'h3F7A; // 0.976562
    expected_outputs[149] = 16'h3F70; // 0.937500
    expected_outputs[150] = 16'h3F7D; // 0.988281
    expected_outputs[151] = 16'h3F7C; // 0.984375
    expected_outputs[152] = 16'h3F42; // 0.757812

    expected_outputs[153] = 16'h3F73; // 0.949219
    expected_outputs[154] = 16'h3F7A; // 0.976562
    expected_outputs[155] = 16'h3F7D; // 0.988281
    expected_outputs[156] = 16'h3F6C; // 0.921875
    expected_outputs[157] = 16'h3F71; // 0.941406
    expected_outputs[158] = 16'h3F72; // 0.945312
    expected_outputs[159] = 16'h3F6E; // 0.929688
    expected_outputs[160] = 16'h3F7D; // 0.988281
    expected_outputs[161] = 16'h3F6D; // 0.925781
    expected_outputs[162] = 16'h3F79; // 0.972656
    expected_outputs[163] = 16'h3F7D; // 0.988281
    expected_outputs[164] = 16'h3F7A; // 0.976562

    expected_outputs[165] = 16'h3F73; // 0.949219
    expected_outputs[166] = 16'h3F67; // 0.902344
    expected_outputs[167] = 16'h3F59; // 0.847656
    expected_outputs[168] = 16'h3F61; // 0.878906

    expected_outputs[169] = 16'h3F7C; // 0.984375
    expected_outputs[170] = 16'h3F7D; // 0.988281
    expected_outputs[171] = 16'h3F5B; // 0.855469
    expected_outputs[172] = 16'h3F79; // 0.972656
    expected_outputs[173] = 16'h3F77; // 0.964844
    expected_outputs[174] = 16'h3F47; // 0.777344
    expected_outputs[175] = 16'h3F7B; // 0.980469
    expected_outputs[176] = 16'h3F62; // 0.882812
    expected_outputs[177] = 16'h3F7C; // 0.984375
    expected_outputs[178] = 16'h3F61; // 0.878906
    expected_outputs[179] = 16'h3F7B; // 0.980469

    expected_outputs[180] = 16'h3F51; // 0.816406
    expected_outputs[181] = 16'h3F7D; // 0.988281
    expected_outputs[182] = 16'h3F74; // 0.953125
    expected_outputs[183] = 16'h3F7B; // 0.980469
    expected_outputs[184] = 16'h3F7B; // 0.980469
    expected_outputs[185] = 16'h3F47; // 0.777344
    expected_outputs[186] = 16'h3F62; // 0.882812
    expected_outputs[187] = 16'h3F68; // 0.906250
    expected_outputs[188] = 16'h3F7A; // 0.976562
    expected_outputs[189] = 16'h3F78; // 0.968750

    expected_outputs[190] = 16'h3F78; // 0.968750
    expected_outputs[191] = 16'h3F65; // 0.894531
    expected_outputs[192] = 16'h3F7E; // 0.992188
    expected_outputs[193] = 16'h3F67; // 0.902344
    expected_outputs[194] = 16'h3F75; // 0.957031
    expected_outputs[195] = 16'h3F6C; // 0.921875
    expected_outputs[196] = 16'h3F7B; // 0.980469
    expected_outputs[197] = 16'h3F75; // 0.957031
    expected_outputs[198] = 16'h3F7A; // 0.976562
    expected_outputs[199] = 16'h3F70; // 0.937500

    expected_outputs[200] = 16'h3F77; // 0.964844
    expected_outputs[201] = 16'h3F78; // 0.968750
    expected_outputs[202] = 16'h3F71; // 0.941406
    expected_outputs[203] = 16'h3F70; // 0.937500

    expected_outputs[204] = 16'h3F53; // 0.824219
    expected_outputs[205] = 16'h3F6E; // 0.929688
    expected_outputs[206] = 16'h3F6C; // 0.921875
    expected_outputs[207] = 16'h3F7D; // 0.988281
    expected_outputs[208] = 16'h3F7E; // 0.992188
    expected_outputs[209] = 16'h3F6D; // 0.925781
    expected_outputs[210] = 16'h3F56; // 0.835938
    expected_outputs[211] = 16'h3F44; // 0.765625
    expected_outputs[212] = 16'h3F73; // 0.949219
    expected_outputs[213] = 16'h3F55; // 0.832031
    expected_outputs[214] = 16'h3F7D; // 0.988281

    expected_outputs[215] = 16'h3F7D; // 0.988281
    expected_outputs[216] = 16'h3F57; // 0.839844
    expected_outputs[217] = 16'h3F65; // 0.894531
    expected_outputs[218] = 16'h3F69; // 0.910156
    expected_outputs[219] = 16'h3F77; // 0.964844
    expected_outputs[220] = 16'h3F7D; // 0.988281
    expected_outputs[221] = 16'h3F7D; // 0.988281
    expected_outputs[222] = 16'h3F5E; // 0.867188
    expected_outputs[223] = 16'h3F4D; // 0.800781
    expected_outputs[224] = 16'h3F4E; // 0.804688
    expected_outputs[225] = 16'h3F50; // 0.812500

    expected_outputs[226] = 16'h3F7C; // 0.984375
    expected_outputs[227] = 16'h3F79; // 0.972656
    expected_outputs[228] = 16'h3F7B; // 0.980469
    expected_outputs[229] = 16'h3F46; // 0.773438
    expected_outputs[230] = 16'h3F7C; // 0.984375
    expected_outputs[231] = 16'h3F73; // 0.949219
    expected_outputs[232] = 16'h3F78; // 0.968750
    expected_outputs[233] = 16'h3F77; // 0.964844
    expected_outputs[234] = 16'h3F4F; // 0.808594
    expected_outputs[235] = 16'h3F72; // 0.945312

    expected_outputs[236] = 16'h3F73; // 0.949219
    expected_outputs[237] = 16'h3F77; // 0.964844
    expected_outputs[238] = 16'h3F7E; // 0.992188
    expected_outputs[239] = 16'h3F7B; // 0.980469
    expected_outputs[240] = 16'h3F7E; // 0.992188
    expected_outputs[241] = 16'h3F7D; // 0.988281
    expected_outputs[242] = 16'h3F75; // 0.957031
    expected_outputs[243] = 16'h3F76; // 0.960938
    expected_outputs[244] = 16'h3F5F; // 0.871094
    expected_outputs[245] = 16'h3F70; // 0.937500
    expected_outputs[246] = 16'h3F79; // 0.972656
    expected_outputs[247] = 16'h3F7A; // 0.976562
    expected_outputs[248] = 16'h3F7E; // 0.992188
    expected_outputs[249] = 16'h3F5B; // 0.855469
    expected_outputs[250] = 16'h3F7C; // 0.984375
    expected_outputs[251] = 16'h3F3F; // 0.746094
    expected_outputs[252] = 16'h3F7B; // 0.980469
    expected_outputs[253] = 16'h3F72; // 0.945312
    expected_outputs[254] = 16'h3F43; // 0.761719
    expected_outputs[255] = 16'h3F5F; // 0.871094
    expected_outputs[256] = 16'h3F7B; // 0.980469
    expected_outputs[257] = 16'h3F77; // 0.964844
    expected_outputs[258] = 16'h3F67; // 0.902344
    expected_outputs[259] = 16'h3F7C; // 0.984375
    expected_outputs[260] = 16'h3F75; // 0.957031
    expected_outputs[261] = 16'h3F7C; // 0.984375
    expected_outputs[262] = 16'h3F72; // 0.945312
    expected_outputs[263] = 16'h3F78; // 0.968750
    expected_outputs[264] = 16'h3F4B; // 0.792969
    expected_outputs[265] = 16'h3F4D; // 0.800781
    expected_outputs[266] = 16'h3F4B; // 0.792969
    expected_outputs[267] = 16'h3F44; // 0.765625
    expected_outputs[268] = 16'h3F6D; // 0.925781
    expected_outputs[269] = 16'h3F7E; // 0.992188

    expected_outputs[270] = 16'h3F55; // 0.832031
    expected_outputs[271] = 16'h3F7B; // 0.980469
    expected_outputs[272] = 16'h3F52; // 0.820312
    expected_outputs[273] = 16'h3F43; // 0.761719
    expected_outputs[274] = 16'h3F67; // 0.902344
    expected_outputs[275] = 16'h3F7D; // 0.988281
    expected_outputs[276] = 16'h3F70; // 0.937500
    expected_outputs[277] = 16'h3F40; // 0.750000
    expected_outputs[278] = 16'h3F69; // 0.910156

    expected_outputs[279] = 16'h3F7B; // 0.980469
    expected_outputs[280] = 16'h3F7D; // 0.988281
    expected_outputs[281] = 16'h3F7D; // 0.988281
    expected_outputs[282] = 16'h3F77; // 0.964844
    expected_outputs[283] = 16'h3F7C; // 0.984375
    expected_outputs[284] = 16'h3F74; // 0.953125

    expected_outputs[285] = 16'h3F77; // 0.964844
    expected_outputs[286] = 16'h3F4B; // 0.792969
    expected_outputs[287] = 16'h3F7A; // 0.976562
    expected_outputs[288] = 16'h3F7D; // 0.988281
    expected_outputs[289] = 16'h3F7C; // 0.984375
    expected_outputs[290] = 16'h3F6F; // 0.933594
    expected_outputs[291] = 16'h3F57; // 0.839844
    expected_outputs[292] = 16'h3F77; // 0.964844
    expected_outputs[293] = 16'h3F4F; // 0.808594
    expected_outputs[294] = 16'h3F6B; // 0.917969
    expected_outputs[295] = 16'h3F68; // 0.906250
    expected_outputs[296] = 16'h3F67; // 0.902344
    expected_outputs[297] = 16'h3F7E; // 0.992188
    expected_outputs[298] = 16'h3F7B; // 0.980469
    expected_outputs[299] = 16'h3F7D; // 0.988281
    expected_outputs[300] = 16'h3F7D; // 0.988281
    expected_outputs[301] = 16'h3F6F; // 0.933594
    expected_outputs[302] = 16'h3F67; // 0.902344

    expected_outputs[303] = 16'h3F73; // 0.949219
    expected_outputs[304] = 16'h3F7A; // 0.976562
    expected_outputs[305] = 16'h3F71; // 0.941406
    expected_outputs[306] = 16'h3F7D; // 0.988281
    expected_outputs[307] = 16'h3F7E; // 0.992188
    expected_outputs[308] = 16'h3F76; // 0.960938
    expected_outputs[309] = 16'h3F63; // 0.886719
    expected_outputs[310] = 16'h3F71; // 0.941406
    expected_outputs[311] = 16'h3F7B; // 0.980469
    expected_outputs[312] = 16'h3F3E; // 0.742188
    expected_outputs[313] = 16'h3F7D; // 0.988281

    expected_outputs[314] = 16'h3F79; // 0.972656
    expected_outputs[315] = 16'h3F4D; // 0.800781
    expected_outputs[316] = 16'h3F5B; // 0.855469
    expected_outputs[317] = 16'h3F78; // 0.968750
    expected_outputs[318] = 16'h3F7C; // 0.984375
    expected_outputs[319] = 16'h3F3E; // 0.742188

    expected_outputs[320] = 16'h3F71; // 0.941406
    expected_outputs[321] = 16'h3F7D; // 0.988281
    expected_outputs[322] = 16'h3F61; // 0.878906
    expected_outputs[323] = 16'h3F7D; // 0.988281
    expected_outputs[324] = 16'h3F7A; // 0.976562
    expected_outputs[325] = 16'h3F66; // 0.898438
    expected_outputs[326] = 16'h3F6C; // 0.921875
    expected_outputs[327] = 16'h3F42; // 0.757812
    expected_outputs[328] = 16'h3F7D; // 0.988281
    expected_outputs[329] = 16'h3F7A; // 0.976562
    expected_outputs[330] = 16'h3F7A; // 0.976562
    expected_outputs[331] = 16'h3F7E; // 0.992188

    expected_outputs[332] = 16'h3F7B; // 0.980469
    expected_outputs[333] = 16'h3F70; // 0.937500
    expected_outputs[334] = 16'h3F41; // 0.753906
    expected_outputs[335] = 16'h3F74; // 0.953125
    expected_outputs[336] = 16'h3F7D; // 0.988281

    expected_outputs[337] = 16'h3F5C; // 0.859375
    expected_outputs[338] = 16'h3F71; // 0.941406
    expected_outputs[339] = 16'h3F67; // 0.902344
    expected_outputs[340] = 16'h3F7B; // 0.980469
    expected_outputs[341] = 16'h3F7D; // 0.988281
    expected_outputs[342] = 16'h3F72; // 0.945312
    expected_outputs[343] = 16'h3F70; // 0.937500
    expected_outputs[344] = 16'h3F72; // 0.945312
    expected_outputs[345] = 16'h3F7A; // 0.976562
    expected_outputs[346] = 16'h3F51; // 0.816406

    expected_outputs[347] = 16'h3F7A; // 0.976562
    expected_outputs[348] = 16'h3F6C; // 0.921875
    expected_outputs[349] = 16'h3F7D; // 0.988281
    expected_outputs[350] = 16'h3F6D; // 0.925781
    expected_outputs[351] = 16'h3F41; // 0.753906
    expected_outputs[352] = 16'h3F5B; // 0.855469
    expected_outputs[353] = 16'h3F6C; // 0.921875

    expected_outputs[354] = 16'h3F66; // 0.898438
    expected_outputs[355] = 16'h3F7D; // 0.988281
    expected_outputs[356] = 16'h3F52; // 0.820312
    expected_outputs[357] = 16'h3F7D; // 0.988281
    expected_outputs[358] = 16'h3F66; // 0.898438

    expected_outputs[359] = 16'h3F56; // 0.835938
    expected_outputs[360] = 16'h3F64; // 0.890625
    expected_outputs[361] = 16'h3F7C; // 0.984375
    expected_outputs[362] = 16'h3F7E; // 0.992188
    expected_outputs[363] = 16'h3F52; // 0.820312

    expected_outputs[364] = 16'h3F41; // 0.753906
    expected_outputs[365] = 16'h3F7B; // 0.980469
    expected_outputs[366] = 16'h3F56; // 0.835938
    expected_outputs[367] = 16'h3F63; // 0.886719
    expected_outputs[368] = 16'h3F75; // 0.957031
    expected_outputs[369] = 16'h3F65; // 0.894531
    expected_outputs[370] = 16'h3F6F; // 0.933594
    expected_outputs[371] = 16'h3F6E; // 0.929688
    expected_outputs[372] = 16'h3F5E; // 0.867188
    expected_outputs[373] = 16'h3F5F; // 0.871094
    expected_outputs[374] = 16'h3F78; // 0.968750
    expected_outputs[375] = 16'h3F78; // 0.968750
    expected_outputs[376] = 16'h3F5F; // 0.871094
    expected_outputs[377] = 16'h3F7D; // 0.988281
    expected_outputs[378] = 16'h3F7D; // 0.988281
    expected_outputs[379] = 16'h3F6A; // 0.914062
    expected_outputs[380] = 16'h3F3E; // 0.742188

    expected_outputs[381] = 16'h3F7C; // 0.984375
    expected_outputs[382] = 16'h3F79; // 0.972656
    expected_outputs[383] = 16'h3F44; // 0.765625
    expected_outputs[384] = 16'h3F7D; // 0.988281
    expected_outputs[385] = 16'h3F71; // 0.941406

    expected_outputs[386] = 16'h3F42; // 0.757812
    expected_outputs[387] = 16'h3F61; // 0.878906
    expected_outputs[388] = 16'h3F79; // 0.972656
    expected_outputs[389] = 16'h3F6B; // 0.917969
    expected_outputs[390] = 16'h3F50; // 0.812500
    expected_outputs[391] = 16'h3F7C; // 0.984375
    expected_outputs[392] = 16'h3F62; // 0.882812
    expected_outputs[393] = 16'h3F77; // 0.964844
    expected_outputs[394] = 16'h3F47; // 0.777344

    expected_outputs[395] = 16'h3F62; // 0.882812
    expected_outputs[396] = 16'h3F7D; // 0.988281
    expected_outputs[397] = 16'h3F7D; // 0.988281
    expected_outputs[398] = 16'h3F50; // 0.812500
    expected_outputs[399] = 16'h3F7A; // 0.976562
    expected_outputs[400] = 16'h3F7C; // 0.984375

    expected_outputs[401] = 16'h3F4E; // 0.804688
    expected_outputs[402] = 16'h3F70; // 0.937500
    expected_outputs[403] = 16'h3F7D; // 0.988281
    expected_outputs[404] = 16'h3F73; // 0.949219
    expected_outputs[405] = 16'h3F72; // 0.945312

    expected_outputs[406] = 16'h3F7D; // 0.988281
    expected_outputs[407] = 16'h3F7A; // 0.976562
    expected_outputs[408] = 16'h3F65; // 0.894531
    expected_outputs[409] = 16'h3F76; // 0.960938
    expected_outputs[410] = 16'h3F5E; // 0.867188
    expected_outputs[411] = 16'h3F65; // 0.894531
    expected_outputs[412] = 16'h3F7C; // 0.984375
    expected_outputs[413] = 16'h3F7D; // 0.988281
    expected_outputs[414] = 16'h3F6A; // 0.914062
    expected_outputs[415] = 16'h3F43; // 0.761719
    expected_outputs[416] = 16'h3F7D; // 0.988281
    expected_outputs[417] = 16'h3F7E; // 0.992188

    expected_outputs[418] = 16'h3F70; // 0.937500
    expected_outputs[419] = 16'h3F4E; // 0.804688
    expected_outputs[420] = 16'h3F67; // 0.902344
    expected_outputs[421] = 16'h3F7D; // 0.988281
    expected_outputs[422] = 16'h3F6E; // 0.929688
    expected_outputs[423] = 16'h3F45; // 0.769531
    expected_outputs[424] = 16'h3F73; // 0.949219
    expected_outputs[425] = 16'h3F42; // 0.757812
    expected_outputs[426] = 16'h3F43; // 0.761719
    expected_outputs[427] = 16'h3F7E; // 0.992188

    expected_outputs[428] = 16'h3F75; // 0.957031
    expected_outputs[429] = 16'h3F74; // 0.953125
    expected_outputs[430] = 16'h3F75; // 0.957031
    expected_outputs[431] = 16'h3F56; // 0.835938

    expected_outputs[432] = 16'h3F4D; // 0.800781
    expected_outputs[433] = 16'h3F7D; // 0.988281
    expected_outputs[434] = 16'h3F7A; // 0.976562
    expected_outputs[435] = 16'h3F7D; // 0.988281
    expected_outputs[436] = 16'h3F6D; // 0.925781
    expected_outputs[437] = 16'h3F67; // 0.902344
    expected_outputs[438] = 16'h3F4F; // 0.808594

    expected_outputs[439] = 16'h3F5D; // 0.863281
    expected_outputs[440] = 16'h3F5B; // 0.855469
    expected_outputs[441] = 16'h3F77; // 0.964844
    expected_outputs[442] = 16'h3F7D; // 0.988281
    expected_outputs[443] = 16'h3F7D; // 0.988281
    expected_outputs[444] = 16'h3F7D; // 0.988281
    expected_outputs[445] = 16'h3F60; // 0.875000
    expected_outputs[446] = 16'h3F7E; // 0.992188
    expected_outputs[447] = 16'h3F64; // 0.890625
    expected_outputs[448] = 16'h3F7B; // 0.980469
    expected_outputs[449] = 16'h3F7D; // 0.988281
    expected_outputs[450] = 16'h3F77; // 0.964844

    expected_outputs[451] = 16'h3F79; // 0.972656
    expected_outputs[452] = 16'h3F7A; // 0.976562
    expected_outputs[453] = 16'h3F56; // 0.835938
    expected_outputs[454] = 16'h3F69; // 0.910156
    expected_outputs[455] = 16'h3F63; // 0.886719
    expected_outputs[456] = 16'h3F7C; // 0.984375
    expected_outputs[457] = 16'h3F47; // 0.777344
    expected_outputs[458] = 16'h3F62; // 0.882812
    expected_outputs[459] = 16'h3F7B; // 0.980469
    expected_outputs[460] = 16'h3F7E; // 0.992188

    expected_outputs[461] = 16'h3F7D; // 0.988281
    expected_outputs[462] = 16'h3F7C; // 0.984375
    expected_outputs[463] = 16'h3F42; // 0.757812
    expected_outputs[464] = 16'h3F6D; // 0.925781
    expected_outputs[465] = 16'h3F75; // 0.957031
    expected_outputs[466] = 16'h3F63; // 0.886719
    expected_outputs[467] = 16'h3F66; // 0.898438
    expected_outputs[468] = 16'h3F78; // 0.968750
    expected_outputs[469] = 16'h3F7D; // 0.988281
    expected_outputs[470] = 16'h3F7D; // 0.988281
    expected_outputs[471] = 16'h3F79; // 0.972656
    expected_outputs[472] = 16'h3F63; // 0.886719
    expected_outputs[473] = 16'h3F7A; // 0.976562
    expected_outputs[474] = 16'h3F5E; // 0.867188
    expected_outputs[475] = 16'h3F7D; // 0.988281
    expected_outputs[476] = 16'h3F69; // 0.910156

    expected_outputs[477] = 16'h3F7D; // 0.988281
    expected_outputs[478] = 16'h3F4B; // 0.792969
    expected_outputs[479] = 16'h3F7C; // 0.984375
    expected_outputs[480] = 16'h3F7B; // 0.980469
    expected_outputs[481] = 16'h3F62; // 0.882812
    expected_outputs[482] = 16'h3F5C; // 0.859375
    expected_outputs[483] = 16'h3F7E; // 0.992188

    expected_outputs[484] = 16'h3F65; // 0.894531
    expected_outputs[485] = 16'h3F76; // 0.960938
    expected_outputs[486] = 16'h3F76; // 0.960938
    expected_outputs[487] = 16'h3F69; // 0.910156

    expected_outputs[488] = 16'h3F44; // 0.765625
    expected_outputs[489] = 16'h3F54; // 0.828125
    expected_outputs[490] = 16'h3F4A; // 0.789062
    expected_outputs[491] = 16'h3F75; // 0.957031
    expected_outputs[492] = 16'h3F60; // 0.875000
    expected_outputs[493] = 16'h3F7C; // 0.984375
    expected_outputs[494] = 16'h3F67; // 0.902344
    expected_outputs[495] = 16'h3F7C; // 0.984375
    expected_outputs[496] = 16'h3F7D; // 0.988281
    expected_outputs[497] = 16'h3F50; // 0.812500
    expected_outputs[498] = 16'h3F5A; // 0.851562
    expected_outputs[499] = 16'h3F7C; // 0.984375


    Reg#(UInt#(10)) test_index <- mkReg(0);
    Reg#(UInt#(32)) cycle_count <- mkReg(0);
    Reg#(Bool) input_sent <- mkReg(False);
    Reg#(UInt#(10)) results_collected <- mkReg(0);
    
    rule count_cycles;
        cycle_count <= cycle_count + 1;
    endrule
    
    rule send_input (test_index < 500 && !input_sent);
        let input_val = test_inputs[test_index];
        dut.put_data(input_val);
        $display("Cycle %0d: Sent input %0d: %04h", cycle_count, test_index, fromBF16(input_val));
        input_sent <= True;
    endrule
    
    rule collect_result (dut.hasResult());
        let result <- dut.getResult();
        
        // Calculate error metrics
        Bit#(16) result_bits = fromBF16(result);
        Bit#(16) expected_bits = expected_outputs[results_collected];
        Bit#(16) error_bits = result_bits ^ expected_bits;
        
        // Count number of different bits for error analysis
        function Bit#(5) count_diff_bits(Bit#(16) x);
            Bit#(5) count = 0;
            for (Integer i = 0; i < 16; i = i + 1) begin
                if (x[i] == 1'b1) count = count + 1;
            end
            return count;
        endfunction
        
        Bit#(5) bit_errors = count_diff_bits(error_bits);
        
        $display("Cycle %0d: Test %0d Result", cycle_count, results_collected);
        $display("  Input       : %04h", fromBF16(test_inputs[results_collected]));
        $display("  Result      : %04h", result_bits); 
        $display("  Expected    : %04h", expected_bits);
        $display("  Error (bits): %04h (%0d bits different)", error_bits, bit_errors);
        
        results_collected <= results_collected + 1;
    endrule
    
    rule advance_test (results_collected == test_index && test_index < 10);
        test_index <= test_index + 1;
        input_sent <= False;
    endrule
    
    rule finish (results_collected >= 500);
        $display("Cycle %0d: All tests completed", cycle_count);
        $finish;
    endrule
    
endmodule

endpackage
