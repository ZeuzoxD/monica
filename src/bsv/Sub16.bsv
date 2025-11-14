package Sub16;

import Vector::*;
import BF16::*;

interface Sub16Ifc;
  method ActionValue#(Tuple2#(BF16Vec8, BF16Vec8)) compute(BF16Vec8 pp_8, BF16Vec8 ww_8, BF16Vec8 p_8);
endinterface

(* synthesize *)
module mkSub16(Sub16Ifc);
  Vector#(16, BF16SubIFC) sub_units <- replicateM(mkBF16Sub);

  method ActionValue#(Tuple2#(BF16Vec8, BF16Vec8)) compute(BF16Vec8 pp_8, BF16Vec8 ww_8, BF16Vec8 p_8);
    Vector#(8, BF16) diff_pp = newVector();
    Vector#(8, BF16) diff_ww = newVector();

    for (Integer i = 0; i < 8; i = i + 1) begin
      diff_pp[i] = toBF16(sub_units[i].sub(fromBF16(pp_8[i]), fromBF16(p_8[i])));
      diff_ww[i] = toBF16(sub_units[i + 8].sub(fromBF16(ww_8[i]), fromBF16(p_8[i])));
    end

    return tuple2(diff_pp, diff_ww);
  endmethod
endmodule

endpackage
