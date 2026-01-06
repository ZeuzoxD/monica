// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP__Syms.h"
#include "VmkTb_COP___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VmkTb_COP___024root___dump_triggers__stl(VmkTb_COP___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VmkTb_COP___024root___eval_triggers__stl(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___eval_triggers__stl\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VmkTb_COP___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
