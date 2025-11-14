package BRAMLoaderWrapperBE;
import BRAMHexLoaderBE::*;

interface BRAMLoaderConcrete;
   method Action requestA(Bit#(12) addr);
   method Action requestB(Bit#(12) addr);
   method ActionValue#(Bit#(16)) responseA();
   method ActionValue#(Bit#(16)) responseB();
   method Bool ready();
endinterface

(* synthesize *)
module mkBRAMLoaderConcrete (BRAMLoaderConcrete);
   
   BRAMLoader#(16, 2) loader <- mkBRAMLoader();
   
   method Action requestA(Bit#(12) addr);
      loader.requestA(addr);
   endmethod
   
   method Action requestB(Bit#(12) addr);
      loader.requestB(addr);
   endmethod
   
   method ActionValue#(Bit#(16)) responseA();
      let data <- loader.responseA();
      return data;
   endmethod
   
   method ActionValue#(Bit#(16)) responseB();
      let data <- loader.responseB();
      return data;
   endmethod
   
   method Bool ready() = loader.ready();
endmodule
endpackage
