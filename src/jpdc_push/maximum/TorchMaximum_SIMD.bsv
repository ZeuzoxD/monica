package TorchMaximum_SIMD;

import BF16::*;
import TorchMaximum::*;

// ============================================================
// ONE LANE.
//
// Mirrors BF16Divider_SIMD.bsv / BF16Sigmoid_SIMD.bsv in spirit -
// a frozen, proven compute primitive wrapped in a uniformly-named
// lane interface, given its own (*synthesize*) boundary so it
// shows up as its own line item in area/power reports, exactly
// like the divider and sigmoid lanes.
//
// UNCHANGED FROM THOSE TWO: this is deliberately NOT an
// Action/ActionValue pair. mkTorchMaximum::getMax is a plain
// combinational value method (zero clock latency - no registers,
// no rule, nothing to pipeline), and TorchMaximum.bsv is frozen,
// proven arithmetic exactly like BF16Divider_pipeline.bsv and
// BF16Sigmoid.bsv are - so this wrapper stays equally
// combinational rather than forcing a put/get split (and a
// hasResult() that would only ever say True) onto hardware that
// genuinely has no pipeline to report readiness for. Doing that
// would misrepresent the real (zero) latency in any PPA number
// this ablation produces, which defeats the point of the exercise.
// ============================================================

interface IfcTorchMaximum_SIMD;
   method BF16 get_max(BF16 a, BF16 b);
endinterface

(* synthesize *)
module mkTorchMaximum_SIMD(IfcTorchMaximum_SIMD);

   TorchMaximumLiteIfc max_core <- mkTorchMaximum();

   method BF16 get_max(BF16 a, BF16 b);
      return max_core.getMax(a, b);
   endmethod

endmodule
endpackage
