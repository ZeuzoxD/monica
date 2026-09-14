package LIFLayer;

import BF16::*;
import BF16_LIF_LoadStep::*;
import NeuronUnit::*;
import Vector::*;

typedef enum {
    LAYER_IDLE,
    LAYER_PROCESSING,
    LAYER_WAIT_NEURONS,
    LAYER_DONE
} LayerState deriving (Bits, Eq, FShow);

interface LIFLayerIFC;
    method Action feed_inputs(Vector#(16, BF16) inputs);
    method Bool is_idle();
    method Bool is_processing();
    method Bool is_done();
    method UInt#(6) get_current_element();
    method Vector#(16, Vector#(48, Bool)) get_all_spikes();
    method Vector#(16, Vector#(48, BF16)) get_all_voltages();
    method Action reset_for_next_token();
endinterface

(*synthesize*)
module mkLIFLayer(LIFLayerIFC);
    
    Vector#(16, NeuronUnitIFC) neurons <- replicateM(mkNeuronUnit);
    
    Reg#(LayerState) layer_state <- mkReg(LAYER_IDLE);
    Reg#(UInt#(6)) element_index <- mkReg(0);
    
    rule check_all_done (layer_state == LAYER_WAIT_NEURONS);
        Bool all_done = True;
        for (Integer i = 0; i < 16; i = i + 1) begin
            if (!neurons[i].is_done()) begin
                all_done = False;
            end
        end
        
        if (all_done) begin
            layer_state <= LAYER_DONE;
            $display("[LIFLayer] All 16 neurons completed 48 elements - LAYER DONE");
        end
    endrule
    
    method Action feed_inputs(Vector#(16, BF16) inputs) if (layer_state == LAYER_IDLE || layer_state == LAYER_PROCESSING);
        Bool all_can_accept = True;
        for (Integer i = 0; i < 16; i = i + 1) begin
            if (!neurons[i].can_accept_input()) begin
                all_can_accept = False;
            end
        end
        
        if (all_can_accept) begin
            for (Integer i = 0; i < 16; i = i + 1) begin
                neurons[i].feed_input(inputs[i]);
            end
            
            if (element_index == 47) begin
                $display("[LIFLayer] All 48 elements fed, waiting for neurons to finish");
                layer_state <= LAYER_WAIT_NEURONS;
                element_index <= 0;
            end else begin
                element_index <= element_index + 1;
                layer_state <= LAYER_PROCESSING;
            end
        end
    endmethod
    
    method Bool is_idle();
        return (layer_state == LAYER_IDLE);
    endmethod
    
    method Bool is_processing();
        return (layer_state == LAYER_PROCESSING || layer_state == LAYER_WAIT_NEURONS);
    endmethod
    
    method Bool is_done();
        return (layer_state == LAYER_DONE);
    endmethod
    
    method UInt#(6) get_current_element();
        return element_index;
    endmethod
    
    method Vector#(16, Vector#(48, Bool)) get_all_spikes() if (layer_state == LAYER_DONE);
        Vector#(16, Vector#(48, Bool)) all_spikes = newVector;
        for (Integer i = 0; i < 16; i = i + 1) begin
            all_spikes[i] = neurons[i].get_spikes();
        end
        return all_spikes;
    endmethod
    
    method Vector#(16, Vector#(48, BF16)) get_all_voltages() if (layer_state == LAYER_DONE);
        Vector#(16, Vector#(48, BF16)) all_voltages = newVector;
        for (Integer i = 0; i < 16; i = i + 1) begin
            all_voltages[i] = neurons[i].get_voltages();
        end
        return all_voltages;
    endmethod
    
    method Action reset_for_next_token() if (layer_state == LAYER_DONE);
        for (Integer i = 0; i < 16; i = i + 1) begin
            neurons[i].reset_for_next_token();
        end
        
        layer_state <= LAYER_IDLE;
        element_index <= 0;
        
        $display("[LIFLayer] Layer reset for next token - all v_t and refr preserved");
    endmethod

endmodule

endpackage
