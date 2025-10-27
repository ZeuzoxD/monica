package BRAMLoaderWrapperBE;

import BRAMHexLoaderBE::*;
import Vector::*;

// Concrete interface with 16-bit data
interface BRAMLoaderConcrete;
   method Action start();
   method Bool done();
   method Vector#(256, Bit#(16)) getVectorK1();
   method Vector#(256, Bit#(16)) getVectorK2();
   method Vector#(256, Bit#(16)) getVectorK3();
endinterface

(* synthesize *)
module mkBRAMLoaderConcreteBE (BRAMLoaderConcrete);
   
   // Instantiate with 16-bit data and 2 byte-enable chunks (16 bits = 2 bytes)
   BRAMLoader#(16,2) loader <- mkBRAMLoader("data.hex");
   
   method Action start();
      loader.start();
   endmethod
   
   method Bool done();
      return loader.done();
   endmethod
   
   method Vector#(256, Bit#(16)) getVectorK1();
      return loader.getVectorK1();
   endmethod
   
   method Vector#(256, Bit#(16)) getVectorK2();
      return loader.getVectorK2();
   endmethod
   
   method Vector#(256, Bit#(16)) getVectorK3();
      return loader.getVectorK3();
   endmethod
endmodule

endpackage
