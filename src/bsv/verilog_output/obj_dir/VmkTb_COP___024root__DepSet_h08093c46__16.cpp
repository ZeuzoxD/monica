// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__19(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__19\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x174U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x164U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x154U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x144U] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x134U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x124U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x114U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x104U] 
                                                     >> 0xfU)))))));
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                = (0x7fU & 0x2aU);
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x174U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x174U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x174U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x173U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x173U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x173U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x173U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x173U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x173U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x173U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x172U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x172U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x172U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x172U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x172U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x172U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x172U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x171U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x171U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x171U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x171U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x171U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x171U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x171U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x170U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x170U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x170U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x170U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x170U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x170U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x170U]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x164U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x164U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x164U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x163U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x163U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x163U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x163U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x163U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x163U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x163U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x162U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x162U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x162U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x162U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x162U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x162U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x162U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x161U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x161U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x161U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x161U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x161U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x161U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x161U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x160U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x160U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x160U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x160U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x160U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x160U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x160U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x154U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x154U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x154U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x153U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x153U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x153U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x153U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x153U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x153U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x153U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x152U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x152U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x152U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x152U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x152U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x152U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x152U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x151U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x151U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x151U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x151U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x151U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x151U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x151U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x150U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x150U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x150U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x150U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x150U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x150U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x150U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x144U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x144U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x144U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x143U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x143U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x143U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x143U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x143U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x143U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x143U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x142U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x142U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x142U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x142U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x142U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x142U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x142U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x141U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x141U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x141U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x141U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x141U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x141U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x141U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x140U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x140U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x140U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x140U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x140U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x140U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x140U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x134U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x134U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x134U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x133U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x133U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x133U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x133U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x133U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x133U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x133U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x132U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x132U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x132U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x132U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x132U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x132U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x132U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x131U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x131U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x131U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x131U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x131U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x131U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x131U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x130U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x130U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x130U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x130U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x130U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x130U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x130U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x124U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x124U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x124U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x123U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x123U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x123U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x123U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x123U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x123U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x123U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x122U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x122U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x122U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x122U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x122U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x122U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x122U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x121U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x121U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x121U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x121U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x121U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x121U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x121U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x120U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x120U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x120U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x120U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x120U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x120U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x120U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x114U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x114U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x114U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x113U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x113U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x113U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x113U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x113U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x113U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x113U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x112U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x112U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x112U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x112U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x112U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x112U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x112U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x111U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x111U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x111U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x111U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x111U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x111U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x111U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x110U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x110U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x110U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x110U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x110U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x110U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x110U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x104U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x104U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x104U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x103U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x103U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x103U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x103U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x103U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x103U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x103U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x102U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x102U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x102U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x102U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x102U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x102U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x102U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x101U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x101U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x101U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x101U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x101U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x101U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x101U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x100U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x100U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x100U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x100U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x100U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x100U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x100U]);
        }
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x173U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x163U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x153U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x143U] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x133U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x123U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x113U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x103U] 
                                                     >> 0x1fU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x173U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x163U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x153U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x143U] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x133U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x123U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x113U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x103U] 
                                                     >> 0xfU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x172U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x162U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x152U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x142U] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x132U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x122U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x112U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x102U] 
                                                     >> 0x1fU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x172U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x162U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x152U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x142U] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x132U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x122U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x112U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x102U] 
                                                     >> 0xfU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x171U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x161U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x151U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x141U] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x131U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x121U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x111U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x101U] 
                                                     >> 0x1fU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x171U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x161U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x151U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x141U] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x131U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x121U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x111U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x101U] 
                                                     >> 0xfU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x170U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x160U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x150U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x140U] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x130U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x120U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x110U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x100U] 
                                                     >> 0x1fU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x170U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x160U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x150U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x140U] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x130U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x120U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x110U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x100U] 
                                                     >> 0xfU)))))));
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf4U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf4U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf4U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf4U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf3U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf3U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf3U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf3U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf3U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf3U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf3U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf3U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf3U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf2U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf2U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf2U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf2U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf2U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf2U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf2U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf1U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf1U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf1U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf1U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf1U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf1U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf1U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf1U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf0U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf0U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf0U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf0U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf0U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xf0U]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe4U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe4U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe4U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe4U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe3U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe3U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe3U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe3U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe3U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe3U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe3U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe3U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe3U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe2U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe2U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe2U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe2U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe2U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe2U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe2U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe1U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe1U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe1U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe1U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe1U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe1U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe1U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe1U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe0U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe0U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe0U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe0U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe0U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xe0U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd4U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd4U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd4U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd4U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd2U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd2U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd2U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd2U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd2U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd2U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd2U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd2U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd2U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd1U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd1U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd1U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd1U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd1U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd1U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd1U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd1U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd1U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd0U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd0U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd0U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd0U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd0U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd0U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd0U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xd0U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc4U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc4U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc4U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc4U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc2U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc2U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc2U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc2U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc2U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc2U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc2U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc2U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc2U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc1U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc1U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc1U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc1U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc1U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc1U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc1U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc1U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc1U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc0U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc0U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc0U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc0U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc0U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc0U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc0U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xc0U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb4U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb4U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb4U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb4U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb2U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb2U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb2U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb2U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb2U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb2U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb2U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb2U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb2U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb1U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb1U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb1U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb1U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb1U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb1U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb1U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb1U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb1U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb0U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb0U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb0U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb0U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb0U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb0U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb0U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xb0U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa4U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa4U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa4U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa4U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa2U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa2U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa2U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa2U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa2U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa2U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa2U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa2U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa2U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa1U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa1U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa1U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa1U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa1U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa1U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa1U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa1U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa1U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa0U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa0U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa0U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa0U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa0U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa0U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa0U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0xa0U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x94U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x94U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x94U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x94U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x93U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x93U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x93U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x93U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x93U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x93U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x93U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x93U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x93U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x92U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x92U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x92U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x92U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x92U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x92U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x92U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x92U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x92U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x91U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x91U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x91U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x91U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x91U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x91U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x91U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x91U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x91U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x90U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x90U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x90U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x90U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x90U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x90U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x90U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x90U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x90U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x84U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x84U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x84U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x84U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x83U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x83U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x83U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x83U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x83U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x83U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x83U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x83U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x83U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x82U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x82U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x82U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x82U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x82U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x82U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x82U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x82U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x82U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x81U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x81U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x81U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x81U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x81U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x81U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x81U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x81U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x81U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x80U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x80U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x80U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x80U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x80U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x80U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x80U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x80U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x80U]);
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x74U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x74U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x74U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x74U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x73U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x73U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x73U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x73U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x73U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x73U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x73U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x73U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x73U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x72U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x72U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x72U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x72U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x72U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x72U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x72U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x72U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x72U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x71U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x71U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x71U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x71U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x71U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x71U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x71U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x71U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x71U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x70U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x70U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x70U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x70U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x70U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x70U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x70U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x70U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x70U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x64U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x64U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x64U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x64U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x63U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x63U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x63U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x63U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x63U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x63U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x63U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x63U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x63U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x62U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x62U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x62U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x62U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x62U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x62U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x62U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x62U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x62U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x61U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x61U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x61U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x61U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x61U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x61U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x61U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x61U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x61U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x60U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x60U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x60U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x60U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x60U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x60U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x60U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x60U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x60U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x54U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x54U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x54U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x54U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x53U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x53U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x53U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x53U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x53U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x53U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x53U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x53U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x53U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x52U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x52U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x52U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x52U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x52U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x52U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x52U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x52U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x52U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x51U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x51U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x51U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x51U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x51U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x51U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x51U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x51U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x51U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x50U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x50U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x50U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x50U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x50U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x50U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x50U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x50U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x50U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x44U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x44U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x44U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x44U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x43U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x43U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x43U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x43U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x43U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x43U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x43U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x43U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x43U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x42U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x42U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x42U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x42U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x42U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x42U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x42U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x42U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x42U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x41U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x41U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x41U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x41U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x41U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x41U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x41U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x41U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x41U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x40U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x40U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x40U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x40U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x40U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x40U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x40U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x40U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x40U]);
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x34U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x34U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x34U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x34U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x33U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x33U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x33U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x33U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x33U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x33U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x33U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x33U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x33U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x32U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x32U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x32U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x32U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x32U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x32U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x32U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x32U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x32U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x31U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x31U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x31U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x31U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x31U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x31U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x31U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x31U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x31U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x30U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x30U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x30U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x30U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x30U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x30U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x30U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x30U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x30U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x24U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x24U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x24U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x24U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x23U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x23U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x23U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x23U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x23U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x23U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x23U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x23U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x23U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x22U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x22U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x22U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x22U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x22U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x22U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x22U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x22U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x22U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x21U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x21U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x21U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x21U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x21U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x21U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x21U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x21U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x21U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x20U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x20U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x20U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x20U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x20U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x20U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x20U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x20U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x20U]);
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x14U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x14U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x14U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x14U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x13U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x13U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x13U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x13U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x13U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x13U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x13U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x13U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x13U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x12U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x12U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x12U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x12U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x12U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x12U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x12U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x12U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x12U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x11U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x11U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x11U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x11U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x11U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x11U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x11U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x11U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x11U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x10U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x10U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x10U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x10U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x10U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x10U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x10U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x10U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0x10U]);
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[4U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[4U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[4U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x663342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[4U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[3U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[3U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[3U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[3U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[3U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[3U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[3U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[3U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x664988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[3U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[2U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[2U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[2U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x665811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[2U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[2U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[2U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[2U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[2U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x666634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[2U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[1U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[1U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[1U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[1U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[1U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[1U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[1U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[1U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[1U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww[0U]);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected__024D_IN 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_mse_done 
        = ((0xcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)) 
           & ((0x60U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected)) 
              & (0x60U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2_collected))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36740[0U] 
        = ((((0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x17bU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x17bU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x17bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38737[0U] 
        = ((((0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x17bU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x17bU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x17bU])));
    if ((0x5fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36740[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36740[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36740[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36740[4U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38737[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38737[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38737[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38737[4U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U];
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36740[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x17cU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36740[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x17dU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36740[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x17eU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36740[4U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x17fU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38737[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x17cU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38737[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x17dU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38737[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x17eU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38737[4U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x17fU];
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected__024D_IN 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27808[0U] 
        = ((((0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x17bU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x17bU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x17bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29814[0U] 
        = ((((0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x17bU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x17bU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x17bU])));
    if ((0x5fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27808[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27808[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27808[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27808[4U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29814[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29814[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29814[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29814[4U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U];
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27808[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x17cU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27808[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x17dU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27808[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x17eU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27808[4U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x17fU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29814[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x17cU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29814[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x17dU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29814[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x17eU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29814[4U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x17fU];
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__empty_reg 
        = vlSelfRef.__Vdly__mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__empty_reg;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__empty_reg 
        = vlSelfRef.__Vdly__mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__empty_reg;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__empty_reg 
        = vlSelfRef.__Vdly__mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__empty_reg;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__empty_reg 
        = vlSelfRef.__Vdly__mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__empty_reg;
    if (vlSelfRef.__VdlySet__mkTb_COP__DOT__cop__DOT__bram_e__DOT__RAM__v0) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_e__DOT__RAM[vlSelfRef.__VdlyDim0__mkTb_COP__DOT__cop__DOT__bram_e__DOT__RAM__v0] 
            = vlSelfRef.__VdlyVal__mkTb_COP__DOT__cop__DOT__bram_e__DOT__RAM__v0;
    }
    if (vlSelfRef.__VdlySet__mkTb_COP__DOT__cop__DOT__bram_f__DOT__RAM__v0) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_f__DOT__RAM[vlSelfRef.__VdlyDim0__mkTb_COP__DOT__cop__DOT__bram_f__DOT__RAM__v0] 
            = vlSelfRef.__VdlyVal__mkTb_COP__DOT__cop__DOT__bram_f__DOT__RAM__v0;
    }
    if (vlSelfRef.__VdlySet__mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__RAM__v0) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__RAM[vlSelfRef.__VdlyDim0__mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__RAM__v0] 
            = vlSelfRef.__VdlyVal__mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__RAM__v0;
    }
    if (vlSelfRef.__VdlySet__mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__RAM__v0) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__RAM[vlSelfRef.__VdlyDim0__mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__RAM__v0] 
            = vlSelfRef.__VdlyVal__mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__RAM__v0;
    }
    if (vlSelfRef.__VdlySet__mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__RAM__v0) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__RAM[vlSelfRef.__VdlyDim0__mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__RAM__v0] 
            = vlSelfRef.__VdlyVal__mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__RAM__v0;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa2_prefetch_weights_overlap 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024RDY_start) 
           & ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_state)) 
              & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_weight_batch_requested)) 
                 & (0xbU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx)))));
    if (vlSelfRef.__VdlySet__mkTb_COP__DOT__cop__DOT__bram_state__DOT__RAM__v0) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__DOT__RAM[vlSelfRef.__VdlyDim0__mkTb_COP__DOT__cop__DOT__bram_state__DOT__RAM__v0] 
            = vlSelfRef.__VdlyVal__mkTb_COP__DOT__cop__DOT__bram_state__DOT__RAM__v0;
    }
    if (vlSelfRef.__VdlySet__mkTb_COP__DOT__cop__DOT__bram_d__DOT__RAM__v0) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__DOT__RAM[vlSelfRef.__VdlyDim0__mkTb_COP__DOT__cop__DOT__bram_d__DOT__RAM__v0] 
            = vlSelfRef.__VdlyVal__mkTb_COP__DOT__cop__DOT__bram_d__DOT__RAM__v0;
    }
    if (vlSelfRef.__VdlySet__mkTb_COP__DOT__cop__DOT__bram_x__DOT__RAM__v0) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__DOT__RAM[vlSelfRef.__VdlyDim0__mkTb_COP__DOT__cop__DOT__bram_x__DOT__RAM__v0] 
            = vlSelfRef.__VdlyVal__mkTb_COP__DOT__cop__DOT__bram_x__DOT__RAM__v0;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_44))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0x18U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_49) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_48));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0x19U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_53) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_52)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_51) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_50))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0x1aU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_53) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_52)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_51) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_50))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0x1bU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_55) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_54));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0x1cU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_59) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_58)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_57) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_56))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0x1dU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_59) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_58)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_57) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_56))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0x1eU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_63) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_62)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_61) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_60))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024get_result[0x1fU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_63) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_62)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_61) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__result_regs_60))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_44))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0x18U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_49) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_48));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0x19U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_53) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_52)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_51) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_50))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0x1aU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_53) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_52)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_51) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_50))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0x1bU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_55) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_54));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0x1cU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_59) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_58)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_57) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_56))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0x1dU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_59) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_58)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_57) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_56))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0x1eU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_63) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_62)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_61) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_60))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024get_result[0x1fU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_63) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_62)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_61) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__result_regs_60))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_44))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0x18U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_49) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_48));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0x19U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_53) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_52)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_51) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_50))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0x1aU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_53) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_52)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_51) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_50))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0x1bU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_55) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_54));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0x1cU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_59) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_58)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_57) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_56))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0x1dU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_59) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_58)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_57) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_56))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0x1eU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_63) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_62)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_61) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_60))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024get_result[0x1fU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_63) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_62)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_61) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__result_regs_60))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_44))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0x18U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_49) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_48));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0x19U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_53) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_52)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_51) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_50))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0x1aU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_53) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_52)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_51) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_50))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0x1bU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_55) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_54));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0x1cU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_59) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_58)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_57) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_56))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0x1dU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_59) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_58)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_57) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_56))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0x1eU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_63) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_62)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_61) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_60))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024get_result[0x1fU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_63) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_62)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_61) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__result_regs_60))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__WILL_FIRE_RL_collectResponses 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_isReady) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_isReady) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1_RDY_requestB___05F53_AND_brams_2_RDY_reque_ETC___05F_d441) 
                 & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__state)) 
                    & ((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__cycleCount)) 
                       & (4U >= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__cycleCount)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__WILL_FIRE_RL_doReading 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_isReady) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_isReady) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1_RDY_requestB___05F53_AND_brams_2_RDY_reque_ETC___05F_d441) 
                 & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__state)) 
                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__allReady)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1_RDY_requestB___05F53_AND_brams_2_RDY_reque_ETC___05F_d441) 
                 & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__state)) 
                    & ((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount)) 
                       & (4U >= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_doReading 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1_RDY_requestB___05F53_AND_brams_2_RDY_reque_ETC___05F_d441) 
                 & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__state)) 
                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__allReady)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__exp_sum___05Fh19115 
        = (0x1ffU & (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_exp___05Fh12136))
                       ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_exp___05Fh12136)) 
                     + ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_exp___05Fh12139))
                         ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_exp___05Fh12139))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT___0_CONCAT_NOT_SEL_ARR_reg_a_64_BITS_14_TO_7_99___05FETC___05F_d676 
        = ((((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_exp___05Fh12136)) 
             << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_mant___05Fh12137)) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_exp___05Fh12139)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_mant___05Fh12140)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__exp_sum___05Fh26798 
        = (0x1ffU & (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_exp___05Fh19822))
                       ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_exp___05Fh19822)) 
                     + ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_exp___05Fh19825))
                         ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_exp___05Fh19825))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT___0_CONCAT_NOT_SEL_ARR_reg_c_73_BITS_14_TO_7_008_ETC___05F_d1285 
        = ((((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_exp___05Fh19822)) 
             << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_mant___05Fh19823)) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_exp___05Fh19825)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_mant___05Fh19826)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__exp_sum___05Fh19115 
        = (0x1ffU & (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136))
                       ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136)) 
                     + ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139))
                         ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT___0_CONCAT_NOT_SEL_ARR_reg_a_64_BITS_14_TO_7_99___05FETC___05F_d676 
        = ((((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136)) 
             << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137)) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__exp_sum___05Fh26798 
        = (0x1ffU & (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822))
                       ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822)) 
                     + ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825))
                         ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT___0_CONCAT_NOT_SEL_ARR_reg_c_73_BITS_14_TO_7_008_ETC___05F_d1285 
        = ((((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822)) 
             << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823)) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__exp_sum___05Fh19115 
        = (0x1ffU & (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136))
                       ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136)) 
                     + ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139))
                         ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT___0_CONCAT_NOT_SEL_ARR_reg_a_64_BITS_14_TO_7_99___05FETC___05F_d676 
        = ((((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136)) 
             << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137)) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__exp_sum___05Fh26798 
        = (0x1ffU & (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822))
                       ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822)) 
                     + ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825))
                         ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT___0_CONCAT_NOT_SEL_ARR_reg_c_73_BITS_14_TO_7_008_ETC___05F_d1285 
        = ((((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822)) 
             << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823)) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__exp_sum___05Fh19115 
        = (0x1ffU & (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136))
                       ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136)) 
                     + ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139))
                         ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___0_CONCAT_NOT_SEL_ARR_reg_a_64_BITS_14_TO_7_99___05FETC___05F_d676 
        = ((((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136)) 
             << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137)) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__exp_sum___05Fh26798 
        = (0x1ffU & (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822))
                       ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822)) 
                     + ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825))
                         ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___0_CONCAT_NOT_SEL_ARR_reg_c_73_BITS_14_TO_7_008_ETC___05F_d1285 
        = ((((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822)) 
             << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823)) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter__024EN 
        = ((2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__state)) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_weight_batch_ready)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_weight_batch_requested)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_44))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x18U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_49) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_48));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x19U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_53) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_52)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_51) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_50))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x1aU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_53) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_52)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_51) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_50))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x1bU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_55) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_54));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x1cU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_59) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_58)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_57) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_56))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x1dU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_59) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_58)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_57) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_56))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x1eU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_61) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_60));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x1fU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_65) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_64)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_63) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_62))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x20U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_65) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_64)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_63) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_62))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x21U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_67) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_66));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x22U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_71) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_70)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_69) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_68))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x23U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_71) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_70)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_69) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_68))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x24U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_73) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_72));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x25U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_77) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_76)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_75) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_74))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x26U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_77) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_76)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_75) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_74))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x27U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_79) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_78));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x28U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_83) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_82)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_81) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_80))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x29U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_83) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_82)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_81) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_80))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x2aU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_85) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_84));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x2bU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_89) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_88)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_87) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_86))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x2cU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_89) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_88)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_87) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_86))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x2dU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_91) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_90));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x2eU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_95) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_94)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_93) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_92))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x2fU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_95) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_94)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_93) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_92))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x30U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_97) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_96));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x31U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_101) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_100)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_99) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_98))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x32U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_101) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_100)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_99) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_98))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x33U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_103) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_102));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x34U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_107) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_106)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_105) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_104))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x35U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_107) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_106)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_105) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_104))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x36U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_109) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_108));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x37U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_113) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_112)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_111) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_110))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x38U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_113) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_112)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_111) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_110))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x39U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_115) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_114));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x3aU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_119) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_118)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_117) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_116))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x3bU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_119) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_118)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_117) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_116))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x3cU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_121) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_120));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x3dU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_125) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_124)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_123) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_122))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x3eU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_125) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_124)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_123) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_122))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x3fU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_127) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_126));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x40U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_131) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_130)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_129) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_128))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x41U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_131) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_130)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_129) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_128))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x42U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_133) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_132));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x43U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_137) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_136)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_135) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_134))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x44U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_137) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_136)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_135) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_134))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x45U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_139) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_138));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x46U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_143) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_142)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_141) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_140))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x47U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_143) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_142)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_141) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_140))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x48U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_145) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_144));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x49U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_149) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_148)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_147) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_146))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x4aU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_149) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_148)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_147) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_146))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x4bU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_151) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_150));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x4cU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_155) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_154)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_153) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_152))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x4dU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_155) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_154)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_153) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_152))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x4eU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_157) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_156));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x4fU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_161) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_160)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_159) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_158))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x50U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_161) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_160)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_159) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_158))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x51U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_163) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_162));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x52U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_167) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_166)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_165) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_164))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x53U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_167) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_166)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_165) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_164))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x54U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_169) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_168));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x55U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_173) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_172)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_171) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_170))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x56U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_173) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_172)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_171) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_170))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x57U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_175) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_174));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x58U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_179) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_178)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_177) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_176))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x59U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_179) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_178)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_177) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_176))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x5aU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_181) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_180));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x5bU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_185) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_184)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_183) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_182))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x5cU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_185) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_184)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_183) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_182))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x5dU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_187) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_186));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x5eU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_191) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_190)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_189) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_188))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x5fU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_191) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_190)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_189) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_188))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x60U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_193) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_192));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x61U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_197) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_196)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_195) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_194))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x62U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_197) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_196)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_195) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_194))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x63U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_199) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_198));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x64U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_203) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_202)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_201) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_200))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x65U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_203) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_202)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_201) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_200))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x66U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_205) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_204));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x67U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_209) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_208)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_207) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_206))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x68U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_209) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_208)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_207) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_206))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x69U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_211) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_210));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x6aU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_215) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_214)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_213) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_212))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x6bU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_215) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_214)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_213) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_212))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x6cU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_217) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_216));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x6dU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_221) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_220)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_219) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_218))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x6eU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_221) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_220)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_219) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_218))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x6fU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_223) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_222));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x70U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_227) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_226)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_225) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_224))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x71U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_227) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_226)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_225) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_224))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x72U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_229) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_228));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x73U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_233) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_232)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_231) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_230))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x74U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_233) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_232)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_231) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_230))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x75U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_235) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_234));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x76U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_239) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_238)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_237) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_236))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x77U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_239) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_238)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_237) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_236))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x78U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_241) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_240));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x79U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_245) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_244)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_243) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_242))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x7aU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_245) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_244)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_243) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_242))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x7bU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_247) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_246));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x7cU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_251) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_250)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_249) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_248))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x7dU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_251) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_250)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_249) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_248))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x7eU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_255) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_254)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_253) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_252))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res[0x7fU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_255) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_254)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_253) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__dataVec_252))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_44))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x18U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_49) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_48));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x19U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_53) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_52)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_51) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_50))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x1aU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_53) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_52)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_51) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_50))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x1bU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_55) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_54));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x1cU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_59) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_58)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_57) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_56))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x1dU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_59) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_58)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_57) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_56))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x1eU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_61) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_60));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x1fU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_65) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_64)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_63) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_62))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x20U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_65) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_64)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_63) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_62))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x21U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_67) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_66));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x22U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_71) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_70)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_69) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_68))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x23U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_71) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_70)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_69) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_68))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x24U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_73) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_72));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x25U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_77) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_76)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_75) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_74))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x26U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_77) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_76)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_75) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_74))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x27U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_79) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_78));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x28U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_83) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_82)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_81) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_80))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x29U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_83) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_82)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_81) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_80))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x2aU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_85) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_84));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x2bU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_89) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_88)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_87) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_86))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x2cU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_89) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_88)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_87) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_86))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x2dU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_91) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_90));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x2eU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_95) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_94)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_93) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_92))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x2fU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_95) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_94)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_93) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_92))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x30U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_97) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_96));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x31U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_101) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_100)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_99) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_98))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x32U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_101) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_100)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_99) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_98))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x33U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_103) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_102));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x34U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_107) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_106)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_105) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_104))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x35U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_107) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_106)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_105) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_104))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x36U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_109) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_108));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x37U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_113) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_112)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_111) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_110))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x38U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_113) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_112)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_111) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_110))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x39U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_115) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_114));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x3aU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_119) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_118)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_117) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_116))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x3bU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_119) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_118)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_117) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_116))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x3cU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_121) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_120));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x3dU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_125) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_124)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_123) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_122))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x3eU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_125) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_124)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_123) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_122))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x3fU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_127) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_126));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x40U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_131) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_130)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_129) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_128))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x41U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_131) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_130)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_129) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_128))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x42U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_133) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_132));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x43U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_137) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_136)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_135) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_134))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x44U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_137) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_136)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_135) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_134))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x45U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_139) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_138));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x46U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_143) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_142)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_141) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_140))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x47U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_143) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_142)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_141) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_140))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x48U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_145) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_144));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x49U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_149) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_148)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_147) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_146))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x4aU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_149) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_148)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_147) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_146))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x4bU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_151) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_150));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x4cU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_155) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_154)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_153) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_152))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x4dU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_155) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_154)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_153) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_152))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x4eU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_157) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_156));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x4fU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_161) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_160)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_159) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_158))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x50U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_161) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_160)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_159) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_158))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x51U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_163) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_162));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x52U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_167) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_166)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_165) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_164))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x53U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_167) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_166)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_165) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_164))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x54U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_169) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_168));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x55U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_173) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_172)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_171) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_170))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x56U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_173) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_172)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_171) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_170))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x57U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_175) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_174));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x58U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_179) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_178)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_177) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_176))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x59U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_179) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_178)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_177) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_176))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x5aU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_181) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_180));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x5bU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_185) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_184)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_183) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_182))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x5cU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_185) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_184)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_183) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_182))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x5dU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_187) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_186));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x5eU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_191) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_190)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_189) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_188))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x5fU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_191) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_190)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_189) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_188))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x60U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_193) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_192));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x61U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_197) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_196)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_195) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_194))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x62U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_197) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_196)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_195) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_194))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x63U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_199) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_198));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x64U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_203) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_202)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_201) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_200))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x65U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_203) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_202)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_201) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_200))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x66U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_205) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_204));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x67U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_209) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_208)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_207) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_206))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x68U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_209) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_208)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_207) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_206))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x69U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_211) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_210));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x6aU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_215) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_214)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_213) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_212))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x6bU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_215) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_214)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_213) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_212))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x6cU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_217) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_216));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x6dU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_221) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_220)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_219) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_218))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x6eU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_221) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_220)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_219) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_218))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x6fU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_223) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_222));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x70U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_227) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_226)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_225) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_224))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x71U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_227) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_226)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_225) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_224))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x72U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_229) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_228));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x73U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_233) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_232)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_231) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_230))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x74U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_233) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_232)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_231) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_230))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x75U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_235) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_234));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x76U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_239) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_238)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_237) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_236))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x77U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_239) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_238)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_237) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_236))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x78U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_241) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_240));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x79U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_245) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_244)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_243) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_242))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x7aU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_245) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_244)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_243) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_242))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x7bU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_247) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_246));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x7cU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_251) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_250)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_249) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_248))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x7dU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_251) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_250)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_249) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_248))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x7eU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_255) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_254)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_253) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_252))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res[0x7fU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_255) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_254)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_253) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__dataVec_252))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh26104 
        = (0x3ffffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter) 
                        << 8U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__cycleCount) 
                                  << 6U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104 
        = (0x3ffffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__readCounter) 
                        << 8U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount) 
                                  << 6U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_30_TO_23_137_ULT_sa_g_ETC___05F_d7152) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5587498 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5587474 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_30_TO_23_137_ULT_s_ETC___05F_d7154 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5587415 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5587498 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5587474 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_30_TO_23_137_ULT_s_ETC___05F_d7154 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5587415 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_30_TO_23_0205_ULT_sa___05FETC___05F_d10213) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5727628 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5727604 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_30_TO_23_0205_ULT___05FETC___05F_d10215 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5727545 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5727628 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5727604 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_30_TO_23_0205_ULT___05FETC___05F_d10215 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5727545 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_174_TO_167_007_ULT_sa_ETC___05F_d6022) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5579695 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5579671 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_174_TO_167_007_ULT_ETC___05F_d6024 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5579612 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5579695 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5579671 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_174_TO_167_007_ULT_ETC___05F_d6024 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5579612 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_174_TO_167_147_ULT_sa_ETC___05F_d9155) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5719825 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5719801 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_174_TO_167_147_ULT_ETC___05F_d9157 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5719742 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5719825 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5719801 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_174_TO_167_147_ULT_ETC___05F_d9157 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5719742 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_190_TO_183_882_ULT_sa_ETC___05F_d5897) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5578828 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5578804 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_190_TO_183_882_ULT_ETC___05F_d5899 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5578745 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5578828 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5578804 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_190_TO_183_882_ULT_ETC___05F_d5899 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5578745 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_190_TO_183_030_ULT_sa_ETC___05F_d9038) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5718958 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5718934 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_190_TO_183_030_ULT_ETC___05F_d9040 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5718875 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5718958 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5718934 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_190_TO_183_030_ULT_ETC___05F_d9040 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5718875 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_206_TO_199_756_ULT_sa_ETC___05F_d5771) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5577961 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5577937 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_206_TO_199_756_ULT_ETC___05F_d5773 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5577878 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5577961 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5577937 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_206_TO_199_756_ULT_ETC___05F_d5773 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5577878 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_206_TO_199_912_ULT_sa_ETC___05F_d8920) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5718091 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5718067 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_206_TO_199_912_ULT_ETC___05F_d8922 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5718008 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5718091 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5718067 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_206_TO_199_912_ULT_ETC___05F_d8922 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5718008 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_222_TO_215_631_ULT_sa_ETC___05F_d5646) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5577094 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5577070 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_222_TO_215_631_ULT_ETC___05F_d5648 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5577011 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5577094 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5577070 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_222_TO_215_631_ULT_ETC___05F_d5648 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5577011 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_222_TO_215_795_ULT_sa_ETC___05F_d8803) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5717224 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5717200 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_222_TO_215_795_ULT_ETC___05F_d8805 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5717141 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5717224 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5717200 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_222_TO_215_795_ULT_ETC___05F_d8805 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5717141 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_238_TO_231_505_ULT_sa_ETC___05F_d5520) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5576227 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5576203 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_238_TO_231_505_ULT_ETC___05F_d5522 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5576144 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5576227 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5576203 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_238_TO_231_505_ULT_ETC___05F_d5522 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5576144 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_238_TO_231_677_ULT_sa_ETC___05F_d8685) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5716357 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5716333 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_238_TO_231_677_ULT_ETC___05F_d8687 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5716274 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5716357 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5716333 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_238_TO_231_677_ULT_ETC___05F_d8687 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5716274 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_254_TO_247_379_ULT_sa_ETC___05F_d5395) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5575360 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5575336 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_254_TO_247_379_ULT_ETC___05F_d5397 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5575277 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5575360 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5575336 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_254_TO_247_379_ULT_ETC___05F_d5397 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5575277 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_254_TO_247_560_ULT_sa_ETC___05F_d8568) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5715490 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5715466 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_254_TO_247_560_ULT_ETC___05F_d8570 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5715407 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5715490 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5715466 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_254_TO_247_560_ULT_ETC___05F_d8570 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5715407 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_46_TO_39_011_ULT_sa_g_ETC___05F_d7026) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5586631 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5586607 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_46_TO_39_011_ULT_s_ETC___05F_d7028 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5586548 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5586631 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5586607 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_46_TO_39_011_ULT_s_ETC___05F_d7028 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5586548 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_46_TO_39_0087_ULT_sa___05FETC___05F_d10095) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5726761 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5726737 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_46_TO_39_0087_ULT___05FETC___05F_d10097 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5726678 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5726761 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5726737 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_46_TO_39_0087_ULT___05FETC___05F_d10097 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5726678 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_62_TO_55_886_ULT_sa_g_ETC___05F_d6901) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5585764 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5585740 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_62_TO_55_886_ULT_s_ETC___05F_d6903 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5585681 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5585764 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5585740 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_62_TO_55_886_ULT_s_ETC___05F_d6903 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5585681 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_62_TO_55_970_ULT_sa_g_ETC___05F_d9978) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5725894 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5725870 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_62_TO_55_970_ULT_s_ETC___05F_d9980 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5725811 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5725894 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5725870 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_62_TO_55_970_ULT_s_ETC___05F_d9980 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5725811 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_78_TO_71_760_ULT_sa_g_ETC___05F_d6775) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5584897 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5584873 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_78_TO_71_760_ULT_s_ETC___05F_d6777 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5584814 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5584897 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5584873 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_78_TO_71_760_ULT_s_ETC___05F_d6777 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5584814 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_78_TO_71_852_ULT_sa_g_ETC___05F_d9860) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5725027 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5725003 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_78_TO_71_852_ULT_s_ETC___05F_d9862 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5724944 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5725027 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5725003 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_78_TO_71_852_ULT_s_ETC___05F_d9862 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5724944 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_94_TO_87_635_ULT_sa_g_ETC___05F_d6650) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5584030 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5584006 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_94_TO_87_635_ULT_s_ETC___05F_d6652 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5583947 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5584030 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5584006 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_94_TO_87_635_ULT_s_ETC___05F_d6652 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5583947 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_94_TO_87_735_ULT_sa_g_ETC___05F_d9743) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5724160 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5724136 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_94_TO_87_735_ULT_s_ETC___05F_d9745 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5724077 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5724160 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5724136 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_94_TO_87_735_ULT_s_ETC___05F_d9745 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5724077 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_110_TO_103_509_ULT_sa_ETC___05F_d6524) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5583163 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5583139 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_110_TO_103_509_ULT_ETC___05F_d6526 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5583080 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5583163 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5583139 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_110_TO_103_509_ULT_ETC___05F_d6526 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5583080 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_110_TO_103_617_ULT_sa_ETC___05F_d9625) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5723293 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5723269 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_110_TO_103_617_ULT_ETC___05F_d9627 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5723210 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5723293 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5723269 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_110_TO_103_617_ULT_ETC___05F_d9627 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5723210 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_126_TO_119_384_ULT_sa_ETC___05F_d6399) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5582296 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5582272 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_126_TO_119_384_ULT_ETC___05F_d6401 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5582213 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5582296 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5582272 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_126_TO_119_384_ULT_ETC___05F_d6401 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5582213 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_126_TO_119_500_ULT_sa_ETC___05F_d9508) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5722426 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5722402 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_126_TO_119_500_ULT_ETC___05F_d9510 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5722343 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5722426 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5722402 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_126_TO_119_500_ULT_ETC___05F_d9510 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5722343 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_142_TO_135_258_ULT_sa_ETC___05F_d6273) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5581429 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5581405 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_142_TO_135_258_ULT_ETC___05F_d6275 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5581346 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5581429 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5581405 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_142_TO_135_258_ULT_ETC___05F_d6275 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5581346 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_142_TO_135_382_ULT_sa_ETC___05F_d9390) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5721559 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5721535 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_142_TO_135_382_ULT_ETC___05F_d9392 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5721476 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5721559 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5721535 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_142_TO_135_382_ULT_ETC___05F_d9392 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5721476 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_158_TO_151_133_ULT_sa_ETC___05F_d6148) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5580562 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5580538 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_158_TO_151_133_ULT_ETC___05F_d6150 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5580479 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5580562 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5580538 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_158_TO_151_133_ULT_ETC___05F_d6150 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5580479 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_158_TO_151_265_ULT_sa_ETC___05F_d9273) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5720692 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5720668 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_158_TO_151_265_ULT_ETC___05F_d9275 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5720609 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5720692 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5720668 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_158_TO_151_265_ULT_ETC___05F_d9275 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5720609 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_14_TO_7_262_ULT_sa_ge_ETC___05F_d7277) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5588365 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5588341 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_14_TO_7_262_ULT_sa_ETC___05F_d7279 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5588282 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5588365 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5588341 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_14_TO_7_262_ULT_sa_ETC___05F_d7279 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5588282 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_14_TO_7_0322_ULT_sa_g_ETC___05F_d10330) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5728495 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5728471 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_14_TO_7_0322_ULT_s_ETC___05F_d10332 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5728412 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5728495 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5728471 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_14_TO_7_0322_ULT_s_ETC___05F_d10332 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5728412 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.__VdlySet__mkTb_COP__DOT__cop__DOT__bram_aa__DOT__RAM__v0) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__RAM[vlSelfRef.__VdlyDim0__mkTb_COP__DOT__cop__DOT__bram_aa__DOT__RAM__v0] 
            = vlSelfRef.__VdlyVal__mkTb_COP__DOT__cop__DOT__bram_aa__DOT__RAM__v0;
    }
    if (vlSelfRef.__VdlySet__mkTb_COP__DOT__cop__DOT__bram_bb__DOT__RAM__v0) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__RAM[vlSelfRef.__VdlyDim0__mkTb_COP__DOT__cop__DOT__bram_bb__DOT__RAM__v0] 
            = vlSelfRef.__VdlyVal__mkTb_COP__DOT__cop__DOT__bram_bb__DOT__RAM__v0;
    }
    if (vlSelfRef.__VdlySet__mkTb_COP__DOT__cop__DOT__bram_pp__DOT__RAM__v0) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__RAM[vlSelfRef.__VdlyDim0__mkTb_COP__DOT__cop__DOT__bram_pp__DOT__RAM__v0] 
            = vlSelfRef.__VdlyVal__mkTb_COP__DOT__cop__DOT__bram_pp__DOT__RAM__v0;
    }
    if (vlSelfRef.__VdlySet__mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__RAM__v0) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__RAM[vlSelfRef.__VdlyDim0__mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__RAM__v0] 
            = vlSelfRef.__VdlyVal__mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__RAM__v0;
    }
    if (vlSelfRef.__VdlySet__mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__RAM__v0) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__RAM[vlSelfRef.__VdlyDim0__mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__RAM__v0] 
            = vlSelfRef.__VdlyVal__mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__RAM__v0;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__result_data) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__result_data));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__result_data) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__result_data)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__result_data) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__result_data))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__result_data) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__result_data)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__result_data) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__result_data))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__result_data) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__result_data));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36510 
        = ((0U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_2 
        = ((0U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36225 
        = ((0U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36509 
        = ((1U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_3 
        = ((1U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36223 
        = ((1U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36499 
        = ((0xaU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_4 
        = ((0xaU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36214 
        = ((0xaU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36399 
        = ((0x64U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_5 
        = ((0x64U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36114 
        = ((0x64U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36398 
        = ((0x65U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_6 
        = ((0x65U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36112 
        = ((0x65U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36397 
        = ((0x66U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_7 
        = ((0x66U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36111 
        = ((0x66U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36396 
        = ((0x67U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_8 
        = ((0x67U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36110 
        = ((0x67U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36395 
        = ((0x68U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_9 
        = ((0x68U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36109 
        = ((0x68U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36394 
        = ((0x69U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_10 
        = ((0x69U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36108 
        = ((0x69U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36392 
        = ((0x6aU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_11 
        = ((0x6aU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36107 
        = ((0x6aU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36391 
        = ((0x6bU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_12 
        = ((0x6bU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36106 
        = ((0x6bU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36390 
        = ((0x6cU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_13 
        = ((0x6cU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36105 
        = ((0x6cU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36389 
        = ((0x6dU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_14 
        = ((0x6dU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36104 
        = ((0x6dU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36498 
        = ((0xbU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_15 
        = ((0xbU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36212 
        = ((0xbU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36388 
        = ((0x6eU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_16 
        = ((0x6eU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36103 
        = ((0x6eU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36387 
        = ((0x6fU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_17 
        = ((0x6fU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36101 
        = ((0x6fU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36386 
        = ((0x70U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_18 
        = ((0x70U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36100 
        = ((0x70U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36385 
        = ((0x71U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_19 
        = ((0x71U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36099 
        = ((0x71U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36384 
        = ((0x72U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_20 
        = ((0x72U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36098 
        = ((0x72U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36383 
        = ((0x73U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_21 
        = ((0x73U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36097 
        = ((0x73U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36381 
        = ((0x74U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_22 
        = ((0x74U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36096 
        = ((0x74U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36380 
        = ((0x75U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_23 
        = ((0x75U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36095 
        = ((0x75U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36379 
        = ((0x76U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_24 
        = ((0x76U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36094 
        = ((0x76U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36378 
        = ((0x77U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_25 
        = ((0x77U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36093 
        = ((0x77U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36497 
        = ((0xcU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_26 
        = ((0xcU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36211 
        = ((0xcU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36377 
        = ((0x78U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_27 
        = ((0x78U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36092 
        = ((0x78U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36376 
        = ((0x79U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_28 
        = ((0x79U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36090 
        = ((0x79U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36375 
        = ((0x7aU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_29 
        = ((0x7aU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36089 
        = ((0x7aU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36374 
        = ((0x7bU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_30 
        = ((0x7bU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36088 
        = ((0x7bU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36373 
        = ((0x7cU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31 
        = ((0x7cU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36087 
        = ((0x7cU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36372 
        = ((0x7dU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_32 
        = ((0x7dU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36086 
        = ((0x7dU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36369 
        = ((0x7eU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_33 
        = ((0x7eU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36085 
        = ((0x7eU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36368 
        = ((0x7fU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_34 
        = ((0x7fU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36084 
        = ((0x7fU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36367 
        = ((0x80U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35 
        = ((0x80U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36083 
        = ((0x80U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36366 
        = ((0x81U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36 
        = ((0x81U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36082 
        = ((0x81U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36496 
        = ((0xdU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_37 
        = ((0xdU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36210 
        = ((0xdU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36365 
        = ((0x82U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_38 
        = ((0x82U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36081 
        = ((0x82U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36364 
        = ((0x83U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_39 
        = ((0x83U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36079 
        = ((0x83U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36363 
        = ((0x84U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_40 
        = ((0x84U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36078 
        = ((0x84U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36362 
        = ((0x85U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_41 
        = ((0x85U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36077 
        = ((0x85U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36361 
        = ((0x86U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_42 
        = ((0x86U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36076 
        = ((0x86U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36360 
        = ((0x87U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_43 
        = ((0x87U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36075 
        = ((0x87U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36358 
        = ((0x88U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_44 
        = ((0x88U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36074 
        = ((0x88U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36357 
        = ((0x89U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_45 
        = ((0x89U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36073 
        = ((0x89U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36356 
        = ((0x8aU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_46 
        = ((0x8aU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36072 
        = ((0x8aU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36355 
        = ((0x8bU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_47 
        = ((0x8bU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36071 
        = ((0x8bU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36495 
        = ((0xeU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_48 
        = ((0xeU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36209 
        = ((0xeU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36354 
        = ((0x8cU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_49 
        = ((0x8cU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36070 
        = ((0x8cU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36353 
        = ((0x8dU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_50 
        = ((0x8dU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36068 
        = ((0x8dU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36352 
        = ((0x8eU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_51 
        = ((0x8eU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36067 
        = ((0x8eU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36351 
        = ((0x8fU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_52 
        = ((0x8fU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36066 
        = ((0x8fU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36350 
        = ((0x90U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_53 
        = ((0x90U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36065 
        = ((0x90U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36349 
        = ((0x91U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_54 
        = ((0x91U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36064 
        = ((0x91U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36347 
        = ((0x92U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_55 
        = ((0x92U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36063 
        = ((0x92U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36346 
        = ((0x93U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_56 
        = ((0x93U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36062 
        = ((0x93U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36345 
        = ((0x94U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_57 
        = ((0x94U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36061 
        = ((0x94U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36344 
        = ((0x95U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_58 
        = ((0x95U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36060 
        = ((0x95U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36494 
        = ((0xfU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_59 
        = ((0xfU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36208 
        = ((0xfU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36343 
        = ((0x96U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_60 
        = ((0x96U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36059 
        = ((0x96U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36342 
        = ((0x97U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_61 
        = ((0x97U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36057 
        = ((0x97U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36341 
        = ((0x98U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_62 
        = ((0x98U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36056 
        = ((0x98U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36340 
        = ((0x99U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_63 
        = ((0x99U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36055 
        = ((0x99U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36339 
        = ((0x9aU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_64 
        = ((0x9aU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36054 
        = ((0x9aU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36338 
        = ((0x9bU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_65 
        = ((0x9bU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36053 
        = ((0x9bU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36336 
        = ((0x9cU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_66 
        = ((0x9cU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36052 
        = ((0x9cU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36335 
        = ((0x9dU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_67 
        = ((0x9dU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36051 
        = ((0x9dU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36334 
        = ((0x9eU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_68 
        = ((0x9eU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36050 
        = ((0x9eU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36333 
        = ((0x9fU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_69 
        = ((0x9fU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36049 
        = ((0x9fU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36492 
        = ((0x10U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_70 
        = ((0x10U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36207 
        = ((0x10U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36332 
        = ((0xa0U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_71 
        = ((0xa0U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36048 
        = ((0xa0U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36331 
        = ((0xa1U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_72 
        = ((0xa1U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36046 
        = ((0xa1U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36330 
        = ((0xa2U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_73 
        = ((0xa2U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36045 
        = ((0xa2U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36329 
        = ((0xa3U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_74 
        = ((0xa3U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36044 
        = ((0xa3U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36328 
        = ((0xa4U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_75 
        = ((0xa4U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36043 
        = ((0xa4U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36327 
        = ((0xa5U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_76 
        = ((0xa5U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36042 
        = ((0xa5U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36325 
        = ((0xa6U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_77 
        = ((0xa6U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36041 
        = ((0xa6U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36324 
        = ((0xa7U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_78 
        = ((0xa7U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36040 
        = ((0xa7U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36323 
        = ((0xa8U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_79 
        = ((0xa8U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36039 
        = ((0xa8U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36322 
        = ((0xa9U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_80 
        = ((0xa9U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36038 
        = ((0xa9U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36491 
        = ((0x11U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_81 
        = ((0x11U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36206 
        = ((0x11U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36321 
        = ((0xaaU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_82 
        = ((0xaaU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36037 
        = ((0xaaU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36320 
        = ((0xabU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_83 
        = ((0xabU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36034 
        = ((0xabU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36319 
        = ((0xacU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_84 
        = ((0xacU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36033 
        = ((0xacU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36318 
        = ((0xadU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_85 
        = ((0xadU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36032 
        = ((0xadU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36317 
        = ((0xaeU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_86 
        = ((0xaeU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36031 
        = ((0xaeU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36316 
        = ((0xafU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_87 
        = ((0xafU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36030 
        = ((0xafU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36314 
        = ((0xb0U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_88 
        = ((0xb0U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36029 
        = ((0xb0U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36313 
        = ((0xb1U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_89 
        = ((0xb1U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36028 
        = ((0xb1U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36312 
        = ((0xb2U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_90 
        = ((0xb2U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36027 
        = ((0xb2U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36311 
        = ((0xb3U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_91 
        = ((0xb3U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36026 
        = ((0xb3U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36490 
        = ((0x12U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_92 
        = ((0x12U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36205 
        = ((0x12U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36310 
        = ((0xb4U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_93 
        = ((0xb4U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36025 
        = ((0xb4U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36309 
        = ((0xb5U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_94 
        = ((0xb5U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36023 
        = ((0xb5U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36308 
        = ((0xb6U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_95 
        = ((0xb6U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36022 
        = ((0xb6U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36307 
        = ((0xb7U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_96 
        = ((0xb7U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36021 
        = ((0xb7U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36306 
        = ((0xb8U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_97 
        = ((0xb8U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36020 
        = ((0xb8U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36305 
        = ((0xb9U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_98 
        = ((0xb9U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36019 
        = ((0xb9U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36303 
        = ((0xbaU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_99 
        = ((0xbaU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36018 
        = ((0xbaU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36302 
        = ((0xbbU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_100 
        = ((0xbbU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36017 
        = ((0xbbU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36301 
        = ((0xbcU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_101 
        = ((0xbcU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36016 
        = ((0xbcU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36300 
        = ((0xbdU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_102 
        = ((0xbdU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36015 
        = ((0xbdU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36489 
        = ((0x13U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_103 
        = ((0x13U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36204 
        = ((0x13U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36299 
        = ((0xbeU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_104 
        = ((0xbeU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36014 
        = ((0xbeU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36298 
        = ((0xbfU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_105 
        = ((0xbfU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36012 
        = ((0xbfU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36297 
        = ((0xc0U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_106 
        = ((0xc0U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36011 
        = ((0xc0U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36296 
        = ((0xc1U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_107 
        = ((0xc1U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36010 
        = ((0xc1U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36295 
        = ((0xc2U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_108 
        = ((0xc2U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36009 
        = ((0xc2U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36294 
        = ((0xc3U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_109 
        = ((0xc3U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36008 
        = ((0xc3U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36292 
        = ((0xc4U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_110 
        = ((0xc4U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36007 
        = ((0xc4U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36291 
        = ((0xc5U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_111 
        = ((0xc5U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36006 
        = ((0xc5U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36290 
        = ((0xc6U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_112 
        = ((0xc6U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36005 
        = ((0xc6U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36289 
        = ((0xc7U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_113 
        = ((0xc7U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36004 
        = ((0xc7U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36508 
        = ((2U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_114 
        = ((2U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36222 
        = ((2U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36488 
        = ((0x14U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_115 
        = ((0x14U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36203 
        = ((0x14U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36288 
        = ((0xc8U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_116 
        = ((0xc8U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36003 
        = ((0xc8U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36287 
        = ((0xc9U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_117 
        = ((0xc9U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36001 
        = ((0xc9U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36286 
        = ((0xcaU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_118 
        = ((0xcaU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36000 
        = ((0xcaU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36285 
        = ((0xcbU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_119 
        = ((0xcbU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35999 
        = ((0xcbU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36284 
        = ((0xccU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_120 
        = ((0xccU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35998 
        = ((0xccU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36283 
        = ((0xcdU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_121 
        = ((0xcdU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35997 
        = ((0xcdU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36281 
        = ((0xceU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_122 
        = ((0xceU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35996 
        = ((0xceU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36280 
        = ((0xcfU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_123 
        = ((0xcfU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35995 
        = ((0xcfU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36279 
        = ((0xd0U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_124 
        = ((0xd0U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35994 
        = ((0xd0U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36278 
        = ((0xd1U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_125 
        = ((0xd1U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35993 
        = ((0xd1U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36487 
        = ((0x15U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_126 
        = ((0x15U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36201 
        = ((0x15U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36277 
        = ((0xd2U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_127 
        = ((0xd2U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35992 
        = ((0xd2U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36276 
        = ((0xd3U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_128 
        = ((0xd3U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35990 
        = ((0xd3U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36275 
        = ((0xd4U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_129 
        = ((0xd4U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35989 
        = ((0xd4U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36274 
        = ((0xd5U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_130 
        = ((0xd5U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35988 
        = ((0xd5U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36273 
        = ((0xd6U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_131 
        = ((0xd6U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35987 
        = ((0xd6U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36272 
        = ((0xd7U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_132 
        = ((0xd7U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35986 
        = ((0xd7U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36270 
        = ((0xd8U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_133 
        = ((0xd8U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35985 
        = ((0xd8U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36269 
        = ((0xd9U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_134 
        = ((0xd9U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35984 
        = ((0xd9U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36268 
        = ((0xdaU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_135 
        = ((0xdaU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35983 
        = ((0xdaU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36267 
        = ((0xdbU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_136 
        = ((0xdbU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35982 
        = ((0xdbU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36486 
        = ((0x16U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_137 
        = ((0x16U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36200 
        = ((0x16U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36266 
        = ((0xdcU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_138 
        = ((0xdcU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35981 
        = ((0xdcU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36265 
        = ((0xddU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_139 
        = ((0xddU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35979 
        = ((0xddU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36264 
        = ((0xdeU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_140 
        = ((0xdeU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35978 
        = ((0xdeU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36263 
        = ((0xdfU == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_141 
        = ((0xdfU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35977 
        = ((0xdfU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36262 
        = ((0xe0U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_142 
        = ((0xe0U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35976 
        = ((0xe0U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36261 
        = ((0xe1U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_143 
        = ((0xe1U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35975 
        = ((0xe1U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36258 
        = ((0xe2U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_144 
        = ((0xe2U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35974 
        = ((0xe2U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36257 
        = ((0xe3U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_145 
        = ((0xe3U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35973 
        = ((0xe3U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36256 
        = ((0xe4U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_146 
        = ((0xe4U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35972 
        = ((0xe4U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36255 
        = ((0xe5U == (0xffU & ((IData)(0x4aU) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x4aU) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh39268))));
}
