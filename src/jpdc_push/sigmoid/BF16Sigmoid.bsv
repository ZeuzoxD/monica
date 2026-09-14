package BF16Sigmoid;

import Vector::*;
import BF16::*;
import RWire::*;

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

   // BUG FIX (same root cause as BF16ExpCore.mkBF16Exp): stage1 used to be
   // written *only* by put_data, which unconditionally set valid=True.
   // Since a register holds its last value when nothing writes it, once a
   // single element was fed, stage1.valid stayed True forever, and
   // pipeline_stage1 kept re-processing the same stale stage1.data every
   // subsequent cycle. In the SigmoidVector768 wrapper this is especially
   // dangerous across back-to-back 768-element operations: without this
   // fix, stale garbage left circulating in stages 2-4 from the tail of
   // one operation would get collected as the first "results" of the next
   // operation.
   //
   // Fix: put_data only pulses a wire; a separate rule runs every cycle
   // and explicitly inserts a bubble (valid=False) into stage1 when no new
   // data arrived this cycle.
   RWire#(BF16) put_wire <- mkRWire;

   rule update_stage1;
     case (put_wire.wget()) matches
       tagged Valid .d: stage1 <= PipelineStage{data: d, valid: True};
       tagged Invalid:   stage1 <= PipelineStage{data: toBF16(16'h0000), valid: False};
     endcase
   endrule

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

   // BUG FIX: same latent issue fixed in BF16Divider_pipeline.bsv --
   // getResult() previously left result_valid to be cleared only by a
   // future bubble reaching stage4. Now getResult() pulses a "consumed"
   // wire that pipeline_stage4 (the sole writer of result_valid) checks,
   // clearing immediately on consumption when no fresh data arrives the
   // same cycle.
   RWire#(void) consumed_wire <- mkRWire;

   rule pipeline_stage4;
      Bool was_consumed = isValid(consumed_wire.wget());
      if (stage4.valid) begin
         BF16 result = toBF16(16'h0000);
         result.sign = pack(False); // Sigmoid is always positive
         result.exp = s3_new_exp;
         result.mantissa = s3_new_man;

         result_data <= result;
         result_valid <= True;
      end else if (was_consumed || result_valid) begin
         result_valid <= False;
      end
   endrule

   method Action put_data(BF16 data);
      put_wire.wset(data);
   endmethod

   method ActionValue#(BF16) getResult() if (result_valid);
      consumed_wire.wset(?);
      return result_data;
   endmethod

   method Bool hasResult();
      return result_valid;
   endmethod
endmodule

endpackage
