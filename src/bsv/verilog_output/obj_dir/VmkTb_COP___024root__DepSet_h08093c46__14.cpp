// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__17(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__17\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed))) {
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
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_isReady) 
                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2_RDY_requestB___05F39_AND_brams_3_RDY_reque_ETC___05F_d391) 
                    & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__state)) 
                       & ((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__cycleCount)) 
                          & (4U >= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__cycleCount))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__MUX_state__024write_1___05FPSEL_1 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_isReady) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_isReady) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_isReady) 
                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2_RDY_requestB___05F39_AND_brams_3_RDY_reque_ETC___05F_d391) 
                    & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__state)) 
                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__allReady))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2_RDY_requestB___05F39_AND_brams_3_RDY_reque_ETC___05F_d391) 
                    & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__state)) 
                       & ((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount)) 
                          & (4U >= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__MUX_state__024write_1___05FPSEL_1 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2_RDY_requestB___05F39_AND_brams_3_RDY_reque_ETC___05F_d391) 
                    & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__state)) 
                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__allReady))))));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984 
        = (0x3ffffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter) 
                        << 8U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__cycleCount) 
                                  << 6U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh24984 
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31945 
        = ((0U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_2 
        = ((0U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31660 
        = ((0U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31944 
        = ((1U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_3 
        = ((1U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31659 
        = ((1U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31934 
        = ((0xaU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_4 
        = ((0xaU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31649 
        = ((0xaU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31834 
        = ((0x64U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_5 
        = ((0x64U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31549 
        = ((0x64U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31833 
        = ((0x65U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_6 
        = ((0x65U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31548 
        = ((0x65U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31832 
        = ((0x66U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_7 
        = ((0x66U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31547 
        = ((0x66U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31831 
        = ((0x67U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_8 
        = ((0x67U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31546 
        = ((0x67U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31830 
        = ((0x68U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_9 
        = ((0x68U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31545 
        = ((0x68U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31829 
        = ((0x69U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_10 
        = ((0x69U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31543 
        = ((0x69U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31828 
        = ((0x6aU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_11 
        = ((0x6aU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31542 
        = ((0x6aU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31827 
        = ((0x6bU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_12 
        = ((0x6bU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31541 
        = ((0x6bU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31826 
        = ((0x6cU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_13 
        = ((0x6cU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31540 
        = ((0x6cU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31825 
        = ((0x6dU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_14 
        = ((0x6dU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31539 
        = ((0x6dU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31933 
        = ((0xbU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_15 
        = ((0xbU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31648 
        = ((0xbU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31823 
        = ((0x6eU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_16 
        = ((0x6eU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31538 
        = ((0x6eU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31822 
        = ((0x6fU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_17 
        = ((0x6fU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31537 
        = ((0x6fU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31821 
        = ((0x70U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_18 
        = ((0x70U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31536 
        = ((0x70U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31820 
        = ((0x71U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_19 
        = ((0x71U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31535 
        = ((0x71U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31819 
        = ((0x72U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_20 
        = ((0x72U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31534 
        = ((0x72U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31818 
        = ((0x73U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_21 
        = ((0x73U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31532 
        = ((0x73U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31817 
        = ((0x74U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_22 
        = ((0x74U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31531 
        = ((0x74U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31816 
        = ((0x75U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_23 
        = ((0x75U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31530 
        = ((0x75U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31815 
        = ((0x76U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_24 
        = ((0x76U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31529 
        = ((0x76U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31814 
        = ((0x77U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_25 
        = ((0x77U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31528 
        = ((0x77U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31932 
        = ((0xcU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_26 
        = ((0xcU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31647 
        = ((0xcU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31812 
        = ((0x78U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_27 
        = ((0x78U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31527 
        = ((0x78U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31811 
        = ((0x79U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_28 
        = ((0x79U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31526 
        = ((0x79U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31810 
        = ((0x7aU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_29 
        = ((0x7aU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31525 
        = ((0x7aU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31809 
        = ((0x7bU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_30 
        = ((0x7bU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31524 
        = ((0x7bU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31808 
        = ((0x7cU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31 
        = ((0x7cU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31523 
        = ((0x7cU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31807 
        = ((0x7dU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_32 
        = ((0x7dU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31521 
        = ((0x7dU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31806 
        = ((0x7eU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_33 
        = ((0x7eU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31520 
        = ((0x7eU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31805 
        = ((0x7fU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_34 
        = ((0x7fU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31519 
        = ((0x7fU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31804 
        = ((0x80U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_35 
        = ((0x80U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31518 
        = ((0x80U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31803 
        = ((0x81U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_36 
        = ((0x81U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31517 
        = ((0x81U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31931 
        = ((0xdU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_37 
        = ((0xdU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31646 
        = ((0xdU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31800 
        = ((0x82U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_38 
        = ((0x82U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31516 
        = ((0x82U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31799 
        = ((0x83U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_39 
        = ((0x83U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31515 
        = ((0x83U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31798 
        = ((0x84U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_40 
        = ((0x84U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31514 
        = ((0x84U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31797 
        = ((0x85U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_41 
        = ((0x85U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31513 
        = ((0x85U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31796 
        = ((0x86U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_42 
        = ((0x86U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31512 
        = ((0x86U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31795 
        = ((0x87U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_43 
        = ((0x87U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31510 
        = ((0x87U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31794 
        = ((0x88U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_44 
        = ((0x88U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31509 
        = ((0x88U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31793 
        = ((0x89U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_45 
        = ((0x89U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31508 
        = ((0x89U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31792 
        = ((0x8aU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_46 
        = ((0x8aU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31507 
        = ((0x8aU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31791 
        = ((0x8bU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_47 
        = ((0x8bU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31506 
        = ((0x8bU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31930 
        = ((0xeU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_48 
        = ((0xeU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31645 
        = ((0xeU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31789 
        = ((0x8cU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_49 
        = ((0x8cU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31505 
        = ((0x8cU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31788 
        = ((0x8dU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_50 
        = ((0x8dU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31504 
        = ((0x8dU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31787 
        = ((0x8eU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_51 
        = ((0x8eU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31503 
        = ((0x8eU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31786 
        = ((0x8fU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_52 
        = ((0x8fU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31502 
        = ((0x8fU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31785 
        = ((0x90U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_53 
        = ((0x90U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31501 
        = ((0x90U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31784 
        = ((0x91U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_54 
        = ((0x91U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31499 
        = ((0x91U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31783 
        = ((0x92U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_55 
        = ((0x92U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31498 
        = ((0x92U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31782 
        = ((0x93U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_56 
        = ((0x93U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31497 
        = ((0x93U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31781 
        = ((0x94U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_57 
        = ((0x94U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31496 
        = ((0x94U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31780 
        = ((0x95U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_58 
        = ((0x95U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31495 
        = ((0x95U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31929 
        = ((0xfU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_59 
        = ((0xfU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31643 
        = ((0xfU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31778 
        = ((0x96U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_60 
        = ((0x96U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31494 
        = ((0x96U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31777 
        = ((0x97U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_61 
        = ((0x97U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31493 
        = ((0x97U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31776 
        = ((0x98U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_62 
        = ((0x98U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31492 
        = ((0x98U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31775 
        = ((0x99U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_63 
        = ((0x99U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31491 
        = ((0x99U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31774 
        = ((0x9aU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_64 
        = ((0x9aU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31490 
        = ((0x9aU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31773 
        = ((0x9bU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_65 
        = ((0x9bU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31488 
        = ((0x9bU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31772 
        = ((0x9cU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_66 
        = ((0x9cU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31487 
        = ((0x9cU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31771 
        = ((0x9dU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_67 
        = ((0x9dU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31486 
        = ((0x9dU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31770 
        = ((0x9eU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_68 
        = ((0x9eU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31485 
        = ((0x9eU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31769 
        = ((0x9fU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_69 
        = ((0x9fU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31484 
        = ((0x9fU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31928 
        = ((0x10U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_70 
        = ((0x10U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31642 
        = ((0x10U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31767 
        = ((0xa0U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_71 
        = ((0xa0U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31483 
        = ((0xa0U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31766 
        = ((0xa1U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_72 
        = ((0xa1U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31482 
        = ((0xa1U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31765 
        = ((0xa2U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_73 
        = ((0xa2U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31481 
        = ((0xa2U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31764 
        = ((0xa3U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_74 
        = ((0xa3U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31480 
        = ((0xa3U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31763 
        = ((0xa4U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_75 
        = ((0xa4U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31479 
        = ((0xa4U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31762 
        = ((0xa5U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_76 
        = ((0xa5U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31477 
        = ((0xa5U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31761 
        = ((0xa6U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_77 
        = ((0xa6U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31476 
        = ((0xa6U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31760 
        = ((0xa7U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_78 
        = ((0xa7U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31475 
        = ((0xa7U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31759 
        = ((0xa8U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_79 
        = ((0xa8U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31474 
        = ((0xa8U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31758 
        = ((0xa9U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_80 
        = ((0xa9U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31473 
        = ((0xa9U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31927 
        = ((0x11U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_81 
        = ((0x11U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31641 
        = ((0x11U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31756 
        = ((0xaaU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_82 
        = ((0xaaU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31472 
        = ((0xaaU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31755 
        = ((0xabU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_83 
        = ((0xabU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31471 
        = ((0xabU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31754 
        = ((0xacU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_84 
        = ((0xacU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31470 
        = ((0xacU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31753 
        = ((0xadU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_85 
        = ((0xadU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31469 
        = ((0xadU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31752 
        = ((0xaeU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_86 
        = ((0xaeU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31468 
        = ((0xaeU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31751 
        = ((0xafU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_87 
        = ((0xafU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31465 
        = ((0xafU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31750 
        = ((0xb0U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_88 
        = ((0xb0U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31464 
        = ((0xb0U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31749 
        = ((0xb1U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_89 
        = ((0xb1U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31463 
        = ((0xb1U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31748 
        = ((0xb2U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_90 
        = ((0xb2U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31462 
        = ((0xb2U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31747 
        = ((0xb3U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_91 
        = ((0xb3U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31461 
        = ((0xb3U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31926 
        = ((0x12U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_92 
        = ((0x12U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31640 
        = ((0x12U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31745 
        = ((0xb4U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_93 
        = ((0xb4U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31460 
        = ((0xb4U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31744 
        = ((0xb5U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_94 
        = ((0xb5U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31459 
        = ((0xb5U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31743 
        = ((0xb6U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_95 
        = ((0xb6U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31458 
        = ((0xb6U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31742 
        = ((0xb7U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_96 
        = ((0xb7U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31457 
        = ((0xb7U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31741 
        = ((0xb8U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_97 
        = ((0xb8U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31456 
        = ((0xb8U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31740 
        = ((0xb9U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_98 
        = ((0xb9U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31454 
        = ((0xb9U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31739 
        = ((0xbaU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_99 
        = ((0xbaU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31453 
        = ((0xbaU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31738 
        = ((0xbbU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_100 
        = ((0xbbU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31452 
        = ((0xbbU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31737 
        = ((0xbcU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_101 
        = ((0xbcU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31451 
        = ((0xbcU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31736 
        = ((0xbdU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_102 
        = ((0xbdU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31450 
        = ((0xbdU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31925 
        = ((0x13U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_103 
        = ((0x13U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31639 
        = ((0x13U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31734 
        = ((0xbeU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_104 
        = ((0xbeU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31449 
        = ((0xbeU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31733 
        = ((0xbfU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_105 
        = ((0xbfU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31448 
        = ((0xbfU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31732 
        = ((0xc0U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_106 
        = ((0xc0U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31447 
        = ((0xc0U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31731 
        = ((0xc1U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_107 
        = ((0xc1U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31446 
        = ((0xc1U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31730 
        = ((0xc2U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_108 
        = ((0xc2U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31445 
        = ((0xc2U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31729 
        = ((0xc3U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_109 
        = ((0xc3U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31443 
        = ((0xc3U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31728 
        = ((0xc4U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_110 
        = ((0xc4U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31442 
        = ((0xc4U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31727 
        = ((0xc5U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_111 
        = ((0xc5U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31441 
        = ((0xc5U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31726 
        = ((0xc6U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_112 
        = ((0xc6U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31440 
        = ((0xc6U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31725 
        = ((0xc7U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_113 
        = ((0xc7U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31439 
        = ((0xc7U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31943 
        = ((2U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_114 
        = ((2U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31658 
        = ((2U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31923 
        = ((0x14U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_115 
        = ((0x14U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31638 
        = ((0x14U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31723 
        = ((0xc8U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_116 
        = ((0xc8U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31438 
        = ((0xc8U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31722 
        = ((0xc9U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_117 
        = ((0xc9U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31437 
        = ((0xc9U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31721 
        = ((0xcaU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_118 
        = ((0xcaU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31436 
        = ((0xcaU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31720 
        = ((0xcbU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_119 
        = ((0xcbU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31435 
        = ((0xcbU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31719 
        = ((0xccU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_120 
        = ((0xccU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31434 
        = ((0xccU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31718 
        = ((0xcdU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_121 
        = ((0xcdU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31432 
        = ((0xcdU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31717 
        = ((0xceU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_122 
        = ((0xceU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31431 
        = ((0xceU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31716 
        = ((0xcfU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_123 
        = ((0xcfU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31430 
        = ((0xcfU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31715 
        = ((0xd0U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_124 
        = ((0xd0U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31429 
        = ((0xd0U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31714 
        = ((0xd1U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_125 
        = ((0xd1U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31428 
        = ((0xd1U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31922 
        = ((0x15U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_126 
        = ((0x15U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31637 
        = ((0x15U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31712 
        = ((0xd2U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_127 
        = ((0xd2U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31427 
        = ((0xd2U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31711 
        = ((0xd3U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_128 
        = ((0xd3U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31426 
        = ((0xd3U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31710 
        = ((0xd4U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_129 
        = ((0xd4U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31425 
        = ((0xd4U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31709 
        = ((0xd5U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_130 
        = ((0xd5U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31424 
        = ((0xd5U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31708 
        = ((0xd6U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_131 
        = ((0xd6U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31423 
        = ((0xd6U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31707 
        = ((0xd7U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_132 
        = ((0xd7U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31421 
        = ((0xd7U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31706 
        = ((0xd8U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_133 
        = ((0xd8U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31420 
        = ((0xd8U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31705 
        = ((0xd9U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_134 
        = ((0xd9U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31419 
        = ((0xd9U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31704 
        = ((0xdaU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_135 
        = ((0xdaU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31418 
        = ((0xdaU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31703 
        = ((0xdbU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_136 
        = ((0xdbU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31417 
        = ((0xdbU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31921 
        = ((0x16U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_137 
        = ((0x16U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31636 
        = ((0x16U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31701 
        = ((0xdcU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_138 
        = ((0xdcU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31416 
        = ((0xdcU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31700 
        = ((0xddU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_139 
        = ((0xddU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31415 
        = ((0xddU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31699 
        = ((0xdeU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_140 
        = ((0xdeU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31414 
        = ((0xdeU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31698 
        = ((0xdfU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_141 
        = ((0xdfU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31413 
        = ((0xdfU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31697 
        = ((0xe0U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_142 
        = ((0xe0U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31412 
        = ((0xe0U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31696 
        = ((0xe1U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_143 
        = ((0xe1U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31410 
        = ((0xe1U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31695 
        = ((0xe2U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_144 
        = ((0xe2U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31409 
        = ((0xe2U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31694 
        = ((0xe3U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_145 
        = ((0xe3U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31408 
        = ((0xe3U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31693 
        = ((0xe4U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_146 
        = ((0xe4U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31407 
        = ((0xe4U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31692 
        = ((0xe5U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_147 
        = ((0xe5U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31406 
        = ((0xe5U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31920 
        = ((0x17U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_148 
        = ((0x17U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31635 
        = ((0x17U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31689 
        = ((0xe6U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_149 
        = ((0xe6U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31405 
        = ((0xe6U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31688 
        = ((0xe7U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_150 
        = ((0xe7U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31404 
        = ((0xe7U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31687 
        = ((0xe8U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_151 
        = ((0xe8U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31403 
        = ((0xe8U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31686 
        = ((0xe9U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_152 
        = ((0xe9U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31402 
        = ((0xe9U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31685 
        = ((0xeaU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_153 
        = ((0xeaU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31401 
        = ((0xeaU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31684 
        = ((0xebU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_154 
        = ((0xebU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31399 
        = ((0xebU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31683 
        = ((0xecU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_155 
        = ((0xecU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31398 
        = ((0xecU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31682 
        = ((0xedU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_156 
        = ((0xedU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31397 
        = ((0xedU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31681 
        = ((0xeeU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_157 
        = ((0xeeU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31396 
        = ((0xeeU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31680 
        = ((0xefU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_158 
        = ((0xefU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31395 
        = ((0xefU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31919 
        = ((0x18U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_159 
        = ((0x18U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31634 
        = ((0x18U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31678 
        = ((0xf0U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_160 
        = ((0xf0U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31394 
        = ((0xf0U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31677 
        = ((0xf1U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_161 
        = ((0xf1U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31393 
        = ((0xf1U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31676 
        = ((0xf2U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_162 
        = ((0xf2U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31392 
        = ((0xf2U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31675 
        = ((0xf3U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_163 
        = ((0xf3U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31391 
        = ((0xf3U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31674 
        = ((0xf4U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_164 
        = ((0xf4U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31390 
        = ((0xf4U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31673 
        = ((0xf5U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_165 
        = ((0xf5U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31388 
        = ((0xf5U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31672 
        = ((0xf6U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_166 
        = ((0xf6U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31387 
        = ((0xf6U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31671 
        = ((0xf7U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_167 
        = ((0xf7U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31386 
        = ((0xf7U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31670 
        = ((0xf8U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_168 
        = ((0xf8U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31385 
        = ((0xf8U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31669 
        = ((0xf9U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_169 
        = ((0xf9U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31384 
        = ((0xf9U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31918 
        = ((0x19U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_170 
        = ((0x19U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31632 
        = ((0x19U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31667 
        = ((0xfaU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_171 
        = ((0xfaU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31383 
        = ((0xfaU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31666 
        = ((0xfbU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_172 
        = ((0xfbU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31382 
        = ((0xfbU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31665 
        = ((0xfcU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_173 
        = ((0xfcU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31381 
        = ((0xfcU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31664 
        = ((0xfdU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_174 
        = ((0xfdU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31380 
        = ((0xfdU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31663 
        = ((0xfeU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_175 
        = ((0xfeU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31379 
        = ((0xfeU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31662 
        = ((0xffU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_176 
        = ((0xffU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31377 
        = ((0xffU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31917 
        = ((0x1aU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_177 
        = ((0x1aU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31631 
        = ((0x1aU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31916 
        = ((0x1bU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_178 
        = ((0x1bU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31630 
        = ((0x1bU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31915 
        = ((0x1cU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_179 
        = ((0x1cU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31629 
        = ((0x1cU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31914 
        = ((0x1dU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_180 
        = ((0x1dU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31628 
        = ((0x1dU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31942 
        = ((3U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_181 
        = ((3U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31657 
        = ((3U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31911 
        = ((0x1eU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_182 
        = ((0x1eU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31627 
        = ((0x1eU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31910 
        = ((0x1fU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_183 
        = ((0x1fU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31626 
        = ((0x1fU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31909 
        = ((0x20U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_184 
        = ((0x20U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31625 
        = ((0x20U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31908 
        = ((0x21U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_185 
        = ((0x21U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31624 
        = ((0x21U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31907 
        = ((0x22U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_186 
        = ((0x22U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31623 
        = ((0x22U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31906 
        = ((0x23U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_187 
        = ((0x23U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31621 
        = ((0x23U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31905 
        = ((0x24U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_188 
        = ((0x24U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31620 
        = ((0x24U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31904 
        = ((0x25U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_189 
        = ((0x25U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31619 
        = ((0x25U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31903 
        = ((0x26U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_190 
        = ((0x26U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31618 
        = ((0x26U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31902 
        = ((0x27U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_191 
        = ((0x27U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31617 
        = ((0x27U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31941 
        = ((4U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_192 
        = ((4U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31656 
        = ((4U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31900 
        = ((0x28U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_193 
        = ((0x28U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31616 
        = ((0x28U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31899 
        = ((0x29U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_194 
        = ((0x29U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31615 
        = ((0x29U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31898 
        = ((0x2aU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_195 
        = ((0x2aU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31614 
        = ((0x2aU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31897 
        = ((0x2bU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_196 
        = ((0x2bU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31613 
        = ((0x2bU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31896 
        = ((0x2cU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_197 
        = ((0x2cU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31612 
        = ((0x2cU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31895 
        = ((0x2dU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_198 
        = ((0x2dU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31610 
        = ((0x2dU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31894 
        = ((0x2eU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_199 
        = ((0x2eU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31609 
        = ((0x2eU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31893 
        = ((0x2fU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_200 
        = ((0x2fU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31608 
        = ((0x2fU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31892 
        = ((0x30U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_201 
        = ((0x30U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31607 
        = ((0x30U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31891 
        = ((0x31U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_202 
        = ((0x31U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31606 
        = ((0x31U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31940 
        = ((5U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_203 
        = ((5U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31654 
        = ((5U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31889 
        = ((0x32U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_204 
        = ((0x32U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31605 
        = ((0x32U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31888 
        = ((0x33U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_205 
        = ((0x33U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31604 
        = ((0x33U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31887 
        = ((0x34U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_206 
        = ((0x34U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31603 
        = ((0x34U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31886 
        = ((0x35U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_207 
        = ((0x35U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31602 
        = ((0x35U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31885 
        = ((0x36U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_208 
        = ((0x36U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31601 
        = ((0x36U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31884 
        = ((0x37U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_209 
        = ((0x37U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31599 
        = ((0x37U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31883 
        = ((0x38U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_210 
        = ((0x38U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31598 
        = ((0x38U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31882 
        = ((0x39U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_211 
        = ((0x39U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31597 
        = ((0x39U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31881 
        = ((0x3aU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_212 
        = ((0x3aU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31596 
        = ((0x3aU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31880 
        = ((0x3bU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_213 
        = ((0x3bU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31595 
        = ((0x3bU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31939 
        = ((6U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_214 
        = ((6U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31653 
        = ((6U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31878 
        = ((0x3cU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_215 
        = ((0x3cU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31594 
        = ((0x3cU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31877 
        = ((0x3dU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_216 
        = ((0x3dU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31593 
        = ((0x3dU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31876 
        = ((0x3eU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_217 
        = ((0x3eU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31592 
        = ((0x3eU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31875 
        = ((0x3fU == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_218 
        = ((0x3fU == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31591 
        = ((0x3fU == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31874 
        = ((0x40U == (0xffU & ((IData)(0x42U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(0x42U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_219 
        = ((0x40U == (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732)) 
           & (0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_31590 
        = ((0x40U == (0xffU & ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))) 
           & (0x23fffU >= (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732))));
}
