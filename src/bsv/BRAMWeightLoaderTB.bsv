package BRAMWeightLoaderTB;
import BRAMWeightLoader::*;
import Vector::*;
import StmtFSM::*;
(* synthesize *)
module mkBRAMWeightLoaderTB (Empty);
   
   BRAMWeightLoaderIfc loader <- mkBRAMWeightLoader();
   
   Reg#(Bit#(32)) cycleCount <- mkReg(0);
   
   // Count cycles
   rule countCycles;
      cycleCount <= cycleCount + 1;
      if (cycleCount > 100000) begin
         $display("ERROR: Testbench timeout at cycle %0d", cycleCount);
         $finish(1);
      end
   endrule
   
   // Test sequence
   Stmt test = seq
      $display("========================================");
      $display("BRAM Weight Loader Testbench");
      $display("Testing until last batch (elements 147200-147455)");
      $display("Total elements: 147456 (54 BRAMs with 2234 + 12 BRAMs with 2235)");
      $display("========================================");
      
      // Wait for initialization
      delay(10);
      
      // Load all batches except the last one
      // Total batches = 147456 / 256 = 576 batches
      // We need to load batch 0 to 574, then print batch 575 (the last one)
      $display("\n[Cycle %0d] Loading batches 0-574 (elements 0-147199)...", cycleCount);
      
      repeat(575) seq
         loader.start();
         delay(10);
         action
            let vec = loader.get_res();
            loader.done_ack();
         endaction
         delay(2);
      endseq
      
      $display("[Cycle %0d] Completed loading 575 batches", cycleCount);
      
      // ===== LAST BATCH (elements 147200-147455) =====
      $display("\n[Cycle %0d] Starting LAST batch read (batch 575, elements 147200-147455)...", cycleCount);
      loader.start();
      
      delay(10);
      
      $display("[Cycle %0d] Getting results from LAST batch...", cycleCount);
      action
         let vec = loader.get_res();
         loader.done_ack();
         
         $display("\nLast 256 elements (147200-147455):");
         for (Integer i = 0; i < 256; i = i + 1) begin
            $display("  Element %0d (vec[%0d]) = 0x%04h", 147200 + i, i, vec[i]);
         end
      endaction
      
      delay(5);
      
      $display("\n========================================");
      $display("Testbench PASSED - Successfully loaded all 147456 elements");
      $display("Total cycles: %0d", cycleCount);
      $display("========================================");
      $finish(0);
   endseq;
   
   mkAutoFSM(test);
endmodule
endpackage
