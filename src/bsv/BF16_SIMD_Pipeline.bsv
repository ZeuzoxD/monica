package BF16_SIMD_Pipeline;
import BF16::*;
import BF16_SIMD::*;
import Vector::*;
import GetPut::*;
import ClientServer::*;

interface IfcBF16_SIMD_Pipeline;
   method Action start_computation(Vector#(256, BF16) a, Vector#(256, BF16) b, 
                                   Vector#(256, BF16) c, Vector#(256, BF16) d);
   method Vector#(256, BF16) get_result();
   method Bool computation_done();
endinterface
typedef enum {Idle, ChunksReady, Computing, ResultReady} State deriving (Bits, Eq);

(* synthesize *)
module mkBF16_SIMD_Pipeline(IfcBF16_SIMD_Pipeline);

   // Instantiate 4 BF16 SIMD modules (each handles 64 elements)
   IfcBF16_SIMD simd0 <- mkBF16_SIMD();
   IfcBF16_SIMD simd1 <- mkBF16_SIMD();
   IfcBF16_SIMD simd2 <- mkBF16_SIMD();
   IfcBF16_SIMD simd3 <- mkBF16_SIMD();
   
   // Storage for input chunks (to enable parallel dispatch)
   Reg#(Vector#(64, BF16)) chunk0_a <- mkRegU();
   Reg#(Vector#(64, BF16)) chunk0_b <- mkRegU();
   Reg#(Vector#(64, BF16)) chunk0_c <- mkRegU();
   Reg#(Vector#(64, BF16)) chunk0_d <- mkRegU();
   
   Reg#(Vector#(64, BF16)) chunk1_a <- mkRegU();
   Reg#(Vector#(64, BF16)) chunk1_b <- mkRegU();
   Reg#(Vector#(64, BF16)) chunk1_c <- mkRegU();
   Reg#(Vector#(64, BF16)) chunk1_d <- mkRegU();
   
   Reg#(Vector#(64, BF16)) chunk2_a <- mkRegU();
   Reg#(Vector#(64, BF16)) chunk2_b <- mkRegU();
   Reg#(Vector#(64, BF16)) chunk2_c <- mkRegU();
   Reg#(Vector#(64, BF16)) chunk2_d <- mkRegU();
   
   Reg#(Vector#(64, BF16)) chunk3_a <- mkRegU();
   Reg#(Vector#(64, BF16)) chunk3_b <- mkRegU();
   Reg#(Vector#(64, BF16)) chunk3_c <- mkRegU();
   Reg#(Vector#(64, BF16)) chunk3_d <- mkRegU();
   
   // Storage for final result
   Reg#(Vector#(256, BF16)) result_vector <- mkRegU();
   
   // State management - use a state machine for explicit control
   
   Reg#(State) state <- mkReg(Idle);
   
   // Cycle counter for debugging
   Reg#(Bit#(32)) cycle_count <- mkReg(0);
   Reg#(Bit#(32)) start_cycle <- mkReg(0);
   
   rule count_cycles;
      cycle_count <= cycle_count + 1;
   endrule

   // PARALLEL DISPATCH: All 4 SIMD modules start in SAME cycle
   rule dispatch_parallel (state == ChunksReady);
      simd0.start_computation(chunk0_a, chunk0_b, chunk0_c, chunk0_d);
      simd1.start_computation(chunk1_a, chunk1_b, chunk1_c, chunk1_d);
      simd2.start_computation(chunk2_a, chunk2_b, chunk2_c, chunk2_d);
      simd3.start_computation(chunk3_a, chunk3_b, chunk3_c, chunk3_d);
      
      state <= Computing;
      $display("[Cycle %0d] All 4 SIMD lanes dispatched in PARALLEL", cycle_count);
   endrule

   // Wait for all SIMD modules to complete
   rule check_completion (state == Computing);
      Bool all_done = simd0.computation_done() && simd1.computation_done() && 
                      simd2.computation_done() && simd3.computation_done();
      
      if (all_done) begin
         // Get results from all 4 SIMD modules
         Vector#(64, BF16) res0 = simd0.get_result();
         Vector#(64, BF16) res1 = simd1.get_result();
         Vector#(64, BF16) res2 = simd2.get_result();
         Vector#(64, BF16) res3 = simd3.get_result();
         
         // Build result vector by concatenating all results
         Vector#(128, BF16) part01 = append(res0, res1);
         Vector#(192, BF16) part012 = append(part01, res2);
         Vector#(256, BF16) final_result = append(part012, res3);
         
         result_vector <= final_result;
         state <= ResultReady;
         
         $display("[Cycle %0d] All SIMD modules completed. Total computation cycles: %0d", 
                  cycle_count, cycle_count - start_cycle);
      end
   endrule

   // AUTO-RESET: Return to Idle after result is available (THIS IS THE FIX!)
   rule auto_reset (state == ResultReady);
      state <= Idle;
      $display("[Cycle %0d] Pipeline auto-reset to Idle (ready for next computation)", cycle_count);
   endrule

   method Action start_computation(Vector#(256, BF16) a, Vector#(256, BF16) b, 
                                   Vector#(256, BF16) c, Vector#(256, BF16) d) if (state == Idle);
      
      $display("[Cycle %0d] Starting computation on pipeline module", cycle_count);
      start_cycle <= cycle_count;
      
      // Function to extract chunk from vector (purely combinational)
      function Vector#(64, BF16) extract_chunk(Vector#(256, BF16) vec, Integer start_idx);
         Vector#(64, BF16) chunk = newVector();
         for (Integer i = 0; i < 64; i = i + 1) begin
            chunk[i] = vec[start_idx + i];
         end
         return chunk;
      endfunction
      
      // Extract and store all chunks
      chunk0_a <= extract_chunk(a, 0);
      chunk0_b <= extract_chunk(b, 0);
      chunk0_c <= extract_chunk(c, 0);
      chunk0_d <= extract_chunk(d, 0);
      
      chunk1_a <= extract_chunk(a, 64);
      chunk1_b <= extract_chunk(b, 64);
      chunk1_c <= extract_chunk(c, 64);
      chunk1_d <= extract_chunk(d, 64);
      
      chunk2_a <= extract_chunk(a, 128);
      chunk2_b <= extract_chunk(b, 128);
      chunk2_c <= extract_chunk(c, 128);
      chunk2_d <= extract_chunk(d, 128);
      
      chunk3_a <= extract_chunk(a, 192);
      chunk3_b <= extract_chunk(b, 192);
      chunk3_c <= extract_chunk(c, 192);
      chunk3_d <= extract_chunk(d, 192);
      
      state <= ChunksReady;
   endmethod

   method Vector#(256, BF16) get_result() if (state == ResultReady);
      return result_vector;
   endmethod

   method Bool computation_done() = (state == ResultReady);

endmodule

endpackage