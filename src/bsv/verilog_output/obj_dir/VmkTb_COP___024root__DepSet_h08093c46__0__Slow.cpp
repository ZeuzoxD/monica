// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_ATTR_COLD void VmkTb_COP___024root___eval_static(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___eval_static\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
}

VL_ATTR_COLD void VmkTb_COP___024root___eval_initial__TOP(VmkTb_COP___024root* vlSelf);
VL_ATTR_COLD void VmkTb_COP___024root____Vm_traceActivitySetAll(VmkTb_COP___024root* vlSelf);

VL_ATTR_COLD void VmkTb_COP___024root___eval_initial(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___eval_initial\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VmkTb_COP___024root___eval_initial__TOP(vlSelf);
    VmkTb_COP___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void VmkTb_COP___024root___eval_initial__TOP__0(VmkTb_COP___024root* vlSelf);

VL_ATTR_COLD void VmkTb_COP___024root___eval_initial__TOP(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___eval_initial__TOP\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VmkTb_COP___024root___eval_initial__TOP__0(vlSelf);
    VmkTb_COP___024root____Vm_traceActivitySetAll(vlSelf);
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_27__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_27__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_27__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_27__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_27__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_27__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_27__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_28__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_28__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_28__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_28__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_28__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_28__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_28__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_29__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_29__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_29__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_29__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_29__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_29__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_29__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_30__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_30__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_30__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_30__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_30__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_30__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_30__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_31__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_31__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_31__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_31__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_31__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_31__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_31__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_32__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_32__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_32__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_32__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_32__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_32__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_32__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_33__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_33__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_33__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_33__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_33__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_33__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_33__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_34__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_34__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_34__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_34__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_34__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_34__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_34__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_35__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_35__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_35__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_35__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_35__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_35__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_35__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_36__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_36__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_36__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_36__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_36__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_36__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_36__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_37__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_37__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_37__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_37__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_37__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_37__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_37__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_38__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_38__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_38__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_38__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_38__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_38__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_38__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_39__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_39__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_39__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_39__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_39__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_39__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_39__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_40__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_40__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_40__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_40__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_40__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_40__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_40__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_41__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_41__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_41__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_41__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_41__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_41__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_41__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_42__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_42__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_42__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_42__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_42__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_42__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_42__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_43__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_43__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_43__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_43__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_43__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_43__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_43__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_44__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_44__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_44__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_44__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_44__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_44__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_44__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_45__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_45__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_45__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_45__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_45__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_45__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_45__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_46__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_46__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_46__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_46__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_46__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_46__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_46__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_47__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_47__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_47__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_47__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_47__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_47__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_47__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_48__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_48__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_48__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_48__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_48__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_48__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_48__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_49__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_49__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_49__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_49__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_49__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_49__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_49__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_50__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_50__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_50__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_50__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_50__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_50__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_50__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_51__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_51__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_51__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_51__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_51__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_51__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_51__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_52__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_52__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_52__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_52__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_52__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_52__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_52__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_53__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_53__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_53__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_53__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_53__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_53__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_53__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_54__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_54__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_54__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_54__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_54__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_54__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_54__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_55__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_55__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_55__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_55__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_55__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_55__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_55__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_56__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_56__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_56__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_56__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_56__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_56__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_56__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_57__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_57__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_57__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_57__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_57__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_57__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_57__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_58__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_58__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_58__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_58__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_58__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_58__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_58__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_59__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_59__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_59__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_59__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_59__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_59__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_59__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_60__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_60__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_60__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_60__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_60__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_60__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_60__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__allReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_100 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_101 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_102 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_103 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_104 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_105 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_106 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_107 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_108 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_109 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_110 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_111 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_112 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_113 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_114 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_115 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_116 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_117 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_118 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_119 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_120 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_121 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_122 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_123 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_124 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_125 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_126 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_127 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_128 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_129 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_130 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_131 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_132 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_133 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_134 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_135 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_136 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_137 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_138 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_139 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_140 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_141 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_142 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_143 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_144 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_145 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_146 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_147 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_148 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_149 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_150 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_151 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_152 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_153 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_154 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_155 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_156 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_157 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_158 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_159 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_160 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_161 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_162 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_163 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_164 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_165 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_166 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_167 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_168 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_169 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_170 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_171 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_172 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_173 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_174 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_175 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_176 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_177 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_178 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_179 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_180 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_181 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_182 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_183 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_184 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_185 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_186 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_187 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_188 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_189 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_190 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_191 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_192 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_193 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_194 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_195 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_196 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_197 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_198 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_199 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_200 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_201 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_202 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_203 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_204 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_205 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_206 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_207 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_208 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_209 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_210 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_211 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_212 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_213 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_214 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_215 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_216 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_217 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_218 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_219 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_220 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_221 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_222 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_223 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_224 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_225 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_226 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_227 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_228 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_229 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_230 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_231 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_232 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_233 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_234 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_235 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_236 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_237 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_238 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_239 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_240 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_241 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_242 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_243 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_244 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_245 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_246 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_247 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_248 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_249 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_250 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_251 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_252 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_253 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_254 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_255 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_48 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_49 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_50 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_51 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_52 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_53 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_54 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_55 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_56 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_57 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_58 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_59 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_60 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_61 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_62 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_63 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_64 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_65 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_66 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_67 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_68 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_69 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_70 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_71 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_72 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_73 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_74 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_75 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_76 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_77 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_78 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_79 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_80 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_81 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_82 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_83 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_84 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_85 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_86 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_87 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_88 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_89 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_90 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_91 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_92 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_93 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_94 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_95 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_96 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_97 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_98 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_99 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__readCounter = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
}

extern const VlWide<384>/*12287:0*/ VmkTb_COP__ConstPool__CONST_h3189f01a_0;
extern const VlWide<98>/*3135:0*/ VmkTb_COP__ConstPool__CONST_h6e8332d8_0;
extern const VlWide<8>/*255:0*/ VmkTb_COP__ConstPool__CONST_h7d495dad_0;
extern const VlWide<136>/*4351:0*/ VmkTb_COP__ConstPool__CONST_h6e0f721f_0;
extern const VlWide<128>/*4095:0*/ VmkTb_COP__ConstPool__CONST_h4d280442_0;
extern const VlWide<16>/*511:0*/ VmkTb_COP__ConstPool__CONST_h13805816_0;
extern const VlWide<48>/*1535:0*/ VmkTb_COP__ConstPool__CONST_hc4d53b70_0;
extern const VlWide<32>/*1023:0*/ VmkTb_COP__ConstPool__CONST_h74ec5c45_0;

VL_ATTR_COLD void VmkTb_COP___024root___eval_initial__TOP__0(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___eval_initial__TOP__0\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mkTb_COP__DOT__current_bram = 0xaU;
    vlSelfRef.mkTb_COP__DOT__current_chunk = 2U;
    vlSelfRef.mkTb_COP__DOT__cycle = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__started = 0U;
    vlSelfRef.mkTb_COP__DOT__tb_state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__base_addr = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__brams_ready = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count = 0xaaaaaaaaU;
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__div_result_wkv, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__init_counter = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_done = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_addr_offset = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_chunk_id = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_issued = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_started = 0U;
    VL_ASSIGN_W(3120,vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values, VmkTb_COP__ConstPool__CONST_h6e8332d8_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_100 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_101 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_102 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_103 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_104 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_105 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_106 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_107 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_108 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_109 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_110 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_111 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_112 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_113 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_114 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_115 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_116 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_117 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_118 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_119 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_120 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_121 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_122 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_123 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_124 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_125 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_126 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_127 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_128 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_129 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_130 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_131 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_132 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_133 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_134 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_135 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_136 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_137 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_138 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_139 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_140 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_141 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_142 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_143 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_144 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_145 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_146 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_147 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_148 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_149 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_150 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_151 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_152 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_153 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_154 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_155 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_156 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_157 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_158 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_159 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_160 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_161 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_162 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_163 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_164 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_165 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_166 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_167 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_168 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_169 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_170 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_171 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_172 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_173 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_174 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_175 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_176 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_177 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_178 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_179 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_180 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_181 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_182 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_183 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_184 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_185 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_186 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_187 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_188 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_189 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_190 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_191 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_192 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_193 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_194 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_195 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_196 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_197 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_198 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_199 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_200 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_201 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_202 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_203 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_204 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_205 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_206 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_207 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_208 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_209 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_210 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_211 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_212 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_213 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_214 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_215 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_216 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_217 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_218 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_219 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_220 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_221 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_222 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_223 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_224 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_225 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_226 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_227 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_228 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_229 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_230 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_231 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_232 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_233 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_234 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_235 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_236 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_237 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_238 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_239 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_240 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_241 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_242 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_243 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_244 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_245 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_246 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_247 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_248 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_249 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_250 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_251 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_252 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_253 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_254 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_255 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_48 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_49 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_50 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_51 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_52 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_53 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_54 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_55 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_56 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_57 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_58 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_59 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_60 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_61 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_62 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_63 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_64 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_65 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_66 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_67 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_68 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_69 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_70 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_71 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_72 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_73 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_74 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_75 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_76 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_77 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_78 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_79 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_80 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_81 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_82 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_83 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_84 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_85 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_86 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_87 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_88 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_89 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_90 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_91 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_92 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_93 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_94 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_95 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_96 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_97 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_98 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk0_99 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_100 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_101 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_102 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_103 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_104 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_105 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_106 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_107 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_108 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_109 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_110 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_111 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_112 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_113 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_114 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_115 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_116 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_117 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_118 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_119 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_120 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_121 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_122 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_123 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_124 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_125 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_126 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_127 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_128 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_129 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_130 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_131 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_132 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_133 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_134 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_135 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_136 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_137 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_138 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_139 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_140 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_141 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_142 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_143 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_144 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_145 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_146 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_147 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_148 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_149 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_150 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_151 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_152 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_153 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_154 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_155 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_156 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_157 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_158 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_159 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_160 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_161 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_162 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_163 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_164 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_165 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_166 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_167 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_168 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_169 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_170 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_171 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_172 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_173 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_174 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_175 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_176 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_177 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_178 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_179 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_180 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_181 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_182 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_183 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_184 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_185 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_186 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_187 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_188 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_189 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_190 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_191 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_192 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_193 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_194 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_195 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_196 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_197 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_198 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_199 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_200 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_201 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_202 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_203 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_204 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_205 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_206 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_207 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_208 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_209 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_210 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_211 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_212 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_213 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_214 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_215 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_216 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_217 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_218 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_219 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_220 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_221 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_222 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_223 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_224 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_225 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_226 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_227 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_228 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_229 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_230 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_231 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_232 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_233 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_234 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_235 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_236 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_237 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_238 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_239 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_240 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_241 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_242 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_243 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_244 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_245 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_246 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_247 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_248 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_249 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_250 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_251 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_252 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_253 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_254 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_255 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_48 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_49 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_50 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_51 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_52 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_53 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_54 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_55 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_56 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_57 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_58 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_59 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_60 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_61 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_62 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_63 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_64 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_65 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_66 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_67 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_68 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_69 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_70 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_71 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_72 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_73 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_74 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_75 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_76 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_77 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_78 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_79 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_80 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_81 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_82 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_83 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_84 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_85 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_86 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_87 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_88 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_89 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_90 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_91 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_92 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_93 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_94 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_95 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_96 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_97 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_98 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk1_99 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_100 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_101 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_102 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_103 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_104 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_105 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_106 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_107 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_108 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_109 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_110 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_111 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_112 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_113 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_114 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_115 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_116 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_117 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_118 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_119 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_120 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_121 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_122 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_123 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_124 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_125 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_126 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_127 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_128 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_129 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_130 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_131 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_132 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_133 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_134 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_135 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_136 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_137 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_138 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_139 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_140 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_141 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_142 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_143 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_144 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_145 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_146 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_147 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_148 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_149 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_150 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_151 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_152 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_153 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_154 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_155 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_156 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_157 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_158 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_159 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_160 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_161 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_162 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_163 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_164 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_165 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_166 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_167 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_168 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_169 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_170 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_171 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_172 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_173 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_174 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_175 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_176 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_177 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_178 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_179 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_180 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_181 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_182 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_183 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_184 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_185 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_186 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_187 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_188 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_189 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_190 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_191 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_192 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_193 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_194 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_195 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_196 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_197 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_198 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_199 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_200 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_201 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_202 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_203 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_204 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_205 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_206 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_207 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_208 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_209 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_210 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_211 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_212 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_213 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_214 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_215 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_216 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_217 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_218 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_219 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_220 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_221 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_222 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_223 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_224 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_225 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_226 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_227 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_228 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_229 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_230 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_231 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_232 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_233 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_234 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_235 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_236 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_237 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_238 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_239 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_240 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_241 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_242 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_243 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_244 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_245 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_246 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_247 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_248 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_249 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_250 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_251 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_252 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_253 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_254 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_255 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_48 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_49 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_50 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_51 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_52 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_53 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_54 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_55 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_56 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_57 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_58 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_59 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_60 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_61 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_62 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_63 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_64 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_65 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_66 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_67 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_68 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_69 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_70 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_71 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_72 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_73 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_74 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_75 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_76 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_77 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_78 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_79 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_80 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_81 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_82 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_83 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_84 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_85 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_86 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_87 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_88 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_89 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_90 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_91 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_92 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_93 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_94 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_95 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_96 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_97 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_98 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__result_chunk2_99 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__results_ready = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
        = VmkTb_COP__ConstPool__CONST_h7d495dad_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
        = VmkTb_COP__ConstPool__CONST_h7d495dad_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
        = VmkTb_COP__ConstPool__CONST_h7d495dad_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
        = VmkTb_COP__ConstPool__CONST_h7d495dad_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
        = VmkTb_COP__ConstPool__CONST_h7d495dad_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
        = VmkTb_COP__ConstPool__CONST_h7d495dad_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
        = VmkTb_COP__ConstPool__CONST_h7d495dad_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
        = VmkTb_COP__ConstPool__CONST_h7d495dad_0[7U];
    VL_ASSIGN_W(4352,vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output, VmkTb_COP__ConstPool__CONST_h6e0f721f_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_processing_complete = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_started = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_weight_batch_ready = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_weight_batch_requested = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_weight_col_idx = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_weight_matrix_idx = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_weights_ready = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
        = VmkTb_COP__ConstPool__CONST_h7d495dad_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
        = VmkTb_COP__ConstPool__CONST_h7d495dad_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
        = VmkTb_COP__ConstPool__CONST_h7d495dad_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
        = VmkTb_COP__ConstPool__CONST_h7d495dad_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
        = VmkTb_COP__ConstPool__CONST_h7d495dad_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
        = VmkTb_COP__ConstPool__CONST_h7d495dad_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
        = VmkTb_COP__ConstPool__CONST_h7d495dad_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
        = VmkTb_COP__ConstPool__CONST_h7d495dad_0[7U];
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_processing_complete = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_started = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_weight_batch_ready = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_weight_batch_requested = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_weight_col_idx = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_weight_matrix_idx = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_weights_ready = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_r_ready = 0U;
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_k, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_r, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_v, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_r, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_v, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__state = 0x2aU;
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_a, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_b, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected = 0x2aU;
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2_collected = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_started = 0U;
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_data_loaded = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_feed_cooldown = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr = 0x2aaU;
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected = 0x2aU;
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2_collected = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_started = 0U;
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected = 0x2aU;
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_s2, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_s3, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_rwkv, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state = 0xaU;
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_vv_ready = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_100 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_101 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_102 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_103 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_104 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_105 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_106 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_107 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_108 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_109 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_110 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_111 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_112 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_113 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_114 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_115 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_116 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_117 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_118 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_119 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_120 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_121 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_122 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_123 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_124 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_125 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_126 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_127 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_128 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_129 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_130 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_131 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_132 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_133 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_134 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_135 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_136 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_137 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_138 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_139 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_140 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_141 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_142 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_143 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_144 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_145 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_146 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_147 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_148 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_149 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_150 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_151 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_152 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_153 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_154 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_155 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_156 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_157 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_158 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_159 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_160 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_161 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_162 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_163 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_164 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_165 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_166 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_167 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_168 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_169 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_170 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_171 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_172 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_173 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_174 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_175 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_176 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_177 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_178 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_179 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_180 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_181 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_182 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_183 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_184 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_185 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_186 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_187 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_188 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_189 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_190 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_191 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_192 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_193 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_194 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_195 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_196 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_197 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_198 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_199 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_200 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_201 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_202 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_203 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_204 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_205 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_206 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_207 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_208 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_209 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_210 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_211 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_212 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_213 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_214 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_215 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_216 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_217 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_218 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_219 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_220 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_221 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_222 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_223 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_224 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_225 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_226 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_227 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_228 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_229 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_230 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_231 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_232 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_233 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_234 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_235 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_236 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_237 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_238 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_239 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_240 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_241 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_242 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_243 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_244 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_245 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_246 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_247 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_248 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_249 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_250 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_251 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_252 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_253 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_254 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_255 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_48 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_49 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_50 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_51 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_52 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_53 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_54 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_55 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_56 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_57 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_58 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_59 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_60 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_61 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_62 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_63 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_64 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_65 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_66 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_67 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_68 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_69 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_70 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_71 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_72 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_73 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_74 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_75 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_76 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_77 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_78 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_79 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_80 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_81 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_82 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_83 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_84 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_85 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_86 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_87 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_88 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_89 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_90 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_91 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_92 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_93 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_94 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_95 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_96 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_97 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_98 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_99 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_100 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_101 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_102 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_103 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_104 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_105 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_106 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_107 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_108 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_109 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_110 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_111 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_112 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_113 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_114 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_115 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_116 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_117 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_118 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_119 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_120 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_121 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_122 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_123 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_124 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_125 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_126 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_127 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_128 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_129 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_130 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_131 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_132 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_133 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_134 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_135 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_136 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_137 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_138 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_139 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_140 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_141 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_142 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_143 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_144 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_145 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_146 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_147 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_148 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_149 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_150 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_151 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_152 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_153 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_154 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_155 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_156 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_157 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_158 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_159 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_160 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_161 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_162 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_163 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_164 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_165 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_166 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_167 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_168 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_169 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_170 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_171 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_172 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_173 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_174 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_175 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_176 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_177 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_178 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_179 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_180 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_181 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_182 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_183 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_184 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_185 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_186 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_187 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_188 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_189 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_190 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_191 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_192 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_193 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_194 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_195 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_196 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_197 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_198 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_199 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_200 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_201 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_202 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_203 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_204 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_205 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_206 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_207 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_208 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_209 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_210 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_211 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_212 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_213 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_214 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_215 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_216 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_217 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_218 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_219 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_220 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_221 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_222 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_223 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_224 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_225 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_226 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_227 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_228 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_229 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_230 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_231 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_232 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_233 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_234 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_235 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_236 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_237 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_238 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_239 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_240 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_241 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_242 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_243 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_244 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_245 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_246 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_247 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_248 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_249 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_250 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_251 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_252 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_253 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_254 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_255 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_48 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_49 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_50 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_51 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_52 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_53 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_54 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_55 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_56 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_57 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_58 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_59 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_60 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_61 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_62 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_63 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_64 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_65 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_66 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_67 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_68 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_69 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_70 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_71 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_72 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_73 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_74 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_75 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_76 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_77 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_78 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_79 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_80 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_81 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_82 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_83 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_84 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_85 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_86 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_87 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_88 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_89 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_90 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_91 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_92 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_93 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_94 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_95 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_96 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_97 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_98 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_99 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_100 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_101 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_102 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_103 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_104 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_105 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_106 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_107 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_108 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_109 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_110 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_111 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_112 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_113 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_114 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_115 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_116 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_117 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_118 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_119 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_120 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_121 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_122 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_123 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_124 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_125 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_126 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_127 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_128 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_129 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_130 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_131 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_132 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_133 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_134 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_135 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_136 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_137 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_138 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_139 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_140 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_141 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_142 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_143 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_144 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_145 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_146 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_147 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_148 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_149 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_150 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_151 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_152 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_153 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_154 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_155 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_156 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_157 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_158 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_159 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_160 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_161 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_162 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_163 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_164 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_165 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_166 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_167 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_168 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_169 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_170 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_171 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_172 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_173 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_174 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_175 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_176 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_177 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_178 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_179 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_180 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_181 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_182 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_183 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_184 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_185 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_186 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_187 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_188 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_189 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_190 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_191 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_192 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_193 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_194 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_195 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_196 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_197 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_198 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_199 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_200 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_201 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_202 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_203 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_204 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_205 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_206 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_207 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_208 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_209 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_210 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_211 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_212 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_213 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_214 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_215 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_216 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_217 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_218 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_219 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_220 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_221 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_222 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_223 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_224 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_225 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_226 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_227 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_228 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_229 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_230 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_231 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_232 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_233 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_234 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_235 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_236 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_237 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_238 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_239 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_240 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_241 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_242 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_243 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_244 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_245 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_246 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_247 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_248 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_249 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_250 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_251 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_252 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_253 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_254 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_255 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_48 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_49 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_50 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_51 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_52 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_53 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_54 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_55 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_56 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_57 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_58 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_59 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_60 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_61 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_62 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_63 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_64 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_65 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_66 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_67 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_68 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_69 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_70 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_71 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_72 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_73 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_74 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_75 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_76 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_77 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_78 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_79 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_80 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_81 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_82 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_83 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_84 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_85 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_86 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_87 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_88 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_89 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_90 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_91 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_92 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_93 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_94 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_95 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_96 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_97 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_98 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_c_99 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_100 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_101 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_102 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_103 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_104 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_105 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_106 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_107 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_108 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_109 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_110 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_111 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_112 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_113 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_114 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_115 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_116 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_117 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_118 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_119 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_120 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_121 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_122 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_123 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_124 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_125 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_126 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_127 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_128 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_129 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_130 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_131 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_132 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_133 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_134 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_135 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_136 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_137 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_138 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_139 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_140 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_141 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_142 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_143 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_144 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_145 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_146 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_147 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_148 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_149 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_150 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_151 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_152 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_153 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_154 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_155 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_156 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_157 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_158 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_159 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_160 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_161 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_162 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_163 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_164 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_165 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_166 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_167 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_168 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_169 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_170 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_171 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_172 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_173 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_174 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_175 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_176 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_177 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_178 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_179 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_180 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_181 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_182 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_183 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_184 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_185 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_186 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_187 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_188 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_189 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_190 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_191 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_192 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_193 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_194 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_195 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_196 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_197 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_198 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_199 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_200 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_201 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_202 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_203 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_204 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_205 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_206 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_207 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_208 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_209 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_210 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_211 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_212 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_213 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_214 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_215 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_216 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_217 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_218 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_219 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_220 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_221 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_222 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_223 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_224 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_225 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_226 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_227 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_228 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_229 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_230 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_231 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_232 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_233 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_234 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_235 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_236 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_237 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_238 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_239 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_240 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_241 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_242 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_243 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_244 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_245 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_246 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_247 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_248 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_249 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_250 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_251 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_252 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_253 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_254 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_255 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_48 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_49 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_50 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_51 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_52 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_53 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_54 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_55 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_56 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_57 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_58 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_59 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_60 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_61 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_62 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_63 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_64 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_65 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_66 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_67 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_68 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_69 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_70 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_71 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_72 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_73 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_74 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_75 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_76 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_77 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_78 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_79 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_80 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_81 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_82 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_83 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_84 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_85 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_86 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_87 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_88 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_89 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_90 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_91 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_92 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_93 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_94 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_95 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_96 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_97 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_98 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_d_99 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__wb_state = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_batch_counter = 0x2aaU;
    VL_ASSIGN_W(4096,vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_buffer, VmkTb_COP__ConstPool__CONST_h4d280442_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr = 0x2aaU;
    VL_ASSIGN_W(4096,vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer, VmkTb_COP__ConstPool__CONST_h4d280442_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__write_ready = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__write_wait_counter = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 768, 0, std::string{"simd.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__RAM)
                 , 0U, 0x2ffU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 768, 0, std::string{"simd.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__RAM)
                 , 0U, 0x2ffU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__DOT__DO_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__DOT__DO_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 768, 0, std::string{"simd.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__DOT__RAM)
                 , 0U, 0x2ffU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_e__DOT__DO_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_e__DOT__DO_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 768, 0, std::string{"simd.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_e__DOT__RAM)
                 , 0U, 0x2ffU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_f__DOT__DO_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_f__DOT__DO_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 768, 0, std::string{"simd.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_f__DOT__RAM)
                 , 0U, 0x2ffU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 768, 0, std::string{"simd.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__RAM)
                 , 0U, 0x2ffU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__DOT__DO_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__DOT__DO_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 768, 0, std::string{"simd.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__DOT__RAM)
                 , 0U, 0x2ffU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 768, 0, std::string{"simd.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__RAM)
                 , 0U, 0x2ffU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 768, 0, std::string{"simd.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__RAM)
                 , 0U, 0x2ffU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 768, 0, std::string{"simd.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__RAM)
                 , 0U, 0x2ffU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 768, 0, std::string{"simd.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__RAM)
                 , 0U, 0x2ffU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 768, 0, std::string{"simd.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__RAM)
                 , 0U, 0x2ffU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__DOT__DO_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__DOT__DO_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 768, 0, std::string{"simd.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__DOT__RAM)
                 , 0U, 0x2ffU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__busy = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__result_ready = 0U;
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_a_abs = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_b_abs = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_is_special = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_r = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_result_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_special_result = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s2_is_special = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s2_result_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s2_special_result = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s2_x_new = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s2_y_new = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_is_special = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_r_new = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_result_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_special_result = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_x_new = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 = 0xaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage2 = 0xaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage3 = 0xaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage4 = 0xaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__element_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__layer_state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__inputs_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__output_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__outputs_received = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_0 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_1 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_10 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_11 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_12 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_13 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_14 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_15 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_16 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_17 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_18 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_19 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_2 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_20 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_21 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_22 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_23 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_24 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_25 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_26 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_27 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_28 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_29 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_3 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_30 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_31 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_32 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_33 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_34 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_35 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_36 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_37 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_38 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_39 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_4 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_40 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_41 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_42 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_43 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_44 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_45 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_46 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_47 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_5 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_6 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_7 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_8 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_9 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_16 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_17 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_18 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_19 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_20 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_21 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_22 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_23 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_24 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_25 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_26 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_27 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_28 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_29 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_30 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_31 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_32 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_33 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_34 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_35 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_36 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_37 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_38 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_39 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_40 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_41 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_42 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_43 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_44 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_45 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_46 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_47 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__conf = 0xaaaaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__config_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__inv_tau_cached = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg = 0x2aaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage1_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__inputs_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__output_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__outputs_received = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_0 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_1 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_10 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_11 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_12 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_13 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_14 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_15 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_16 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_17 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_18 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_19 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_2 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_20 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_21 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_22 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_23 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_24 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_25 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_26 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_27 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_28 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_29 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_3 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_30 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_31 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_32 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_33 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_34 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_35 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_36 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_37 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_38 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_39 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_4 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_40 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_41 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_42 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_43 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_44 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_45 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_46 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_47 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_5 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_6 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_7 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_8 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_9 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_16 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_17 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_18 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_19 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_20 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_21 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_22 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_23 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_24 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_25 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_26 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_27 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_28 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_29 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_30 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_31 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_32 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_33 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_34 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_35 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_36 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_37 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_38 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_39 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_40 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_41 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_42 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_43 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_44 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_45 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_46 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_47 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__conf = 0xaaaaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__config_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__inv_tau_cached = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg = 0x2aaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage1_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__inputs_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__output_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__outputs_received = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_0 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_1 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_10 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_11 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_12 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_13 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_14 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_15 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_16 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_17 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_18 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_19 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_2 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_20 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_21 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_22 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_23 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_24 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_25 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_26 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_27 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_28 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_29 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_3 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_30 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_31 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_32 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_33 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_34 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_35 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_36 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_37 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_38 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_39 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_4 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_40 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_41 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_42 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_43 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_44 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_45 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_46 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_47 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_5 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_6 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_7 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_8 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_9 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_16 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_17 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_18 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_19 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_20 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_21 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_22 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_23 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_24 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_25 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_26 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_27 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_28 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_29 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_30 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_31 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_32 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_33 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_34 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_35 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_36 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_37 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_38 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_39 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_40 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_41 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_42 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_43 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_44 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_45 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_46 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_47 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__conf = 0xaaaaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__config_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__inv_tau_cached = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg = 0x2aaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage1_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__inputs_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__output_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__outputs_received = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_0 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_1 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_10 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_11 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_12 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_13 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_14 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_15 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_16 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_17 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_18 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_19 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_2 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_20 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_21 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_22 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_23 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_24 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_25 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_26 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_27 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_28 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_29 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_3 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_30 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_31 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_32 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_33 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_34 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_35 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_36 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_37 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_38 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_39 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_4 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_40 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_41 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_42 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_43 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_44 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_45 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_46 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_47 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_5 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_6 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_7 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_8 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_9 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_16 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_17 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_18 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_19 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_20 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_21 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_22 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_23 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_24 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_25 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_26 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_27 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_28 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_29 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_30 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_31 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_32 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_33 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_34 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_35 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_36 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_37 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_38 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_39 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_40 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_41 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_42 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_43 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_44 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_45 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_46 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_47 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__conf = 0xaaaaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__config_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__inv_tau_cached = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg = 0x2aaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage1_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__inputs_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__output_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__outputs_received = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_0 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_1 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_10 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_11 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_12 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_13 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_14 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_15 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_16 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_17 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_18 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_19 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_2 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_20 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_21 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_22 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_23 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_24 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_25 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_26 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_27 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_28 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_29 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_3 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_30 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_31 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_32 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_33 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_34 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_35 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_36 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_37 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_38 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_39 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_4 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_40 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_41 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_42 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_43 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_44 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_45 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_46 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_47 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_5 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_6 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_7 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_8 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_9 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_16 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_17 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_18 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_19 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_20 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_21 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_22 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_23 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_24 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_25 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_26 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_27 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_28 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_29 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_30 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_31 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_32 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_33 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_34 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_35 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_36 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_37 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_38 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_39 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_40 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_41 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_42 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_43 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_44 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_45 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_46 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_47 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__conf = 0xaaaaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__config_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__inv_tau_cached = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg = 0x2aaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage1_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__inputs_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__output_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__outputs_received = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_0 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_1 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_10 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_11 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_12 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_13 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_14 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_15 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_16 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_17 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_18 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_19 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_2 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_20 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_21 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_22 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_23 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_24 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_25 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_26 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_27 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_28 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_29 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_3 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_30 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_31 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_32 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_33 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_34 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_35 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_36 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_37 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_38 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_39 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_4 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_40 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_41 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_42 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_43 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_44 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_45 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_46 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_47 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_5 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_6 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_7 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_8 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_9 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_16 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_17 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_18 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_19 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_20 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_21 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_22 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_23 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_24 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_25 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_26 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_27 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_28 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_29 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_30 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_31 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_32 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_33 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_34 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_35 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_36 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_37 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_38 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_39 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_40 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_41 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_42 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_43 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_44 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_45 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_46 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_47 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__conf = 0xaaaaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__config_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__inv_tau_cached = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg = 0x2aaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage1_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__inputs_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__output_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__outputs_received = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_0 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_1 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_10 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_11 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_12 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_13 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_14 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_15 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_16 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_17 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_18 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_19 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_2 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_20 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_21 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_22 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_23 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_24 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_25 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_26 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_27 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_28 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_29 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_3 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_30 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_31 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_32 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_33 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_34 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_35 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_36 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_37 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_38 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_39 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_4 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_40 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_41 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_42 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_43 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_44 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_45 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_46 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_47 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_5 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_6 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_7 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_8 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_9 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_16 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_17 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_18 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_19 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_20 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_21 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_22 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_23 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_24 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_25 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_26 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_27 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_28 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_29 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_30 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_31 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_32 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_33 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_34 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_35 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_36 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_37 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_38 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_39 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_40 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_41 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_42 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_43 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_44 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_45 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_46 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_47 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__conf = 0xaaaaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__config_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__inv_tau_cached = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg = 0x2aaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage1_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__inputs_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__output_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__outputs_received = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_0 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_1 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_10 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_11 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_12 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_13 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_14 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_15 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_16 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_17 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_18 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_19 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_2 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_20 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_21 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_22 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_23 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_24 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_25 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_26 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_27 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_28 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_29 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_3 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_30 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_31 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_32 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_33 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_34 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_35 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_36 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_37 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_38 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_39 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_4 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_40 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_41 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_42 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_43 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_44 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_45 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_46 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_47 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_5 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_6 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_7 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_8 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_9 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_16 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_17 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_18 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_19 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_20 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_21 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_22 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_23 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_24 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_25 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_26 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_27 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_28 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_29 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_30 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_31 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_32 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_33 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_34 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_35 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_36 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_37 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_38 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_39 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_40 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_41 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_42 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_43 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_44 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_45 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_46 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_47 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__conf = 0xaaaaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__config_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__inv_tau_cached = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg = 0x2aaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage1_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__inputs_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__output_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__outputs_received = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_0 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_1 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_10 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_11 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_12 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_13 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_14 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_15 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_16 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_17 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_18 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_19 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_2 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_20 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_21 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_22 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_23 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_24 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_25 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_26 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_27 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_28 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_29 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_3 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_30 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_31 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_32 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_33 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_34 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_35 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_36 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_37 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_38 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_39 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_4 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_40 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_41 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_42 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_43 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_44 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_45 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_46 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_47 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_5 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_6 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_7 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_8 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_9 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_16 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_17 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_18 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_19 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_20 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_21 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_22 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_23 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_24 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_25 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_26 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_27 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_28 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_29 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_30 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_31 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_32 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_33 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_34 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_35 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_36 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_37 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_38 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_39 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_40 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_41 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_42 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_43 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_44 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_45 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_46 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_47 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__conf = 0xaaaaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__config_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__inv_tau_cached = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg = 0x2aaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage1_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__inputs_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__output_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__outputs_received = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_0 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_1 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_10 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_11 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_12 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_13 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_14 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_15 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_16 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_17 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_18 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_19 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_2 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_20 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_21 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_22 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_23 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_24 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_25 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_26 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_27 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_28 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_29 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_3 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_30 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_31 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_32 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_33 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_34 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_35 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_36 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_37 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_38 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_39 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_4 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_40 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_41 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_42 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_43 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_44 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_45 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_46 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_47 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_5 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_6 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_7 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_8 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_9 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_16 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_17 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_18 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_19 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_20 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_21 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_22 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_23 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_24 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_25 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_26 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_27 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_28 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_29 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_30 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_31 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_32 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_33 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_34 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_35 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_36 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_37 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_38 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_39 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_40 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_41 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_42 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_43 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_44 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_45 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_46 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_47 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__conf = 0xaaaaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__config_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__inv_tau_cached = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg = 0x2aaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage1_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__inputs_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__output_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__outputs_received = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_0 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_1 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_10 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_11 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_12 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_13 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_14 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_15 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_16 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_17 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_18 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_19 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_2 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_20 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_21 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_22 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_23 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_24 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_25 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_26 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_27 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_28 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_29 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_3 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_30 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_31 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_32 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_33 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_34 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_35 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_36 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_37 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_38 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_39 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_4 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_40 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_41 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_42 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_43 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_44 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_45 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_46 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_47 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_5 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_6 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_7 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_8 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_9 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_16 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_17 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_18 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_19 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_20 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_21 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_22 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_23 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_24 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_25 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_26 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_27 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_28 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_29 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_30 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_31 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_32 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_33 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_34 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_35 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_36 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_37 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_38 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_39 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_40 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_41 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_42 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_43 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_44 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_45 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_46 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_47 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__conf = 0xaaaaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__config_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__inv_tau_cached = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg = 0x2aaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage1_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__inputs_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__output_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__outputs_received = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_0 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_1 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_10 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_11 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_12 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_13 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_14 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_15 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_16 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_17 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_18 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_19 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_2 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_20 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_21 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_22 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_23 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_24 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_25 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_26 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_27 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_28 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_29 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_3 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_30 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_31 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_32 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_33 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_34 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_35 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_36 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_37 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_38 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_39 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_4 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_40 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_41 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_42 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_43 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_44 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_45 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_46 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_47 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_5 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_6 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_7 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_8 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_9 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_16 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_17 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_18 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_19 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_20 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_21 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_22 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_23 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_24 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_25 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_26 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_27 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_28 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_29 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_30 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_31 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_32 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_33 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_34 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_35 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_36 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_37 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_38 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_39 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_40 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_41 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_42 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_43 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_44 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_45 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_46 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_47 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__conf = 0xaaaaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__config_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__inv_tau_cached = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg = 0x2aaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage1_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__inputs_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__output_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__outputs_received = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_0 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_1 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_10 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_11 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_12 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_13 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_14 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_15 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_16 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_17 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_18 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_19 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_2 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_20 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_21 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_22 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_23 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_24 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_25 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_26 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_27 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_28 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_29 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_3 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_30 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_31 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_32 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_33 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_34 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_35 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_36 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_37 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_38 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_39 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_4 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_40 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_41 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_42 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_43 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_44 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_45 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_46 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_47 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_5 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_6 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_7 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_8 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_9 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_16 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_17 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_18 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_19 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_20 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_21 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_22 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_23 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_24 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_25 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_26 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_27 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_28 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_29 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_30 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_31 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_32 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_33 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_34 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_35 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_36 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_37 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_38 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_39 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_40 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_41 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_42 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_43 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_44 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_45 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_46 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_47 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__conf = 0xaaaaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__config_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__inv_tau_cached = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg = 0x2aaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage1_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__inputs_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__output_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__outputs_received = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_0 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_1 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_10 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_11 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_12 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_13 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_14 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_15 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_16 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_17 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_18 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_19 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_2 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_20 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_21 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_22 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_23 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_24 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_25 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_26 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_27 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_28 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_29 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_3 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_30 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_31 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_32 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_33 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_34 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_35 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_36 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_37 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_38 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_39 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_4 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_40 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_41 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_42 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_43 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_44 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_45 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_46 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_47 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_5 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_6 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_7 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_8 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_9 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_16 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_17 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_18 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_19 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_20 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_21 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_22 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_23 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_24 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_25 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_26 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_27 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_28 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_29 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_30 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_31 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_32 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_33 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_34 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_35 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_36 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_37 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_38 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_39 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_40 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_41 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_42 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_43 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_44 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_45 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_46 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_47 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__conf = 0xaaaaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__config_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__inv_tau_cached = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg = 0x2aaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage1_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__inputs_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__output_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__outputs_received = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_0 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_1 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_10 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_11 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_12 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_13 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_14 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_15 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_16 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_17 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_18 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_19 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_2 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_20 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_21 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_22 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_23 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_24 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_25 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_26 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_27 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_28 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_29 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_3 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_30 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_31 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_32 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_33 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_34 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_35 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_36 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_37 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_38 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_39 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_4 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_40 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_41 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_42 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_43 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_44 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_45 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_46 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_47 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_5 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_6 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_7 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_8 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_9 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_16 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_17 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_18 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_19 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_20 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_21 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_22 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_23 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_24 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_25 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_26 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_27 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_28 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_29 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_30 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_31 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_32 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_33 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_34 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_35 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_36 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_37 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_38 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_39 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_40 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_41 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_42 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_43 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_44 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_45 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_46 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_47 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__conf = 0xaaaaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__config_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__inv_tau_cached = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg = 0x2aaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage1_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__inputs_fed = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__output_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__outputs_received = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_0 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_1 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_10 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_11 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_12 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_13 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_14 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_15 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_16 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_17 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_18 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_19 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_2 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_20 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_21 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_22 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_23 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_24 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_25 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_26 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_27 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_28 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_29 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_3 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_30 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_31 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_32 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_33 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_34 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_35 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_36 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_37 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_38 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_39 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_4 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_40 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_41 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_42 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_43 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_44 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_45 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_46 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_47 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_5 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_6 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_7 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_8 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_9 = 0xaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_16 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_17 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_18 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_19 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_20 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_21 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_22 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_23 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_24 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_25 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_26 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_27 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_28 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_29 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_30 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_31 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_32 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_33 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_34 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_35 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_36 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_37 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_38 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_39 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_40 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_41 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_42 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_43 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_44 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_45 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_46 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_47 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__conf = 0xaaaaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__config_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__inv_tau_cached = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg = 0x2aaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage1_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data = 0x2aaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__chunks_processed = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__cycle_count = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_batch_idx = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data1_reg[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data1_reg[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data1_reg[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data1_reg[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__empty_reg = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__full_reg = 1U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data1_reg[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data1_reg[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data1_reg[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data1_reg[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__empty_reg = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__full_reg = 1U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__inputs_fed = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__outputs_collected = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s2_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s2_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s2_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s3_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s3_x = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s3_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s2_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s2_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s2_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s3_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s3_x = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s3_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s2_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s2_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s2_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s3_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s3_x = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s3_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s2_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s2_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s2_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s3_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s3_x = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s3_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s2_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s2_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s2_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s3_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s3_x = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s3_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s2_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s2_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s2_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s3_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s3_x = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s3_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s2_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s2_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s2_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s3_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s3_x = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s3_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s2_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s2_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s2_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s3_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s3_x = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s3_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__inputs_fed = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__outputs_collected = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s2_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s2_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s2_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s3_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s3_x = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s3_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s2_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s2_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s2_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s3_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s3_x = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s3_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s2_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s2_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s2_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s3_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s3_x = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s3_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s2_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s2_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s2_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s3_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s3_x = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s3_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s2_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s2_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s2_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s3_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s3_x = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s3_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s2_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s2_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s2_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s3_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s3_x = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s3_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s2_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s2_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s2_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s3_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s3_x = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s3_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s2_input_z = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s2_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s2_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s3_n = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s3_x = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s3_y = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[1U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[5U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[9U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data1_reg[0U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data1_reg[1U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data1_reg[2U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data1_reg[3U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data1_reg[4U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data1_reg[5U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data1_reg[6U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data1_reg[7U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data1_reg[8U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data1_reg[9U] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data1_reg[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data1_reg[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data1_reg[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data1_reg[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data1_reg[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data1_reg[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h13805816_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__empty_reg = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__full_reg = 1U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x2fU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[__Vilp1] 
            = VmkTb_COP__ConstPool__CONST_hc4d53b70_0[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x2fU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data1_reg[__Vilp2] 
            = VmkTb_COP__ConstPool__CONST_hc4d53b70_0[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__empty_reg = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__full_reg = 1U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_b[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_c[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_d[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_a[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_b[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_c[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk1_d[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_a[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_b[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_c[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk2_d[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_a[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_b[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_c[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk3_d[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__cycle_count = 0xaaaaaaaaU;
    VL_ASSIGN_W(4096,vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__result_vector, VmkTb_COP__ConstPool__CONST_h4d280442_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__start_cycle = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__active = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__complete_count = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__issue_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__pipeline_stage = 0xaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_b[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_c[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_d[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_48 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_49 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_50 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_51 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_52 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_53 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_54 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_55 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_56 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_57 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_58 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_59 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_60 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_61 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_62 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_63 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__active = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__complete_count = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__pipeline_stage = 0xaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_48 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_49 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_50 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_51 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_52 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_53 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_54 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_55 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_56 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_57 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_58 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_59 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_60 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_61 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_62 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_63 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__active = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__complete_count = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__pipeline_stage = 0xaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_48 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_49 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_50 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_51 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_52 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_53 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_54 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_55 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_56 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_57 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_58 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_59 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_60 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_61 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_62 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_63 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__active = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__complete_count = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__pipeline_stage = 0xaaaaaaaaaaULL;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[1U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[2U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[3U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[4U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[5U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[6U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[7U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[8U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[9U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xaU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xbU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xcU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xdU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xeU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xfU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x10U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x11U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x12U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x13U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x14U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x15U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x16U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x17U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x18U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x19U] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1aU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1bU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1cU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1dU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1eU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1fU] 
        = VmkTb_COP__ConstPool__CONST_h74ec5c45_0[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_48 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_49 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_50 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_51 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_52 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_53 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_54 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_55 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_56 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_57 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_58 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_59 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_60 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_61 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_62 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_63 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__computing = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_0_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_0_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_0_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_0_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_0_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_0_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_0_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_0_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_0_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_0_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_0_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_0_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_0_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_0_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_0_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_0_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_10_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_10_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_10_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_10_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_10_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_10_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_10_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_10_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_10_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_10_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_10_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_10_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_10_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_10_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_10_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_10_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_11_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_11_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_11_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_11_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_11_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_11_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_11_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_11_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_11_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_11_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_11_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_11_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_11_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_11_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_11_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_11_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_12_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_12_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_12_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_12_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_12_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_12_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_12_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_12_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_12_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_12_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_12_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_12_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_12_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_12_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_12_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_12_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_13_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_13_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_13_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_13_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_13_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_13_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_13_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_13_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_13_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_13_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_13_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_13_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_13_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_13_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_13_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_13_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_14_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_14_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_14_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_14_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_14_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_14_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_14_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_14_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_14_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_14_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_14_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_14_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_14_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_14_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_14_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_14_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_15_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_15_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_15_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_15_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_15_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_15_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_15_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_15_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_15_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_15_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_15_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_15_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_15_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_15_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_15_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_15_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_1_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_1_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_1_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_1_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_1_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_1_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_1_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_1_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_1_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_1_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_1_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_1_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_1_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_1_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_1_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_1_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_2_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_2_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_2_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_2_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_2_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_2_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_2_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_2_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_2_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_2_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_2_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_2_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_2_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_2_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_2_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_2_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_3_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_3_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_3_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_3_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_3_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_3_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_3_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_3_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_3_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_3_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_3_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_3_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_3_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_3_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_3_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_3_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_4_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_4_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_4_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_4_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_4_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_4_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_4_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_4_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_4_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_4_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_4_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_4_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_4_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_4_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_4_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_4_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_5_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_5_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_5_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_5_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_5_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_5_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_5_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_5_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_5_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_5_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_5_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_5_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_5_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_5_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_5_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_5_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_6_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_6_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_6_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_6_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_6_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_6_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_6_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_6_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_6_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_6_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_6_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_6_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_6_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_6_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_6_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_6_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_7_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_7_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_7_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_7_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_7_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_7_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_7_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_7_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_7_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_7_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_7_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_7_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_7_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_7_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_7_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_7_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_8_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_8_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_8_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_8_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_8_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_8_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_8_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_8_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_8_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_8_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_8_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_8_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_8_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_8_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_8_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_8_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_9_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_9_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_9_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_9_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_9_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_9_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_9_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_9_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_9_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_9_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_9_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_9_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_9_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_9_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_9_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_w_9_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_0 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_1 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_10 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_11 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_12 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_13 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_14 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_15 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_2 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_3 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_4 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_5 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_6 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_7 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_8 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_9 = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__activation_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__psum_out_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__weight_reg = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__busy = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__cycle_count = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index = 0x2aaU;
    VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer, VmkTb_COP__ConstPool__CONST_h3189f01a_0);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_1[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_1[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_1[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_1[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_10[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_10[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_10[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_10[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_11[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_11[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_11[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_11[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_12[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_12[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_12[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_12[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_13[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_13[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_13[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_13[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_14[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_14[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_14[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_14[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_15[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_15[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_15[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_15[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_16[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_16[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_16[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_16[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_17[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_17[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_17[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_17[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_18[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_18[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_18[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_18[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_19[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_19[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_19[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_19[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_2[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_2[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_2[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_2[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_20[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_20[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_20[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_20[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_21[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_21[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_21[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_21[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_22[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_22[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_22[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_22[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_23[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_23[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_23[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_23[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_24[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_24[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_24[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_24[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_25[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_25[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_25[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_25[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_26[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_26[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_26[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_26[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_27[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_27[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_27[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_27[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_28[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_28[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_28[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_28[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_29[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_29[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_29[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_29[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_3[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_3[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_3[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_3[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_30[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_30[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_30[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_30[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_31[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_31[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_31[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_31[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_32[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_32[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_32[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_32[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_33[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_33[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_33[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_33[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_34[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_34[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_34[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_34[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_35[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_35[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_35[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_35[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_36[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_36[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_36[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_36[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_37[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_37[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_37[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_37[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_38[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_38[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_38[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_38[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_39[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_39[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_39[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_39[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_4[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_4[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_4[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_4[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_40[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_40[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_40[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_40[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_41[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_41[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_41[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_41[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_42[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_42[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_42[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_42[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_43[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_43[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_43[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_43[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_44[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_44[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_44[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_44[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_45[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_45[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_45[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_45[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_46[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_46[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_46[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_46[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_47[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_47[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_47[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_47[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_48[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_48[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_48[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_48[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_49[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_49[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_49[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_49[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_5[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_5[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_5[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_5[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_50[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_50[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_50[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_50[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_51[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_51[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_51[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_51[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_52[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_52[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_52[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_52[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_53[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_53[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_53[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_53[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_54[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_54[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_54[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_54[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_55[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_55[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_55[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_55[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_56[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_56[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_56[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_56[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_57[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_57[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_57[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_57[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_58[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_58[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_58[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_58[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_59[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_59[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_59[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_59[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_6[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_6[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_6[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_6[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_60[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_60[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_60[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_60[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_61[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_61[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_61[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_61[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_62[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_62[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_62[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_62[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_63[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_63[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_63[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_63[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_64[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_64[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_64[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_64[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_65[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_65[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_65[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_65[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_66[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_66[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_66[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_66[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_67[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_67[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_67[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_67[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_68[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_68[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_68[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_68[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_69[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_69[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_69[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_69[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_7[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_7[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_7[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_7[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_70[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_70[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_70[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_70[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_71[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_71[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_71[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_71[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_72[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_72[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_72[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_72[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_73[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_73[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_73[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_73[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_74[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_74[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_74[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_74[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_75[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_75[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_75[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_75[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_76[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_76[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_76[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_76[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_77[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_77[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_77[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_77[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_78[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_78[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_78[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_78[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_79[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_79[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_79[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_79[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_8[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_8[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_8[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_8[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_80[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_80[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_80[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_80[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_81[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_81[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_81[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_81[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_82[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_82[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_82[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_82[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_83[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_83[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_83[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_83[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_84[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_84[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_84[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_84[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_85[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_85[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_85[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_85[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_86[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_86[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_86[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_86[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_87[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_87[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_87[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_87[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_88[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_88[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_88[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_88[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_89[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_89[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_89[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_89[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_9[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_9[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_9[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_9[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_90[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_90[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_90[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_90[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_91[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_91[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_91[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_91[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_92[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_92[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_92[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_92[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_93[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_93[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_93[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_93[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_94[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_94[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_94[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_94[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_95[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_95[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_95[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_95[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__result_ready = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__inputs_fed = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__outputs_collected = 0xaaaaaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_new_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s3_new_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s3_new_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_new_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s3_new_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s3_new_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_new_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s3_new_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s3_new_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s2_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s2_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s2_new_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s2_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s3_new_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s3_new_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s2_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s2_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s2_new_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s2_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s3_new_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s3_new_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s2_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s2_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s2_new_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s2_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s3_new_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s3_new_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s2_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s2_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s2_new_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s2_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s3_new_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s3_new_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__result_data = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__result_valid = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s2_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s2_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s2_new_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s2_sign = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s3_new_exp = 0xaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s3_new_man = 0x2aU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__stage1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__stage2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__stage3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__stage4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__allReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__cycleCount = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_0 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_1 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_10 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_100 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_101 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_102 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_103 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_104 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_105 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_106 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_107 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_108 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_109 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_11 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_110 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_111 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_112 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_113 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_114 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_115 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_116 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_117 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_118 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_119 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_12 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_120 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_121 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_122 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_123 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_124 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_125 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_126 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_127 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_128 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_129 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_13 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_130 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_131 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_132 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_133 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_134 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_135 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_136 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_137 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_138 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_139 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_14 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_140 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_141 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_142 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_143 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_144 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_145 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_146 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_147 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_148 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_149 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_15 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_150 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_151 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_152 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_153 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_154 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_155 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_156 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_157 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_158 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_159 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_16 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_160 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_161 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_162 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_163 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_164 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_165 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_166 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_167 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_168 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_169 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_17 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_170 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_171 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_172 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_173 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_174 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_175 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_176 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_177 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_178 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_179 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_18 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_180 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_181 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_182 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_183 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_184 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_185 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_186 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_187 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_188 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_189 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_19 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_190 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_191 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_192 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_193 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_194 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_195 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_196 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_197 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_198 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_199 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_20 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_200 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_201 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_202 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_203 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_204 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_205 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_206 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_207 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_208 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_209 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_21 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_210 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_211 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_212 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_213 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_214 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_215 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_216 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_217 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_218 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_219 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_22 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_220 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_221 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_222 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_223 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_224 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_225 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_226 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_227 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_228 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_229 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_23 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_230 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_231 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_232 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_233 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_234 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_235 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_236 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_237 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_238 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_239 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_24 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_240 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_241 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_242 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_243 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_244 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_245 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_246 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_247 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_248 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_249 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_25 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_250 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_251 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_252 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_253 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_254 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_255 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_26 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_27 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_28 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_29 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_3 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_30 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_31 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_32 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_33 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_34 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_35 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_36 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_37 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_38 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_39 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_4 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_40 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_41 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_42 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_43 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_44 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_45 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_46 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_47 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_48 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_49 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_5 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_50 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_51 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_52 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_53 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_54 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_55 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_56 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_57 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_58 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_59 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_6 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_60 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_61 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_62 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_63 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_64 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_65 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_66 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_67 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_68 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_69 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_7 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_70 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_71 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_72 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_73 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_74 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_75 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_76 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_77 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_78 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_79 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_8 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_80 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_81 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_82 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_83 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_84 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_85 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_86 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_87 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_88 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_89 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_9 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_90 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_91 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_92 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_93 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_94 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_95 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_96 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_97 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_98 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_99 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__state = 2U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
    VL_READMEM_N(true, 16, 2000, 0, std::string{"data.hex"}
                 ,  &(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__RAM)
                 , 0U, 0x7cfU);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_initDelay = 0x2aaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_isReady = 0U;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOA_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOA_R2 = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOB_R = 0xaaaaU;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOB_R2 = 0xaaaaU;
}
