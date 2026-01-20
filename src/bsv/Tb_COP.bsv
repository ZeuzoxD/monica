package Tb_COP;

import COP::*;
import BF16::*;
import Vector::*;

typedef enum {
  TB_Idle,
  TB_StartCOP,
  TB_WaitForWriteReady,
  TB_WriteChunk0,
  TB_WriteChunk1,
  TB_WriteChunk2,
  TB_Done
} TB_State deriving (Bits, Eq);

(* synthesize *)
module mkTb_COP(Empty);
  COP_Ifc cop <- mkCOP();

  Reg#(Bit#(32)) cycle <- mkReg(0);
  Reg#(Bool) started <- mkReg(False);
  Reg#(TB_State) tb_state <- mkReg(TB_Idle);
  Reg#(Bit#(4)) current_bram <- mkReg(0);
  Reg#(Bit#(2)) current_chunk <- mkReg(0);  // 0, 1, 2 for the three chunks

  rule count_cycles;
    cycle <= cycle + 1;
  endrule
  
  rule start_cop (tb_state == TB_Idle && cycle == 5);
    cop.start_computation();
    tb_state <= TB_WaitForWriteReady;
    started <= True;
    $display("[Cycle %0d] Testbench: Started COP computation", cycle);
  endrule 

  // Wait for COP to signal it's ready for writes
  rule wait_for_write_ready (tb_state == TB_WaitForWriteReady && cop.ready_for_write());
    tb_state <= TB_WriteChunk0;
    current_bram <= 0;
    current_chunk <= 0;
    $display("[Cycle %0d] Testbench: COP ready for writes, starting chunk 0", cycle);
  endrule

  // Helper function to get the appropriate value for each BRAM and chunk
  function BF16 getValue(Bit#(4) bram_id, Bit#(2) chunk);
    case (chunk)
      0: begin  // Chunk 0
        case (bram_id)
          0: return toBF16(16'h3f80);   // X  = 1.0
          1: return toBF16(16'h4000);   // K  = 2.0
          2: return toBF16(16'h4040);   // V  = 3.0
          3: return toBF16(16'h4080);   // R  = 4.0
          4: return toBF16(16'h40a0);   // STATE = 7.0
          5: return toBF16(16'h4100);   // D  = 8.0
          6: return toBF16(16'h4110);   // E  = 8.5
          7: return toBF16(16'h4120);   // F  = 9.0
          8: return toBF16(16'h4130);   // AA = 9.5
          9: return toBF16(16'h4140);   // BB = 10.0
          10: return toBF16(16'h4150);  // PP = 10.5
          11: return toBF16(16'h40a0);  // TF = 5.0
          12: return toBF16(16'h40c0);  // TD = 6.0
          default: return toBF16(16'h0000);
        endcase
      end
      1: begin  // Chunk 1
        case (bram_id)
          0: return toBF16(16'h4160);   // X  = 11.0
          1: return toBF16(16'h4180);   // K  = 12.0
          2: return toBF16(16'h4190);   // V  = 13.0
          3: return toBF16(16'h41a0);   // R  = 14.0
          4: return toBF16(16'h4210);   // STATE = 17.0
          5: return toBF16(16'h4220);   // D  = 18.0
          6: return toBF16(16'h4230);   // E  = 19.0
          7: return toBF16(16'h4240);   // F  = 20.0
          8: return toBF16(16'h4250);   // AA = 21.0
          9: return toBF16(16'h4260);   // BB = 22.0
          10: return toBF16(16'h4270);  // PP = 23.0
          11: return toBF16(16'h41b0);  // TF = 15.0
          12: return toBF16(16'h4200);  // TD = 16.0
          default: return toBF16(16'h0000);
        endcase
      end
      2: begin  // Chunk 2
        case (bram_id)
          0: return toBF16(16'h4218);   // X  = 24.0
          1: return toBF16(16'h4228);   // K  = 25.0
          2: return toBF16(16'h4238);   // V  = 26.0
          3: return toBF16(16'h4248);   // R  = 27.0
          4: return toBF16(16'h4288);   // STATE = 30.0
          5: return toBF16(16'h4298);   // D  = 31.0
          6: return toBF16(16'h42a0);   // E  = 32.0
          7: return toBF16(16'h42a8);   // F  = 33.0
          8: return toBF16(16'h42b0);   // AA = 34.0
          9: return toBF16(16'h42b8);   // BB = 35.0
          10: return toBF16(16'h42c0);  // PP = 36.0
          11: return toBF16(16'h4260);  // TF = 28.0
          12: return toBF16(16'h4268);  // TD = 29.0
          default: return toBF16(16'h0000);
        endcase
      end
      default: return toBF16(16'h0000);
    endcase
  endfunction

// Write chunk 0 (addresses 0-255)
  rule write_chunk0 (tb_state == TB_WriteChunk0 && cop.ready_for_write() && current_bram < 13);
    Vector#(256, BF16) data = replicate(getValue(current_bram, 0));
    cop.write_bram(current_bram, data, 0);
    $display("[Cycle %0d] Testbench: Writing chunk 0 to BRAM %0d, value=%h", cycle, current_bram, getValue(current_bram, 0));
    
    // Check BEFORE incrementing
    if (current_bram == 12) begin
      tb_state <= TB_WriteChunk1;
      current_bram <= 0;
      $display("[Cycle %0d] Testbench: Chunk 0 writes complete", cycle);
    end else begin
      current_bram <= current_bram + 1;
    end
  endrule

  // Write chunk 1 (addresses 256-511)
  rule write_chunk1 (tb_state == TB_WriteChunk1 && cop.ready_for_write() && current_bram < 13);
    Vector#(256, BF16) data = replicate(getValue(current_bram, 1));
    cop.write_bram(current_bram, data, 256);
    $display("[Cycle %0d] Testbench: Writing chunk 1 to BRAM %0d, value=%h", cycle, current_bram, getValue(current_bram, 1));
    
    // Check BEFORE incrementing
    if (current_bram == 12) begin
      tb_state <= TB_WriteChunk2;
      current_bram <= 0;
      $display("[Cycle %0d] Testbench: Chunk 1 writes complete", cycle);
    end else begin
      current_bram <= current_bram + 1;
    end
  endrule

  // Write chunk 2 (addresses 512-767)
  rule write_chunk2 (tb_state == TB_WriteChunk2 && cop.ready_for_write() && current_bram < 13);
    Vector#(256, BF16) data = replicate(getValue(current_bram, 2));
    cop.write_bram(current_bram, data, 512);
    $display("[Cycle %0d] Testbench: Writing chunk 2 to BRAM %0d, value=%h", cycle, current_bram, getValue(current_bram, 2));
    
    // Check BEFORE incrementing
    if (current_bram == 12) begin
      tb_state <= TB_Done;
      $display("[Cycle %0d] Testbench: ALL BRAM writes complete!", cycle);
    end else begin
      current_bram <= current_bram + 1;
    end
  endrule
  rule check_done (started && cop.computation_done());
    $display("[Cycle %0d] Total cycles taken: %0d", cycle, cycle);
    $display("\n[Cycle %0d] Testbench: Finishing simulation", cycle);
    $finish(0);
  endrule
   
  rule timeout (cycle > 500000);
    $display("[Cycle %0d] ERROR: Timeout! Computation didn't complete.", cycle);
    $finish(1);
  endrule

endmodule

endpackage
