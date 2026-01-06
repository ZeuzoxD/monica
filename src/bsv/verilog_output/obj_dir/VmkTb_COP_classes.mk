# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VmkTb_COP.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VmkTb_COP \
	VmkTb_COP___024root__DepSet_h0e244753__0 \
	VmkTb_COP___024root__DepSet_h08093c46__0 \
	VmkTb_COP___024root__DepSet_h08093c46__1 \
	VmkTb_COP___024root__DepSet_h08093c46__2 \
	VmkTb_COP___024root__DepSet_h08093c46__3 \
	VmkTb_COP___024root__DepSet_h08093c46__4 \
	VmkTb_COP___024root__DepSet_h08093c46__5 \
	VmkTb_COP___024root__DepSet_h08093c46__6 \
	VmkTb_COP___024root__DepSet_h08093c46__7 \
	VmkTb_COP___024root__DepSet_h08093c46__8 \
	VmkTb_COP___024root__DepSet_h08093c46__9 \
	VmkTb_COP___024root__DepSet_h08093c46__10 \
	VmkTb_COP___024root__DepSet_h08093c46__11 \
	VmkTb_COP___024root__DepSet_h08093c46__12 \
	VmkTb_COP___024root__DepSet_h08093c46__13 \
	VmkTb_COP___024root__DepSet_h08093c46__14 \
	VmkTb_COP___024root__DepSet_h08093c46__15 \
	VmkTb_COP___024root__DepSet_h08093c46__16 \
	VmkTb_COP___024root__DepSet_h08093c46__17 \
	VmkTb_COP___024root__DepSet_h08093c46__18 \
	VmkTb_COP___024root__DepSet_h08093c46__19 \
	VmkTb_COP___024root__DepSet_h08093c46__20 \
	VmkTb_COP___024root__DepSet_h08093c46__21 \
	VmkTb_COP___024root__DepSet_h08093c46__22 \
	VmkTb_COP___024root__DepSet_h08093c46__23 \
	VmkTb_COP___024root__DepSet_h08093c46__24 \
	VmkTb_COP___024root__DepSet_h08093c46__25 \
	VmkTb_COP___024root__DepSet_h08093c46__26 \
	VmkTb_COP___024root__DepSet_h08093c46__27 \
	VmkTb_COP___024root__DepSet_h08093c46__28 \
	VmkTb_COP___024root__DepSet_h08093c46__29 \
	VmkTb_COP___024root__DepSet_h08093c46__30 \
	VmkTb_COP___024root__DepSet_h08093c46__31 \
	VmkTb_COP___024root__DepSet_h08093c46__32 \
	VmkTb_COP___024root__DepSet_h08093c46__33 \
	VmkTb_COP___024root__DepSet_h08093c46__34 \
	VmkTb_COP___024root__DepSet_h08093c46__35 \
	VmkTb_COP___024root__DepSet_h08093c46__36 \
	VmkTb_COP___024root__DepSet_h08093c46__37 \
	VmkTb_COP___024root__DepSet_h08093c46__38 \
	VmkTb_COP___024root__DepSet_h08093c46__39 \
	VmkTb_COP___024root__DepSet_h08093c46__40 \
	VmkTb_COP___024root__DepSet_h08093c46__41 \
	VmkTb_COP___024root__DepSet_h08093c46__42 \
	VmkTb_COP___024root__DepSet_h08093c46__43 \
	VmkTb_COP___024root__DepSet_h08093c46__44 \
	VmkTb_COP___024root__DepSet_h08093c46__45 \
	VmkTb_COP___024root__DepSet_h08093c46__46 \
	VmkTb_COP___024root__DepSet_h08093c46__47 \
	VmkTb_COP___024root__DepSet_h08093c46__48 \
	VmkTb_COP___024root__DepSet_h08093c46__49 \
	VmkTb_COP___024root__DepSet_h08093c46__50 \
	VmkTb_COP___024root__DepSet_h08093c46__51 \
	VmkTb_COP___024root__DepSet_h08093c46__52 \
	VmkTb_COP___024root__DepSet_h08093c46__53 \
	VmkTb_COP___024root__DepSet_h08093c46__54 \
	VmkTb_COP___024root__DepSet_h08093c46__55 \
	VmkTb_COP___024root__DepSet_h08093c46__56 \
	VmkTb_COP___024root__DepSet_h08093c46__57 \
	VmkTb_COP___024root__DepSet_h08093c46__58 \
	VmkTb_COP___024root__DepSet_h08093c46__59 \
	VmkTb_COP___024root__DepSet_h08093c46__60 \
	VmkTb_COP___024root__DepSet_h08093c46__61 \
	VmkTb_COP___024root__DepSet_h08093c46__62 \
	VmkTb_COP___024root__DepSet_h08093c46__63 \
	VmkTb_COP___024root__DepSet_h08093c46__64 \
	VmkTb_COP___024root__DepSet_h08093c46__65 \
	VmkTb_COP___024root__DepSet_h08093c46__66 \
	VmkTb_COP___024root__DepSet_h08093c46__67 \
	VmkTb_COP___024root__DepSet_h08093c46__68 \
	VmkTb_COP___024root__DepSet_h08093c46__69 \
	VmkTb_COP___024root__DepSet_h08093c46__70 \
	VmkTb_COP___024root__DepSet_h08093c46__71 \
	VmkTb_COP___024root__DepSet_h08093c46__72 \
	VmkTb_COP___024root__DepSet_h08093c46__73 \
	VmkTb_COP___024root__DepSet_h08093c46__74 \
	VmkTb_COP___024root__DepSet_h08093c46__75 \
	VmkTb_COP___024root__DepSet_h08093c46__76 \
	VmkTb_COP___024root__DepSet_h08093c46__77 \
	VmkTb_COP___024root__DepSet_h08093c46__78 \
	VmkTb_COP___024root__DepSet_h08093c46__79 \
	VmkTb_COP___024root__DepSet_h08093c46__80 \
	VmkTb_COP___024root__DepSet_h08093c46__81 \
	VmkTb_COP___024root__DepSet_h08093c46__82 \
	VmkTb_COP___024root__DepSet_h08093c46__83 \
	VmkTb_COP___024root__DepSet_h08093c46__84 \
	VmkTb_COP___024root__DepSet_h08093c46__85 \
	VmkTb_COP___024root__DepSet_h08093c46__86 \
	VmkTb_COP___024root__DepSet_h08093c46__87 \
	VmkTb_COP___024root__DepSet_h08093c46__88 \
	VmkTb_COP___024root__DepSet_h08093c46__89 \
	VmkTb_COP___024root__DepSet_h08093c46__90 \
	VmkTb_COP___024root__DepSet_h08093c46__91 \
	VmkTb_COP___024root__DepSet_h08093c46__92 \
	VmkTb_COP___024root__DepSet_h08093c46__93 \
	VmkTb_COP___024root__DepSet_h08093c46__94 \
	VmkTb_COP___024root__DepSet_h08093c46__95 \
	VmkTb_COP___024root__DepSet_h08093c46__96 \
	VmkTb_COP___024root__DepSet_h08093c46__97 \
	VmkTb_COP___024root__DepSet_h08093c46__98 \
	VmkTb_COP___024root__DepSet_h08093c46__99 \
	VmkTb_COP___024root__DepSet_h08093c46__100 \
	VmkTb_COP___024root__DepSet_h08093c46__101 \
	VmkTb_COP___024root__DepSet_h08093c46__102 \
	VmkTb_COP___024root__DepSet_h08093c46__103 \
	VmkTb_COP___024root__DepSet_h08093c46__104 \
	VmkTb_COP___024root__DepSet_h08093c46__105 \
	VmkTb_COP___024root__DepSet_h08093c46__106 \
	VmkTb_COP___024root__DepSet_h08093c46__107 \
	VmkTb_COP___024root__DepSet_h08093c46__108 \
	VmkTb_COP___024root__DepSet_h08093c46__109 \
	VmkTb_COP___024root__DepSet_h08093c46__110 \
	VmkTb_COP___024root__DepSet_h08093c46__111 \
	VmkTb_COP___024root__DepSet_h08093c46__112 \
	VmkTb_COP___024root__DepSet_h08093c46__113 \
	VmkTb_COP___024root__DepSet_h08093c46__114 \
	VmkTb_COP___024root__DepSet_h08093c46__115 \
	VmkTb_COP___024root__DepSet_h08093c46__116 \
	VmkTb_COP___024root__DepSet_h08093c46__117 \
	VmkTb_COP___024root__DepSet_h08093c46__118 \
	VmkTb_COP___024root__DepSet_h08093c46__119 \
	VmkTb_COP___024root__DepSet_h08093c46__120 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VmkTb_COP__ConstPool_0 \
	VmkTb_COP___024root__Slow \
	VmkTb_COP___024root__DepSet_h0e244753__0__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__0__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__1__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__2__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__3__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__4__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__5__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__6__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__7__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__8__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__9__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__10__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__11__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__12__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__13__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__14__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__15__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__16__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__17__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__18__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__19__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__20__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__21__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__22__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__23__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__24__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__25__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__26__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__27__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__28__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__29__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__30__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__31__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__32__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__33__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__34__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__35__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__36__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__37__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__38__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__39__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__40__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__41__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__42__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__43__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__44__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__45__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__46__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__47__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__48__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__49__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__50__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__51__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__52__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__53__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__54__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__55__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__56__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__57__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__58__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__59__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__60__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__61__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__62__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__63__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__64__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__65__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__66__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__67__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__68__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__69__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__70__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__71__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__72__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__73__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__74__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__75__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__76__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__77__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__78__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__79__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__80__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__81__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__82__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__83__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__84__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__85__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__86__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__87__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__88__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__89__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__90__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__91__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__92__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__93__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__94__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__95__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__96__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__97__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__98__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__99__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__100__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__101__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__102__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__103__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__104__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__105__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__106__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__107__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__108__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__109__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__110__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__111__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__112__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__113__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__114__Slow \
	VmkTb_COP___024root__DepSet_h08093c46__115__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VmkTb_COP__Trace__0 \
	VmkTb_COP__Trace__1 \
	VmkTb_COP__Trace__2 \
	VmkTb_COP__Trace__3 \
	VmkTb_COP__Trace__4 \
	VmkTb_COP__Trace__5 \
	VmkTb_COP__Trace__6 \
	VmkTb_COP__Trace__7 \
	VmkTb_COP__Trace__8 \
	VmkTb_COP__Trace__9 \
	VmkTb_COP__Trace__10 \
	VmkTb_COP__Trace__11 \
	VmkTb_COP__Trace__12 \
	VmkTb_COP__Trace__13 \
	VmkTb_COP__Trace__14 \
	VmkTb_COP__Trace__15 \
	VmkTb_COP__Trace__16 \
	VmkTb_COP__Trace__17 \
	VmkTb_COP__Trace__18 \
	VmkTb_COP__Trace__19 \
	VmkTb_COP__Trace__20 \
	VmkTb_COP__Trace__21 \
	VmkTb_COP__Trace__22 \
	VmkTb_COP__Trace__23 \
	VmkTb_COP__Trace__24 \
	VmkTb_COP__Trace__25 \
	VmkTb_COP__Trace__26 \
	VmkTb_COP__Trace__27 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VmkTb_COP__Syms \
	VmkTb_COP__Trace__0__Slow \
	VmkTb_COP__TraceDecls__0__Slow \
	VmkTb_COP__Trace__1__Slow \
	VmkTb_COP__Trace__2__Slow \
	VmkTb_COP__Trace__3__Slow \
	VmkTb_COP__Trace__4__Slow \
	VmkTb_COP__Trace__5__Slow \
	VmkTb_COP__Trace__6__Slow \
	VmkTb_COP__Trace__7__Slow \
	VmkTb_COP__Trace__8__Slow \
	VmkTb_COP__Trace__9__Slow \
	VmkTb_COP__Trace__10__Slow \
	VmkTb_COP__Trace__11__Slow \
	VmkTb_COP__Trace__12__Slow \
	VmkTb_COP__Trace__13__Slow \
	VmkTb_COP__Trace__14__Slow \
	VmkTb_COP__Trace__15__Slow \
	VmkTb_COP__Trace__16__Slow \
	VmkTb_COP__Trace__17__Slow \
	VmkTb_COP__Trace__18__Slow \
	VmkTb_COP__Trace__19__Slow \
	VmkTb_COP__Trace__20__Slow \
	VmkTb_COP__Trace__21__Slow \
	VmkTb_COP__Trace__22__Slow \
	VmkTb_COP__Trace__23__Slow \
	VmkTb_COP__Trace__24__Slow \
	VmkTb_COP__Trace__25__Slow \
	VmkTb_COP__Trace__26__Slow \
	VmkTb_COP__Trace__27__Slow \
	VmkTb_COP__Trace__28__Slow \
	VmkTb_COP__Trace__29__Slow \
	VmkTb_COP__Trace__30__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
