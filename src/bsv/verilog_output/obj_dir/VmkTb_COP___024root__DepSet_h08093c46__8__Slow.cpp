// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_ATTR_COLD void VmkTb_COP___024root___stl_sequent__TOP__7(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___stl_sequent__TOP__7\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17eU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x176U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16eU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x166U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15eU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x156U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14eU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x146U] 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13eU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x136U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12eU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x126U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11eU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x116U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10eU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x106U] 
                                                      >> 0xfU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U] 
                                                      >> 0x1fU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U] 
                                                      >> 0x1fU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U] 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U] 
                                                      >> 0xfU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                                      >> 0x1fU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                                      >> 0x1fU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                                      >> 0xfU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                                      >> 0x1fU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                                      >> 0x1fU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                                      >> 0xfU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U] 
                                                      >> 0x1fU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U] 
                                                      >> 0x1fU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U] 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U] 
                                                      >> 0xfU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x179U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x171U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x169U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x161U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x159U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x151U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x149U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x141U] 
                                                      >> 0x1fU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x139U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x131U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x129U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x121U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x119U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x111U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x109U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x101U] 
                                                      >> 0x1fU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x179U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x171U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x169U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x161U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x159U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x151U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x149U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x141U] 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x139U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x131U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x129U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x121U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x119U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x111U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x109U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x101U] 
                                                      >> 0xfU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                                      >> 0x1fU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                                                      >> 0x1fU))))))));
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfeU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf9U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf9U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                     >> 0x1fU));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf6U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf1U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf1U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                     >> 0x1fU));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeeU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe9U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe9U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                 >> 0x1fU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe6U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe1U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe1U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                 >> 0x1fU));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdeU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd9U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd9U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                 >> 0x1fU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd6U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd1U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd1U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                 >> 0x1fU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xceU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc9U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc9U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                             >> 0x1fU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc6U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc1U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc1U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                             >> 0x1fU));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbeU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb9U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb9U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                 >> 0x1fU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb6U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb1U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb1U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                 >> 0x1fU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaeU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa9U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa9U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                             >> 0x1fU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa6U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa1U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa1U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                             >> 0x1fU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x99U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x99U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                             >> 0x1fU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x96U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x91U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x91U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                             >> 0x1fU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x89U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x89U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                         >> 0x1fU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x86U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x81U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x81U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                         >> 0x1fU));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7eU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x79U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x79U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                 >> 0x1fU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x76U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x71U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x71U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                 >> 0x1fU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x69U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x69U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                             >> 0x1fU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x66U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x61U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x61U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                             >> 0x1fU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x59U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x59U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                             >> 0x1fU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x56U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x51U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x51U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                             >> 0x1fU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x49U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x49U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                         >> 0x1fU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x46U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x41U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x41U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                         >> 0x1fU));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x39U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x39U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                             >> 0x1fU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x36U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x31U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x31U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                             >> 0x1fU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x29U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x29U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                         >> 0x1fU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x26U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x21U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x21U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                         >> 0x1fU));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x19U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x19U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                         >> 0x1fU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                         >> 0x1fU));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[9U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[9U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                     >> 0x1fU));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184157_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq526 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[6U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2184980_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq529 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2185803_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq547 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2190741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq550 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2191564_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq553 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[1U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2192387_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq556 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[1U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2193210_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                     >> 0x1fU));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2194033_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
        = (1U & ((0x200U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                  ? ((1U & (~ (3U & (VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U) 
                                     >> 8U)))) && (1U 
                                                   & ((0x80U 
                                                       & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                       ? 
                                                      ((0x40U 
                                                        & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                        ? 
                                                       ((0x20U 
                                                         & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                         ? 
                                                        ((0x10U 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                          ? 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17eU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17eU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x179U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x179U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                                              >> 0xfU)))))
                                                          : 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x177U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x177U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x176U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x176U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x171U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x171U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                                              >> 0xfU))))))
                                                         : 
                                                        ((0x10U 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                          ? 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16fU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16fU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16eU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16eU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x169U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x169U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                                              >> 0xfU)))))
                                                          : 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x167U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x167U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x166U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x166U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x161U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x161U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                                              >> 0xfU)))))))
                                                        : 
                                                       ((0x20U 
                                                         & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                         ? 
                                                        ((0x10U 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                          ? 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15fU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15fU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15eU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15eU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x159U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x159U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                                              >> 0xfU)))))
                                                          : 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x157U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x157U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x156U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x156U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x151U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x151U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                                              >> 0xfU))))))
                                                         : 
                                                        ((0x10U 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                          ? 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14fU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14fU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14eU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14eU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x149U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x149U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                                              >> 0xfU)))))
                                                          : 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x147U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x147U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x146U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x146U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x141U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x141U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                                              >> 0xfU))))))))
                                                       : 
                                                      ((0x40U 
                                                        & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                        ? 
                                                       ((0x20U 
                                                         & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                         ? 
                                                        ((0x10U 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                          ? 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13fU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13fU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13eU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13eU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x139U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x139U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                                              >> 0xfU)))))
                                                          : 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x137U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x137U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x136U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x136U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x131U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x131U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                                              >> 0xfU))))))
                                                         : 
                                                        ((0x10U 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                          ? 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12fU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12fU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12eU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12eU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x129U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x129U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                                              >> 0xfU)))))
                                                          : 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x127U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x127U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x126U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x126U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x121U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x121U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                                              >> 0xfU)))))))
                                                        : 
                                                       ((0x20U 
                                                         & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                         ? 
                                                        ((0x10U 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                          ? 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11fU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11fU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11eU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11eU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x119U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x119U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                                              >> 0xfU)))))
                                                          : 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x117U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x117U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x116U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x116U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x111U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x111U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                                              >> 0xfU))))))
                                                         : 
                                                        ((0x10U 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                          ? 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10fU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10fU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10eU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10eU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x109U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x109U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                                                              >> 0xfU)))))
                                                          : 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x107U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x107U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x106U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x106U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x101U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x101U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                                                              >> 0xfU)))))))))))
                  : ((0x100U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                      ? ((0x80U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                          ? ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                              ? ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                  ? ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                      ? ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xffU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xffU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfeU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfeU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf9U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf9U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                                   >> 0xfU)))))
                                      : ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf7U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf7U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf6U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf6U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf1U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf1U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                                   >> 0xfU))))))
                                  : ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                      ? ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xefU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xefU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeeU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeeU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe9U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe9U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                                   >> 0xfU)))))
                                      : ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe7U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe7U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe6U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe6U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe1U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe1U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                                   >> 0xfU)))))))
                              : ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                  ? ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                      ? ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdfU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdfU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdeU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdeU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd9U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd9U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                                   >> 0xfU)))))
                                      : ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd7U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd7U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd6U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd6U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd1U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd1U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                                   >> 0xfU))))))
                                  : ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                      ? ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcfU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcfU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xceU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xceU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc9U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc9U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                                                   >> 0xfU)))))
                                      : ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc7U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc7U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc6U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc6U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc1U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc1U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                                                   >> 0xfU))))))))
                          : ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                              ? ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                  ? ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                      ? ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbfU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbfU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbeU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbeU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb9U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb9U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                                   >> 0xfU)))))
                                      : ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb7U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb7U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb6U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb6U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb1U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb1U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                                   >> 0xfU))))))
                                  : ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                      ? ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xafU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xafU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaeU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaeU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa9U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa9U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                                                   >> 0xfU)))))
                                      : ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa7U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa7U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa6U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa6U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa1U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa1U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                                                   >> 0xfU)))))))
                              : ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                  ? ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                      ? ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x99U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x99U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                                                   >> 0xfU)))))
                                      : ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x97U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x97U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x96U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x96U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x91U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x91U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                                                   >> 0xfU))))))
                                  : ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                      ? ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x89U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x89U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                                                   >> 0xfU)))))
                                      : ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x87U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x87U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x86U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x86U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x81U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x81U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                                                   >> 0xfU)))))))))
                      : ((0x80U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                          ? ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                              ? ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                  ? ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                      ? ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x79U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x79U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                                   >> 0xfU)))))
                                      : ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x77U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x77U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x76U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x76U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x71U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x71U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                                   >> 0xfU))))))
                                  : ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                      ? ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x69U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x69U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                                                   >> 0xfU)))))
                                      : ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x67U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x67U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x66U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x66U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x61U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x61U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                                                   >> 0xfU)))))))
                              : ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                  ? ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                      ? ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x59U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x59U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                                                   >> 0xfU)))))
                                      : ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x57U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x57U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x56U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x56U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x51U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x51U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                                                   >> 0xfU))))))
                                  : ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                      ? ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x49U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x49U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                                                   >> 0xfU)))))
                                      : ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x47U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x47U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x46U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x46U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x41U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x41U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                                                   >> 0xfU))))))))
                          : ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                              ? ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                  ? ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                      ? ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x39U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x39U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                                                   >> 0xfU)))))
                                      : ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x37U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x37U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x36U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x36U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x31U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x31U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                                                   >> 0xfU))))))
                                  : ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                      ? ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x29U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x29U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                                                   >> 0xfU)))))
                                      : ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x27U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x27U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x26U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x26U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x21U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x21U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                                                   >> 0xfU)))))))
                              : ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                  ? ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                      ? ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x19U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x19U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                                                   >> 0xfU)))))
                                      : ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                                                   >> 0xfU))))))
                                  : ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                      ? ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[9U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[9U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                                                   >> 0xfU)))))
                                      : ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                          ? ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[7U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[7U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[6U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[6U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                                                   >> 0xfU))))
                                          : ((4U & 
                                              VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                              ? ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[1U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[1U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                                                   >> 0xfU))))))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa1_load_activations 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__computing)) 
           & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_state)) 
              & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_started)) 
                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_weights_ready))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_rwkv1 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x4cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_rwkv0 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x4aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_wait_s21 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x46U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_wait_s20 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x44U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_wait_a1 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x40U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_wait_a0 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x3eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_wait_s31 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x3aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_wait_s30 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x38U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_wait_ww1 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x34U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_wait_ww0 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x32U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_wait_b1 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x2eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_wait_b0 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x2cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_wait_ww1 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x28U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_wait_ww0 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r1_done 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r0_done 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v1_done 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v0_done 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x10U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k1_done 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k0_done 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v0_load_done 
        = ((0xeU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r2_load_done 
        = ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v2_load_done 
        = ((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v1_load_done 
        = ((0x12U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k2_load_done 
        = ((0xaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k1_load_done 
        = ((6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k0_load_done 
        = ((2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__pipeline_stage_BIT_31_9_EQ_pipeline_stage_BIT___05FETC___05F_d21 
        = ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__pipeline_stage 
                          >> 0x1fU))) == (1U & (IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__pipeline_stage 
                                                        >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__pipeline_stage_BIT_31_9_EQ_pipeline_stage_BIT___05FETC___05F_d21 
        = ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__pipeline_stage 
                          >> 0x1fU))) == (1U & (IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__pipeline_stage 
                                                        >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__pipeline_stage_BIT_31_9_EQ_pipeline_stage_BIT___05FETC___05F_d21 
        = ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__pipeline_stage 
                          >> 0x1fU))) == (1U & (IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__pipeline_stage 
                                                        >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__pipeline_stage_BIT_31_9_EQ_pipeline_stage_BIT___05FETC___05F_d21 
        = ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__pipeline_stage 
                          >> 0x1fU))) == (1U & (IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__pipeline_stage 
                                                        >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r1_load_done 
        = ((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r0_load_done 
        = ((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.__VdfgRegularize_h6171c202_0_3 = ((3U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__state)) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__state)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
        = (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                  ? ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_32) 
                                                      >> 0xfU)))))))
                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_31) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_30) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_29) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_28) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_27) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_26) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_25) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_24) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_23) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_22) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_21) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_20) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_19) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_18) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_17) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_16) 
                                                    >> 0xfU)))))
                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_15) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_14) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_13) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_12) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_11) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_10) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_9) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_8) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_7) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_6) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_5) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_4) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_3) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_2) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_1) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_0) 
                                                    >> 0xfU))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
        = (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                  ? ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_32) 
                                                      >> 0xfU)))))))
                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_31) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_30) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_29) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_28) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_27) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_26) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_25) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_24) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_23) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_22) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_21) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_20) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_19) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_18) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_17) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_16) 
                                                    >> 0xfU)))))
                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_15) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_14) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_13) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_12) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_11) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_10) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_9) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_8) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_7) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_6) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_5) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_4) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_3) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_2) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_1) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_0) 
                                                    >> 0xfU))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
        = (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                  ? ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_32) 
                                                      >> 0xfU)))))))
                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_31) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_30) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_29) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_28) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_27) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_26) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_25) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_24) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_23) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_22) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_21) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_20) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_19) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_18) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_17) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_16) 
                                                    >> 0xfU)))))
                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_15) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_14) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_13) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_12) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_11) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_10) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_9) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_8) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_7) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_6) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_5) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_4) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_3) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_2) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_1) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_0) 
                                                    >> 0xfU))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
        = (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                  ? ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_32) 
                                                      >> 0xfU)))))))
                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_31) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_30) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_29) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_28) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_27) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_26) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_25) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_24) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_23) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_22) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_21) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_20) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_19) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_18) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_17) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_16) 
                                                    >> 0xfU)))))
                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_15) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_14) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_13) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_12) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_11) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_10) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_9) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_8) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_7) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_6) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_5) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_4) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_3) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_2) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_1) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_0) 
                                                    >> 0xfU))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
        = (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                  ? ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_32) 
                                                      >> 0xfU)))))))
                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_31) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_30) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_29) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_28) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_27) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_26) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_25) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_24) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_23) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_22) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_21) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_20) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_19) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_18) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_17) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_16) 
                                                    >> 0xfU)))))
                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_15) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_14) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_13) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_12) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_11) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_10) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_9) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_8) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_7) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_6) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_5) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_4) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_3) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_2) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_1) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_0) 
                                                    >> 0xfU))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
        = (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                  ? ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_32) 
                                                      >> 0xfU)))))))
                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_31) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_30) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_29) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_28) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_27) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_26) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_25) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_24) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_23) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_22) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_21) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_20) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_19) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_18) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_17) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_16) 
                                                    >> 0xfU)))))
                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_15) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_14) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_13) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_12) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_11) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_10) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_9) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_8) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_7) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_6) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_5) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_4) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_3) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_2) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_1) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_0) 
                                                    >> 0xfU))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
        = (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                  ? ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_32) 
                                                      >> 0xfU)))))))
                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_31) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_30) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_29) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_28) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_27) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_26) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_25) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_24) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_23) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_22) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_21) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_20) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_19) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_18) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_17) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_16) 
                                                    >> 0xfU)))))
                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_15) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_14) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_13) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_12) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_11) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_10) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_9) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_8) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_7) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_6) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_5) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_4) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_3) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_2) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_1) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_0) 
                                                    >> 0xfU))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
        = (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                  ? ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_32) 
                                                      >> 0xfU)))))))
                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_31) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_30) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_29) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_28) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_27) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_26) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_25) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_24) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_23) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_22) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_21) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_20) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_19) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_18) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_17) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_16) 
                                                    >> 0xfU)))))
                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_15) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_14) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_13) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_12) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_11) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_10) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_9) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_8) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_7) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_6) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_5) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_4) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_3) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_2) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_1) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_0) 
                                                    >> 0xfU))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
        = (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                  ? ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_32) 
                                                      >> 0xfU)))))))
                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_31) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_30) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_29) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_28) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_27) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_26) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_25) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_24) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_23) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_22) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_21) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_20) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_19) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_18) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_17) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_16) 
                                                    >> 0xfU)))))
                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_15) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_14) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_13) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_12) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_11) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_10) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_9) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_8) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_7) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_6) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_5) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_4) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_3) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_2) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_1) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_0) 
                                                    >> 0xfU))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
        = (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                  ? ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_32) 
                                                      >> 0xfU)))))))
                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_31) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_30) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_29) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_28) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_27) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_26) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_25) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_24) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_23) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_22) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_21) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_20) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_19) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_18) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_17) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_16) 
                                                    >> 0xfU)))))
                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_15) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_14) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_13) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_12) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_11) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_10) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_9) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_8) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_7) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_6) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_5) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_4) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_3) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_2) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_1) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_0) 
                                                    >> 0xfU))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
        = (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                  ? ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_32) 
                                                      >> 0xfU)))))))
                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_31) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_30) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_29) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_28) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_27) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_26) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_25) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_24) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_23) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_22) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_21) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_20) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_19) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_18) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_17) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_16) 
                                                    >> 0xfU)))))
                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_15) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_14) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_13) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_12) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_11) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_10) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_9) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_8) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_7) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_6) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_5) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_4) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_3) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_2) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_1) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_0) 
                                                    >> 0xfU))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
        = (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                  ? ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_32) 
                                                      >> 0xfU)))))))
                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_31) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_30) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_29) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_28) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_27) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_26) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_25) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_24) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_23) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_22) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_21) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_20) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_19) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_18) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_17) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_16) 
                                                    >> 0xfU)))))
                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_15) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_14) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_13) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_12) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_11) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_10) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_9) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_8) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_7) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_6) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_5) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_4) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_3) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_2) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_1) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_0) 
                                                    >> 0xfU))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
        = (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                  ? ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_32) 
                                                      >> 0xfU)))))))
                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_31) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_30) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_29) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_28) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_27) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_26) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_25) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_24) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_23) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_22) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_21) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_20) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_19) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_18) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_17) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_16) 
                                                    >> 0xfU)))))
                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_15) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_14) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_13) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_12) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_11) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_10) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_9) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_8) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_7) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_6) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_5) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_4) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_3) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_2) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_1) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_0) 
                                                    >> 0xfU))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
        = (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                  ? ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_32) 
                                                      >> 0xfU)))))))
                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_31) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_30) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_29) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_28) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_27) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_26) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_25) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_24) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_23) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_22) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_21) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_20) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_19) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_18) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_17) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_16) 
                                                    >> 0xfU)))))
                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_15) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_14) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_13) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_12) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_11) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_10) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_9) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_8) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_7) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_6) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_5) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_4) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_3) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_2) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_1) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_0) 
                                                    >> 0xfU))))))));
}
