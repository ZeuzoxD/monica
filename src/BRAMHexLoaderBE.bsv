package BRAMHexLoaderBE;

import BRAM::*;
import BRAMCore::*;
import Vector::*;

interface BRAMLoader#(numeric type data_sz, numeric type n);
   method Action start();
   method Bool done();
   method Vector#(256, Bit#(data_sz)) getVectorK1();
   method Vector#(256, Bit#(data_sz)) getVectorK2();
   method Vector#(256, Bit#(data_sz)) getVectorK3();
endinterface


module mkBRAMLoader#(String hexFile) (BRAMLoader#(data_sz, n))
   provisos(Bits#(Bit#(data_sz), data_sz),
            Div#(data_sz, n, chunk_sz),
            Mul#(chunk_sz, n, data_sz));
   
   // Load BRAM from .hex file (768 entries) using BE version
   BRAM_DUAL_PORT_BE#(Bit#(10), Bit#(data_sz), n) bram <- mkBRAMCore2BELoad(768, False, hexFile, False);
   
   // Three separate vectors for the three stages
   Vector#(256, Reg#(Bit#(data_sz))) vec_k_1 <- replicateM(mkReg(0));  // 0-255
   Vector#(256, Reg#(Bit#(data_sz))) vec_k_2 <- replicateM(mkReg(0));  // 256-511
   Vector#(256, Reg#(Bit#(data_sz))) vec_k_3 <- replicateM(mkReg(0));  // 512-767
   
   Reg#(Bit#(10)) readPairIdx <- mkReg(0);  // Tracks pairs: 0, 1, 2, ... 383
   Reg#(Bool) transferring <- mkReg(False);
   Reg#(Bool) transferDone <- mkReg(False);
   Reg#(Bool) waitData <- mkReg(False);
   Reg#(Bool) printed <- mkReg(False);
   Reg#(Bit#(10)) initDelay <- mkReg(0);
   
   // Progress tracking registers
   Reg#(Bool) k1_done <- mkReg(False);
   Reg#(Bool) k2_done <- mkReg(False);
   Reg#(Bool) k3_done <- mkReg(False);
   
   // Cycle counter
   Reg#(Bit#(32)) cycleCount <- mkReg(0);
   
   // Rule to increment cycle counter every cycle
   rule incrementCycle;
      cycleCount <= cycleCount + 1;
   endrule
   
   // Initialization delay rule
   rule doInit (!transferring && !transferDone && initDelay < 10);
      initDelay <= initDelay + 1;
   endrule
   
   rule doTransfer (transferring && !transferDone);
      if (!waitData) begin
         // Calculate even and odd addresses from pair index
         Bit#(10) addrEven = readPairIdx << 1;       // readPairIdx * 2
         Bit#(10) addrOdd = (readPairIdx << 1) + 1;  // readPairIdx * 2 + 1
         
         // Issue reads on both ports simultaneously
         // For reads, write enable is 0 (all bits of byte-enable are 0)
         bram.a.put(0, addrEven, ?);
         bram.b.put(0, addrOdd, ?);
         waitData <= True;
      end
      else begin
         // Read data from both ports
         let dataA = bram.a.read();
         let dataB = bram.b.read();
         
         // Calculate addresses for storage
         Bit#(10) addrEven = readPairIdx << 1;
         Bit#(10) addrOdd = (readPairIdx << 1) + 1;
         
         // Store data into appropriate vector based on address range
         // vec_k_1: addresses 0-255
         if (addrEven < 256) begin
            vec_k_1[addrEven] <= dataA;
         end
         // vec_k_2: addresses 256-511
         else if (addrEven < 512) begin
            vec_k_2[addrEven - 256] <= dataA;
         end
         // vec_k_3: addresses 512-767
         else begin
            vec_k_3[addrEven - 512] <= dataA;
         end
         
         // Store odd address data
         if (addrOdd < 256) begin
            vec_k_1[addrOdd] <= dataB;
         end
         else if (addrOdd < 512) begin
            vec_k_2[addrOdd - 256] <= dataB;
         end
         else begin
            vec_k_3[addrOdd - 512] <= dataB;
         end
         
         // Track completion of each vector
         if (addrOdd == 255 && !k1_done) begin
            k1_done <= True;
            $display("[Cycle %0d]  vec_k_1 transfer complete (entries 0-255)", cycleCount);
         end
         
         if (addrOdd == 511 && !k2_done) begin
            k2_done <= True;
            $display("[Cycle %0d]  vec_k_2 transfer complete (entries 256-511)", cycleCount);
         end
         
         if (addrOdd == 767 && !k3_done) begin
            k3_done <= True;
            $display("[Cycle %0d]  vec_k_3 transfer complete (entries 512-767)", cycleCount);
         end
         
         // Check if we've read all 384 pairs (768 entries)
         if (readPairIdx == 383) begin
            transferDone <= True;
            transferring <= False;
            $display("[Cycle %0d] === ALL TRANSFERS COMPLETE ===", cycleCount);
            $display("Loaded from %s using dual ports", hexFile);
         end
         else begin
            readPairIdx <= readPairIdx + 1;
         end
         waitData <= False;
      end
   endrule
   
   rule printVector (transferDone && !printed);
      $display("\n=== vec_k_1 (0-255) Sample ===");
      for (Integer i = 0; i < 10; i = i + 1) begin
         $display("vec_k_1[%0d] = 0x%h", i, vec_k_1[i]);
      end
      
      $display("\n=== vec_k_2 (256-511) Sample ===");
      for (Integer i = 0; i < 10; i = i + 1) begin
         $display("vec_k_2[%0d] (global %0d) = 0x%h", i, i+256, vec_k_2[i]);
      end
      
      $display("\n=== vec_k_3 (512-767) Sample ===");
      for (Integer i = 0; i < 10; i = i + 1) begin
         $display("vec_k_3[%0d] (global %0d) = 0x%h", i, i+512, vec_k_3[i]);
      end
      $display("======================\n");
      printed <= True;
   endrule
   
   method Action start() if (!transferring && !transferDone && initDelay == 10);
      transferring <= True;
      readPairIdx <= 0;
      transferDone <= False;
      waitData <= False;
      k1_done <= False;
      k2_done <= False;
      k3_done <= False;
   endmethod
   
   method Bool done() = transferDone;
   
   method Vector#(256, Bit#(data_sz)) getVectorK1() if (transferDone);
      return readVReg(vec_k_1);
   endmethod
   
   method Vector#(256, Bit#(data_sz)) getVectorK2() if (transferDone);
      return readVReg(vec_k_2);
   endmethod
   
   method Vector#(256, Bit#(data_sz)) getVectorK3() if (transferDone);
      return readVReg(vec_k_3);
   endmethod
endmodule

endpackage
