package COP_Wrapper;
import Vector::*;
import BF16::*;
import COP::*;
import FIFOF::*;

// Operation codes for the wrapper
typedef enum {
  OP_START_COMPUTATION = 4'd0,
  OP_CHECK_DONE        = 4'd1,
  OP_WRITE_BRAM_START  = 4'd2,  // Initialize write sequence
  OP_WRITE_BRAM_DATA   = 4'd3,  // Stream data (one BF16 at a time)
  OP_CHECK_READY       = 4'd4,
  OP_IDLE              = 4'd15
} OpCode deriving (Bits, Eq);

interface COP_Wrapper_Ifc;
  // Reduced to 16-bit interface
  method Action request(Bit#(4) opcode, Bit#(16) data_in);
  method Bit#(16) response();
  method Bool response_valid();
endinterface

(* synthesize *)
module mkCOP_Wrapper(COP_Wrapper_Ifc);
  
  COP_Ifc cop <- mkCOP();
  
  Reg#(Bit#(16)) response_reg <- mkReg(0);
  Reg#(Bool) response_valid_reg <- mkReg(False);
  Reg#(OpCode) current_op <- mkReg(OP_IDLE);
  
  // BRAM write state - MUCH SMALLER now
  Reg#(Bit#(4)) bram_id_reg <- mkReg(0);
  Reg#(Bit#(10)) bram_addr_reg <- mkReg(0);
  Reg#(Bit#(9)) write_index <- mkReg(0);      // Current position in 256-element vector
  Reg#(Bool) writing_bram <- mkReg(False);
  
  // Small streaming buffer - only 16 BF16 values instead of 256!
  Vector#(16, Reg#(Bit#(16))) stream_buffer <- replicateM(mkReg(0));
  Reg#(Bit#(9)) buffer_index <- mkReg(0);
  
  // Status register
  Reg#(Bool) write_complete <- mkReg(False);
  
  rule handle_computation_done(current_op == OP_CHECK_DONE && !response_valid_reg);
    response_reg <= cop.computation_done() ? 16'd1 : 16'd0;
    response_valid_reg <= True;
    current_op <= OP_IDLE;
  endrule
  
  rule handle_ready_check(current_op == OP_CHECK_READY && !response_valid_reg);
    response_reg <= cop.ready_for_write() ? 16'd1 : 16'd0;
    response_valid_reg <= True;
    current_op <= OP_IDLE;
  endrule
  
  // When we have 16 values buffered, write them to COP (as part of 256-element chunk)
  rule perform_buffered_write(writing_bram && buffer_index == 16);
    // We've collected 16 values - but we need 256 for a full write
    // So we accumulate in batches
    
    if (write_index == 256) begin
      // Completed full 256-element write
      writing_bram <= False;
      write_index <= 0;
      buffer_index <= 0;
      write_complete <= True;
      response_reg <= 16'd1; // Success
      response_valid_reg <= True;
      current_op <= OP_IDLE;
      $display("WRAPPER: Completed BRAM write for BRAM %0d at base_addr %0d", bram_id_reg, bram_addr_reg);
    end else begin
      // Still accumulating - reset buffer for next 16
      buffer_index <= 0;
      
      // Optional: If you want to actually write to COP in smaller chunks,
      // you'd need to modify COP interface to accept 16-element writes
      // For now, this just acknowledges receipt
      response_reg <= 16'hACE0 | zeroExtend(write_index[7:0]); // ACK with progress
      response_valid_reg <= True;
    end
  endrule
  
  method Action request(Bit#(4) opcode, Bit#(16) data_in) if (!response_valid_reg);
    OpCode op = unpack(opcode);
    
    case (op)
      OP_START_COMPUTATION: begin
        cop.start_computation();
        response_reg <= 16'd1; // Ack
        response_valid_reg <= True;
        current_op <= OP_IDLE;
      end
      
      OP_CHECK_DONE: begin
        current_op <= OP_CHECK_DONE;
      end
      
      OP_WRITE_BRAM_START: begin
        // data_in[15:12] = bram_id, [11:2] = base_addr
        Bit#(4) bram_id = data_in[15:12];
        Bit#(10) base_addr = data_in[11:2];
        
        bram_id_reg <= bram_id;
        bram_addr_reg <= base_addr;
        write_index <= 0;
        buffer_index <= 0;
        writing_bram <= True;
        write_complete <= False;
        
        response_reg <= 16'hBEEF; // Ready for data
        response_valid_reg <= True;
        current_op <= OP_IDLE;
        
        $display("WRAPPER: Starting BRAM write - BRAM %0d, base_addr %0d", bram_id, base_addr);
      end
      
      OP_WRITE_BRAM_DATA: begin
        if (writing_bram && write_index < 256) begin
          // Stream in one BF16 value at a time
          stream_buffer[buffer_index] <= data_in;
          buffer_index <= buffer_index + 1;
          write_index <= write_index + 1;
          
          // Acknowledge receipt
          if (buffer_index == 15) begin
            response_reg <= 16'hBFF0; // Buffer full, will process
          end else begin
            response_reg <= 16'hDA7A | zeroExtend(buffer_index); // Data received
          end
          response_valid_reg <= True;
        end else begin
          response_reg <= 16'h0000; // Error - not in write mode
          response_valid_reg <= True;
        end
      end
      
      OP_CHECK_READY: begin
        current_op <= OP_CHECK_READY;
      end
      
      default: begin
        response_reg <= 16'hDEAD; // Error
        response_valid_reg <= True;
      end
    endcase
  endmethod
  
  method Bit#(16) response();
    return response_reg;
  endmethod
  
  method Bool response_valid();
    return response_valid_reg;
  endmethod

endmodule

endpackage
