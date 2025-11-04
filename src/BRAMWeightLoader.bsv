package BRAMWeightLoader;

import BRAMLoaderWrapperBE::*;
import Vector::*;
import FIFOF::*;

typedef enum {Idle, Reading, Done} LoaderState deriving (Bits, Eq);

interface BRAMWeightLoaderIfc;
   method Action start();
   method Vector#(256, Bit#(16)) get_res();
   method Action done_ack();
endinterface

(* synthesize *)
module mkBRAMWeightLoader (BRAMWeightLoaderIfc);
   
   // Instantiate 66 BRAM loaders
   Vector#(66, BRAMLoaderConcrete) brams <- replicateM(mkBRAMLoaderConcrete);
   
   // Internal vector to store 256 elements
   Vector#(256, Reg#(Bit#(16))) dataVec <- replicateM(mkReg(0));
   
   // State management
   Reg#(LoaderState) state <- mkReg(Idle);
   Reg#(Bit#(10)) readCounter <- mkReg(0);
   Reg#(Bit#(3)) cycleCount <- mkReg(0);
   Reg#(Bool) allReady <- mkReg(False);
   
   // Total elements = 147456, so max element index = 147455
   Bit#(18) maxElement = 147455;
   
   // Check if all BRAMs are ready
   rule checkReady (!allReady);
      Bool ready = True;
      for (Integer i = 0; i < 66; i = i + 1) begin
         ready = ready && brams[i].ready();
      end
      if (ready) allReady <= True;
   endrule
   
   // Handle the 4-cycle read process
   rule doReading (state == Reading && allReady);
      if (cycleCount < 4) begin
         Bit#(18) baseElement = extend(readCounter) * 256 + extend(cycleCount) * 64;
         
         for (Integer i = 0; i < 66; i = i + 1) begin
            Bit#(18) elemA = baseElement + fromInteger(i);
            Bit#(18) elemB = elemA + 66;
            
            Bit#(12) addrA = truncate(elemA / 66);
            Bit#(12) addrB = truncate(elemB / 66);
            
            // Only request if element is within total range
            if (elemA <= maxElement) begin
               brams[i].requestA(addrA);
            end
            if (elemB <= maxElement) begin
               brams[i].requestB(addrB);
            end
         end
         
         cycleCount <= cycleCount + 1;
      end
      else begin
         state <= Done;
      end
   endrule
   
   // Collect responses
   rule collectResponses (state == Reading && cycleCount > 0 && cycleCount <= 4);
      Bit#(3) respCycle = cycleCount - 1;
      Bit#(18) baseElement = extend(readCounter) * 256 + extend(respCycle) * 64;
      
      for (Integer i = 0; i < 66; i = i + 1) begin
         Bit#(18) elemA = baseElement + fromInteger(i);
         Bit#(18) elemB = elemA + 66;
         
         // Only collect if we made the request
         if (elemA <= maxElement) begin
            let dataA <- brams[i].responseA();
            Bit#(8) idxA = truncate(elemA);
            dataVec[idxA] <= dataA;
         end
         
         if (elemB <= maxElement) begin
            let dataB <- brams[i].responseB();
            Bit#(8) idxB = truncate(elemB);
            dataVec[idxB] <= dataB;
         end
      end
   endrule
   
   method Action start() if (state == Idle && allReady);
      state <= Reading;
      cycleCount <= 0;
   endmethod
   
   method Vector#(256, Bit#(16)) get_res() if (state == Done);
      Vector#(256, Bit#(16)) result = newVector;
      for (Integer i = 0; i < 256; i = i + 1) begin
         result[i] = dataVec[i];
      end
      return result;
   endmethod
   
   method Action done_ack() if (state == Done);
      state <= Idle;
      readCounter <= readCounter + 1;
   endmethod

endmodule

endpackage
