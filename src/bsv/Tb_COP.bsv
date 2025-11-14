package Tb_COP;


import COP::*;
import BF16::*;
import Vector::*;

(* synthesize *)
module mkTb_COP(Empty);
  COP_Ifc cop <- mkCOP();

  Reg#(Bit#(32)) cycle <- mkReg(0);
  Reg#(Bool) started <- mkReg(False);

  rule count_cycles;
    cycle <= cycle + 1;
  endrule
  
  rule start_cop (!started && cycle == 5);
    cop.start_computation();

    started <= True;
    $display("[Cycle %0d] Testbench: Started COP computation", cycle);
    $display("[Cycle %0d] TB: Weights will be loaded from BRAM internally", cycle);
  endrule 

  rule check_done (started && cop.computation_done());
    $display("[Cycle %0d] Total cycles taken: %0d", cycle, cycle);
    $display("\n[Cycle %0d] Testbench: Finishing simulation", cycle);
    $finish(0);
  endrule
   
  rule timeout (cycle > 200000);
    $display("[Cycle %0d] ERROR: Timeout! Computation didn't complete.", cycle);
    $finish(1);
  endrule
   

endmodule

endpackage
