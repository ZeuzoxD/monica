package BRAMHexLoaderBE;

import BRAM::*;
import BRAMCore::*;
import Vector::*;

interface BRAMLoader#(numeric type data_sz, numeric type n);
   // Dual port access - can request from both ports simultaneously
   method Action requestA(Bit#(10) addr);
   method Action requestB(Bit#(10) addr);
   method ActionValue#(Bit#(data_sz)) responseA();
   method ActionValue#(Bit#(data_sz)) responseB();
   method Bool ready();  // BRAM is ready to use
endinterface

// Loader with HARDCODED hex file
module mkBRAMLoader (BRAMLoader#(data_sz, n))
   provisos(Bits#(Bit#(data_sz), data_sz),
            Div#(data_sz, n, chunk_sz),
            Mul#(chunk_sz, n, data_sz));
   
   // Load BRAM from data.hex - HARDCODED - DUAL PORT
   BRAM_DUAL_PORT_BE#(Bit#(10), Bit#(data_sz), n) bram <- mkBRAMCore2BELoad(768, False, "data.hex", False);
   
   Reg#(Bool) isReady <- mkReg(False);
   Reg#(Bit#(10)) initDelay <- mkReg(0);
   
   // Simple initialization delay
   rule doInit (!isReady && initDelay < 5);
      initDelay <= initDelay + 1;
      if (initDelay == 4) isReady <= True;
   endrule
   
   // Request read from BRAM Port A
   method Action requestA(Bit#(10) addr) if (isReady);
      bram.a.put(0, addr, ?);  // Read from any address 0-767
   endmethod
   
   // Request read from BRAM Port B
   method Action requestB(Bit#(10) addr) if (isReady);
      bram.b.put(0, addr, ?);  // Read from any address 0-767
   endmethod
   
   // Get response from Port A (1 cycle latency)
   method ActionValue#(Bit#(data_sz)) responseA() if (isReady);
      let data = bram.a.read();
      return data;
   endmethod
   
   // Get response from Port B (1 cycle latency)
   method ActionValue#(Bit#(data_sz)) responseB() if (isReady);
      let data = bram.b.read();
      return data;
   endmethod
   
   method Bool ready() = isReady;
endmodule

endpackage


