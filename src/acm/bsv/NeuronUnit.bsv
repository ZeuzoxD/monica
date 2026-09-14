package NeuronUnit;

import BF16::*;
import BF16_LIF_LoadStep::*;
import Vector::*;

// States for the neuron unit FSM
typedef enum {
    IDLE,
    FEEDING,
    DRAINING,
    DONE
} NeuronState deriving (Bits, Eq, FShow);

interface NeuronUnitIFC;
    method Action feed_input(BF16 x_t_val);
    method Bool is_busy();
    method Bool is_done();
    method UInt#(6) get_current_index();
    method Bool can_accept_input();
    method Vector#(48, Bool) get_spikes();
    method Vector#(48, BF16) get_voltages();
    method Action reset_for_next_token();
endinterface

(*synthesize*)
(* descending_urgency = "collect_output, feed_input" *)
module mkNeuronUnit(NeuronUnitIFC);
    
    BF16_LIF_LoadStepIFC lif <- mkBF16_LIF_LoadStep();
    
    Reg#(NeuronState) state <- mkReg(IDLE);
    Reg#(UInt#(6)) input_index <- mkReg(0);
    Reg#(UInt#(6)) output_index <- mkReg(0);
    
    // Storage for 48 elements - now using BF16
    Vector#(48, Reg#(BF16)) v_t <- replicateM(mkReg(toBF16(16'h0000)));
    Vector#(48, Reg#(UInt#(4))) refr <- replicateM(mkReg(0));
    Vector#(48, Reg#(Bool)) spike_out <- replicateM(mkReg(False));
    
    Reg#(UInt#(6)) inputs_fed <- mkReg(0);
    Reg#(UInt#(6)) outputs_received <- mkReg(0);
    
    rule collect_output ((state == FEEDING || state == DRAINING) && lif.output_valid());
        let out <- lif.get_output();
        
        v_t[output_index] <= out.v_out;
        refr[output_index] <= out.refr_out;
        spike_out[output_index] <= out.spike;
        
        let new_output_index = output_index + 1;
        let new_outputs_received = outputs_received + 1;
        
        output_index <= new_output_index;
        outputs_received <= new_outputs_received;
        
        if (new_outputs_received == 48) begin
            state <= DONE;
            $display("[NeuronUnit] All 48 outputs collected - DONE");
        end
    endrule
    
    method Action feed_input(BF16 x_t_val) if ((state == IDLE || state == FEEDING) && lif.ready_for_input() && inputs_fed < 48);
        lif.load_and_step(v_t[input_index], refr[input_index], x_t_val);
        
        let new_input_index = input_index + 1;
        let new_inputs_fed = inputs_fed + 1;
        
        input_index <= new_input_index;
        inputs_fed <= new_inputs_fed;
        
        if (state == IDLE) begin
            state <= FEEDING;
        end
        else if (new_inputs_fed == 48) begin
            state <= DRAINING;
            $display("[NeuronUnit] All 48 inputs fed, entering DRAINING state");
        end
    endmethod
    
    method Bool is_busy();
        return (state != IDLE && state != DONE);
    endmethod
    
    method Bool is_done();
        return (state == DONE);
    endmethod
    
    method UInt#(6) get_current_index();
        return input_index;
    endmethod
    
    method Bool can_accept_input();
        return ((state == IDLE || state == FEEDING) && 
                lif.ready_for_input() && 
                inputs_fed < 48);
    endmethod
    
    method Vector#(48, Bool) get_spikes() if (state == DONE);
        return readVReg(spike_out);
    endmethod
    
    method Vector#(48, BF16) get_voltages() if (state == DONE);
        return readVReg(v_t);
    endmethod
    
    method Action reset_for_next_token() if (state == DONE);
        state <= IDLE;
        input_index <= 0;
        output_index <= 0;
        inputs_fed <= 0;
        outputs_received <= 0;
        
        for (Integer i = 0; i < 48; i = i + 1) begin
            spike_out[i] <= False;
        end
        
        $display("[NeuronUnit] Reset for next token - v_t and refr preserved");
    endmethod

endmodule

endpackage
