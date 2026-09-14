package BF16_LIF_LoadStep;

import BF16::*;

typedef struct {
    BF16 v;
    UInt#(4) refr;
} BF16_LIFState deriving (Bits, Eq);

typedef struct {
    BF16 x_t;
} BF16_LIFInput deriving (Bits, Eq);

typedef struct {
    Bool spike;
    BF16 v_out;
    UInt#(4) refr_out;
} BF16_LIFOutput deriving (Bits, Eq);

typedef struct {
    BF16 v_th;
    BF16 v_reset;
    BF16 inv_tau_m;
    UInt#(4) r_len;
} BF16_LIFConfig deriving (Bits, Eq);

typedef struct {
    BF16 v_t_minus_1;
    BF16 stage1_result;
    Bool in_refractory;
    UInt#(4) refr_next;
} Stage1Data deriving (Bits, Eq);

typedef struct {
    BF16 v_t_minus_1;
    BF16 delta_v;
    Bool in_refractory;
    UInt#(4) refr_next;
} Stage2Data deriving (Bits, Eq);

interface BF16_LIF_LoadStepIFC;
    method Action configure(BF16_LIFConfig cfg);
    method Action load_and_step(BF16 v_t, UInt#(4) refr, BF16 x_t);
    method Bool ready_for_input();
    method Bool output_valid();
    method ActionValue#(BF16_LIFOutput) get_output();
endinterface

(*synthesize*)
(* descending_urgency = "pipeline_stage3, pipeline_stage2" *)
module mkBF16_LIF_LoadStep(BF16_LIF_LoadStepIFC);

    // HARDCODED configuration
    Reg#(BF16_LIFConfig) conf <- mkReg(BF16_LIFConfig {
        v_th: toBF16(16'h3F80),      // threshold = 1.0
        v_reset: toBF16(16'h0000),   // reset = 0.0
        inv_tau_m: toBF16(16'h3DCC), // 1/tau_m = 0.1
        r_len: 4'd2                   // refractory length = 2
    });
    
    Reg#(BF16) inv_tau_cached <- mkReg(toBF16(16'h3DCC));
    Reg#(Bool) config_valid <- mkReg(True);
    
    Reg#(Maybe#(Stage1Data)) stage1_data <- mkReg(tagged Invalid);
    Reg#(Maybe#(Stage2Data)) stage2_data <- mkReg(tagged Invalid);
    Reg#(Maybe#(BF16_LIFOutput)) output_reg <- mkReg(tagged Invalid);
    
    // Use split modules
    BF16MultiplierIFC mult <- mkBF16Multiplier();
    BF16AdderIFC adder <- mkBF16Adder();
    BF16ThreeOpAddIFC three_op_add <- mkBF16ThreeOpAdd();
    
    rule pipeline_stage2 (config_valid && isValid(stage1_data) && !isValid(stage2_data));
        let s1 = fromMaybe(?, stage1_data);
        stage1_data <= tagged Invalid;
        
        if (s1.in_refractory) begin
            stage2_data <= tagged Valid (Stage2Data {
                v_t_minus_1: s1.v_t_minus_1,
                delta_v: toBF16(16'h0000),
                in_refractory: True,
                refr_next: s1.refr_next
            });
        end else begin
            Bit#(16) delta_v_bits = mult.multiply(fromBF16(inv_tau_cached), fromBF16(s1.stage1_result));
            stage2_data <= tagged Valid (Stage2Data {
                v_t_minus_1: s1.v_t_minus_1,
                delta_v: toBF16(delta_v_bits),
                in_refractory: False,
                refr_next: s1.refr_next
            });
        end
    endrule
    
    rule pipeline_stage3 (config_valid && isValid(stage2_data) && !isValid(output_reg));
        let s2 = fromMaybe(?, stage2_data);
        stage2_data <= tagged Invalid;
        
        let curr_config = conf;
        BF16 v_next;
        UInt#(4) refr_next;
        Bool spike;
        
        if (s2.in_refractory) begin
            v_next = curr_config.v_reset;
            spike = False;
            refr_next = s2.refr_next;
        end else begin
            Bit#(16) v_tmp_bits = adder.add(fromBF16(s2.v_t_minus_1), fromBF16(s2.delta_v));
            BF16 v_tmp = toBF16(v_tmp_bits);
            
            spike = bf16_gte(fromBF16(v_tmp), fromBF16(curr_config.v_th));
            if (spike) begin
                v_next = curr_config.v_reset;
                refr_next = curr_config.r_len;
            end else begin
                v_next = v_tmp;
                refr_next = 0;
            end
        end
        
        output_reg <= tagged Valid (BF16_LIFOutput { 
            spike: spike, 
            v_out: v_next,
            refr_out: refr_next
        });
    endrule
    
    method Action configure(BF16_LIFConfig cfg);
        // Config is hardcoded, do nothing
    endmethod

    method Action load_and_step(BF16 v_t, UInt#(4) refr, BF16 x_t) 
        if (config_valid && !isValid(stage1_data));
        
        let curr_config = conf;
        
        if (refr > 0) begin
            stage1_data <= tagged Valid (Stage1Data {
                v_t_minus_1: v_t,
                stage1_result: toBF16(16'h0000),
                in_refractory: True,
                refr_next: refr - 1
            });
        end else begin
            Bit#(16) stage1_result_bits = three_op_add.add3(fromBF16(v_t), fromBF16(curr_config.v_reset), fromBF16(x_t));
            stage1_data <= tagged Valid (Stage1Data {
                v_t_minus_1: v_t,
                stage1_result: toBF16(stage1_result_bits),
                in_refractory: False,
                refr_next: 0
            });
        end
    endmethod

    method Bool ready_for_input();
        return config_valid && !isValid(stage1_data);
    endmethod

    method Bool output_valid();
        return isValid(output_reg);
    endmethod

    method ActionValue#(BF16_LIFOutput) get_output() if (isValid(output_reg));
        output_reg <= tagged Invalid;
        return fromMaybe(?, output_reg);
    endmethod

endmodule

endpackage
