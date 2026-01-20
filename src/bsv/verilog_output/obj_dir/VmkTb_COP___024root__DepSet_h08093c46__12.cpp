// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__15(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__15\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x178U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x170U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x168U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x160U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x158U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x150U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x148U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x140U] 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x138U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x130U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x128U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x120U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x118U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x110U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x108U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x100U] 
                                                      >> 0xfU))))))));
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                = (0x7fU & 0x2aU);
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x178U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x178U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x178U]);
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x170U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x170U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x170U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x168U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x168U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x168U]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x160U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x160U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x160U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x158U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x158U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x158U]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x150U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x150U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x150U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x148U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x148U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x148U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x140U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x140U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x140U]);
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x138U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x138U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x138U]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x130U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x130U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x130U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x128U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x128U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x128U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x120U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x120U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x120U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x118U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x118U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x118U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x110U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x110U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x110U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x108U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x108U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x108U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x100U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x100U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x100U]);
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf8U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf8U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf8U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf8U]);
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf0U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf0U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf0U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf0U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe8U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe8U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe8U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe8U]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe0U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe0U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe0U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe0U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd8U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd8U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd8U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd8U]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd0U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd0U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd0U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd0U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc8U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc8U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc8U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc8U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc0U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc0U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc0U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc0U]);
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb8U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb8U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb8U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb8U]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb0U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb0U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb0U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb0U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa8U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa8U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa8U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa8U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa0U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa0U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa0U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa0U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x98U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x98U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x98U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x98U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x90U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x90U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x90U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x90U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x88U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x88U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x88U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x88U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x80U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x80U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x80U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x80U]);
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x78U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x78U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x78U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x78U]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x70U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x70U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x70U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x70U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x68U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x68U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x68U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x68U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x60U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x60U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x60U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x60U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x58U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x58U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x58U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x58U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x50U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x50U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x50U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x50U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x48U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x48U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x48U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x48U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x40U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x40U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x40U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x40U]);
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x38U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x38U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x38U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x38U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x30U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x30U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x30U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x30U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x28U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x28U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x28U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x28U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x20U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x20U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x20U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x20U]);
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x18U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x18U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x18U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x18U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10U]);
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[8U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[8U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[8U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[8U]);
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0U]);
    }
    if (vlSelfRef.RST_N) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__cycle_count 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__cycle_count__024D_IN;
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__MUX_layer_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__layer_state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__layer_state__024D_IN;
        }
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage4 
            = ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage3)
                ? (1U | (0x1fffeU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage3))
                : 0U);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage4 
            = ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage3)
                ? (1U | (0x1fffeU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage3))
                : 0U);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage4 
            = ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage3)
                ? (1U | (0x1fffeU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage3))
                : 0U);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage4 
            = ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage3)
                ? (1U | (0x1fffeU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage3))
                : 0U);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage4 
            = ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage3)
                ? (1U | (0x1fffeU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage3))
                : 0U);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage4 
            = ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage3)
                ? (1U | (0x1fffeU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage3))
                : 0U);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage4 
            = ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage3)
                ? (1U | (0x1fffeU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage3))
                : 0U);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage4 
            = ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage3)
                ? (1U | (0x1fffeU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage3))
                : 0U);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage4 
            = ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage3)
                ? (1U | (0x1fffeU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage3))
                : 0U);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage4 
            = ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage3)
                ? (1U | (0x1fffeU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage3))
                : 0U);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage4 
            = ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage3)
                ? (1U | (0x1fffeU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage3))
                : 0U);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage4 
            = ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage3)
                ? (1U | (0x1fffeU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage3))
                : 0U);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage4 
            = ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage3)
                ? (1U | (0x1fffeU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage3))
                : 0U);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage4 
            = ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage3)
                ? (1U | (0x1fffeU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage3))
                : 0U);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage4 
            = ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage3)
                ? (1U | (0x1fffeU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage3))
                : 0U);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage4 
            = ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage3)
                ? (1U | (0x1fffeU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage3))
                : 0U);
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024EN_get_output) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__WILL_FIRE_RL_pipeline_stage3))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024EN_get_output)
                    ? 0xaaaaaU : (0x200000U | ((((~ (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                                                             >> 4U))) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)) 
                                                << 0x14U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                                                              >> 4U)))
                                                   ? 
                                                  ((0xffff0U 
                                                    & ((IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__conf 
                                                                >> 0x14U)) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)
                                                    ? 
                                                   ((0xffff0U 
                                                     & ((IData)(
                                                                (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__conf 
                                                                 >> 0x14U)) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__conf)))
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__a___05Fh2557) 
                                                    << 4U))))));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024EN_get_output) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__WILL_FIRE_RL_pipeline_stage3))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024EN_get_output)
                    ? 0xaaaaaU : (0x200000U | ((((~ (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                                                             >> 4U))) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)) 
                                                << 0x14U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                                                              >> 4U)))
                                                   ? 
                                                  ((0xffff0U 
                                                    & ((IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__conf 
                                                                >> 0x14U)) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)
                                                    ? 
                                                   ((0xffff0U 
                                                     & ((IData)(
                                                                (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__conf 
                                                                 >> 0x14U)) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__conf)))
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__a___05Fh2557) 
                                                    << 4U))))));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__024EN_get_output) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__WILL_FIRE_RL_pipeline_stage3))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__024EN_get_output)
                    ? 0xaaaaaU : (0x200000U | ((((~ (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                                                             >> 4U))) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)) 
                                                << 0x14U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                                                              >> 4U)))
                                                   ? 
                                                  ((0xffff0U 
                                                    & ((IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__conf 
                                                                >> 0x14U)) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)
                                                    ? 
                                                   ((0xffff0U 
                                                     & ((IData)(
                                                                (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__conf 
                                                                 >> 0x14U)) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__conf)))
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__a___05Fh2557) 
                                                    << 4U))))));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__024EN_get_output) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__WILL_FIRE_RL_pipeline_stage3))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__024EN_get_output)
                    ? 0xaaaaaU : (0x200000U | ((((~ (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                                                             >> 4U))) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)) 
                                                << 0x14U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                                                              >> 4U)))
                                                   ? 
                                                  ((0xffff0U 
                                                    & ((IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__conf 
                                                                >> 0x14U)) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)
                                                    ? 
                                                   ((0xffff0U 
                                                     & ((IData)(
                                                                (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__conf 
                                                                 >> 0x14U)) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__conf)))
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__a___05Fh2557) 
                                                    << 4U))))));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__024EN_get_output) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__WILL_FIRE_RL_pipeline_stage3))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__024EN_get_output)
                    ? 0xaaaaaU : (0x200000U | ((((~ (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                                                             >> 4U))) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)) 
                                                << 0x14U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                                                              >> 4U)))
                                                   ? 
                                                  ((0xffff0U 
                                                    & ((IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__conf 
                                                                >> 0x14U)) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)
                                                    ? 
                                                   ((0xffff0U 
                                                     & ((IData)(
                                                                (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__conf 
                                                                 >> 0x14U)) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__conf)))
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__a___05Fh2557) 
                                                    << 4U))))));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__024EN_get_output) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__WILL_FIRE_RL_pipeline_stage3))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__024EN_get_output)
                    ? 0xaaaaaU : (0x200000U | ((((~ (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                                                             >> 4U))) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)) 
                                                << 0x14U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                                                              >> 4U)))
                                                   ? 
                                                  ((0xffff0U 
                                                    & ((IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__conf 
                                                                >> 0x14U)) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)
                                                    ? 
                                                   ((0xffff0U 
                                                     & ((IData)(
                                                                (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__conf 
                                                                 >> 0x14U)) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__conf)))
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__a___05Fh2557) 
                                                    << 4U))))));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__024EN_get_output) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__WILL_FIRE_RL_pipeline_stage3))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__024EN_get_output)
                    ? 0xaaaaaU : (0x200000U | ((((~ (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                                                             >> 4U))) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)) 
                                                << 0x14U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                                                              >> 4U)))
                                                   ? 
                                                  ((0xffff0U 
                                                    & ((IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__conf 
                                                                >> 0x14U)) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)
                                                    ? 
                                                   ((0xffff0U 
                                                     & ((IData)(
                                                                (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__conf 
                                                                 >> 0x14U)) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__conf)))
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__a___05Fh2557) 
                                                    << 4U))))));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__024EN_get_output) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__WILL_FIRE_RL_pipeline_stage3))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__024EN_get_output)
                    ? 0xaaaaaU : (0x200000U | ((((~ (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                                                             >> 4U))) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)) 
                                                << 0x14U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                                                              >> 4U)))
                                                   ? 
                                                  ((0xffff0U 
                                                    & ((IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__conf 
                                                                >> 0x14U)) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)
                                                    ? 
                                                   ((0xffff0U 
                                                     & ((IData)(
                                                                (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__conf 
                                                                 >> 0x14U)) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__conf)))
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__a___05Fh2557) 
                                                    << 4U))))));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__024EN_get_output) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__WILL_FIRE_RL_pipeline_stage3))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__024EN_get_output)
                    ? 0xaaaaaU : (0x200000U | ((((~ (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                                                             >> 4U))) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)) 
                                                << 0x14U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                                                              >> 4U)))
                                                   ? 
                                                  ((0xffff0U 
                                                    & ((IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__conf 
                                                                >> 0x14U)) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)
                                                    ? 
                                                   ((0xffff0U 
                                                     & ((IData)(
                                                                (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__conf 
                                                                 >> 0x14U)) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__conf)))
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__a___05Fh2557) 
                                                    << 4U))))));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__024EN_get_output) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__WILL_FIRE_RL_pipeline_stage3))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__024EN_get_output)
                    ? 0xaaaaaU : (0x200000U | ((((~ (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                                                             >> 4U))) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)) 
                                                << 0x14U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                                                              >> 4U)))
                                                   ? 
                                                  ((0xffff0U 
                                                    & ((IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__conf 
                                                                >> 0x14U)) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)
                                                    ? 
                                                   ((0xffff0U 
                                                     & ((IData)(
                                                                (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__conf 
                                                                 >> 0x14U)) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__conf)))
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__a___05Fh2557) 
                                                    << 4U))))));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__024EN_get_output) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__WILL_FIRE_RL_pipeline_stage3))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__024EN_get_output)
                    ? 0xaaaaaU : (0x200000U | ((((~ (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                                                             >> 4U))) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)) 
                                                << 0x14U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                                                              >> 4U)))
                                                   ? 
                                                  ((0xffff0U 
                                                    & ((IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__conf 
                                                                >> 0x14U)) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)
                                                    ? 
                                                   ((0xffff0U 
                                                     & ((IData)(
                                                                (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__conf 
                                                                 >> 0x14U)) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__conf)))
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__a___05Fh2557) 
                                                    << 4U))))));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__024EN_get_output) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__WILL_FIRE_RL_pipeline_stage3))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__024EN_get_output)
                    ? 0xaaaaaU : (0x200000U | ((((~ (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                                                             >> 4U))) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)) 
                                                << 0x14U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                                                              >> 4U)))
                                                   ? 
                                                  ((0xffff0U 
                                                    & ((IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__conf 
                                                                >> 0x14U)) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)
                                                    ? 
                                                   ((0xffff0U 
                                                     & ((IData)(
                                                                (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__conf 
                                                                 >> 0x14U)) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__conf)))
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__a___05Fh2557) 
                                                    << 4U))))));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024EN_get_output) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__WILL_FIRE_RL_pipeline_stage3))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024EN_get_output)
                    ? 0xaaaaaU : (0x200000U | ((((~ (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                                                             >> 4U))) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)) 
                                                << 0x14U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                                                              >> 4U)))
                                                   ? 
                                                  ((0xffff0U 
                                                    & ((IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__conf 
                                                                >> 0x14U)) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)
                                                    ? 
                                                   ((0xffff0U 
                                                     & ((IData)(
                                                                (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__conf 
                                                                 >> 0x14U)) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__conf)))
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__a___05Fh2557) 
                                                    << 4U))))));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024EN_get_output) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__WILL_FIRE_RL_pipeline_stage3))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024EN_get_output)
                    ? 0xaaaaaU : (0x200000U | ((((~ (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                                                             >> 4U))) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)) 
                                                << 0x14U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                                                              >> 4U)))
                                                   ? 
                                                  ((0xffff0U 
                                                    & ((IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__conf 
                                                                >> 0x14U)) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)
                                                    ? 
                                                   ((0xffff0U 
                                                     & ((IData)(
                                                                (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__conf 
                                                                 >> 0x14U)) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__conf)))
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__a___05Fh2557) 
                                                    << 4U))))));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024EN_get_output) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__WILL_FIRE_RL_pipeline_stage3))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024EN_get_output)
                    ? 0xaaaaaU : (0x200000U | ((((~ (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                                                             >> 4U))) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)) 
                                                << 0x14U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                                                              >> 4U)))
                                                   ? 
                                                  ((0xffff0U 
                                                    & ((IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__conf 
                                                                >> 0x14U)) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)
                                                    ? 
                                                   ((0xffff0U 
                                                     & ((IData)(
                                                                (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__conf 
                                                                 >> 0x14U)) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__conf)))
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__a___05Fh2557) 
                                                    << 4U))))));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024EN_get_output) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__WILL_FIRE_RL_pipeline_stage3))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024EN_get_output)
                    ? 0xaaaaaU : (0x200000U | ((((~ (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                                                             >> 4U))) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)) 
                                                << 0x14U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                                                              >> 4U)))
                                                   ? 
                                                  ((0xffff0U 
                                                    & ((IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__conf 
                                                                >> 0x14U)) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_6)
                                                    ? 
                                                   ((0xffff0U 
                                                     & ((IData)(
                                                                (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__conf 
                                                                 >> 0x14U)) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__conf)))
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__a___05Fh2557) 
                                                    << 4U))))));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_current_sa_operation__024write_1___05FSEL_1) 
             | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k__024EN) 
                | ((IData)(vlSelfRef.mkTb_COP__DOT__started__024EN) 
                   | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_rwkv__024EN))))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation__024D_IN;
        }
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__cycle_count = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__layer_state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg = 0xaaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg = 0xaaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg = 0xaaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg = 0xaaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg = 0xaaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg = 0xaaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg = 0xaaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg = 0xaaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg = 0xaaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg = 0xaaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg = 0xaaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg = 0xaaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg = 0xaaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg = 0xaaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg = 0xaaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg = 0xaaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_wb_state__024write_1___05FSEL_1 
        = ((0xeU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__wb_state)) 
           & (9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_wait_counter)));
    vlSelfRef.mkTb_COP__DOT__cop__024RDY_write_bram 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__wb_state)) 
           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_ready));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BIT_15_1_write___05FETC___05Fq34 
        = ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr) 
                     >> 9U))) && ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr) 
                                            >> 8U))) 
                                  && (1U & ((0x80U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                             ? ((0x40U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                 ? 
                                                ((0x20U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7fU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7fU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7eU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7eU] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7dU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7dU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7cU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7cU] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7bU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7bU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7aU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7aU] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x79U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x79U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x78U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x78U] 
                                                       >> 0xfU)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x77U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x77U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x76U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x76U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x75U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x75U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x74U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x74U] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x73U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x73U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x72U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x72U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x71U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x71U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x70U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x70U] 
                                                       >> 0xfU))))))
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6fU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6fU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6eU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6eU] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6dU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6dU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6cU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6cU] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6bU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6bU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6aU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6aU] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x69U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x69U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x68U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x68U] 
                                                       >> 0xfU)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x67U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x67U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x66U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x66U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x65U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x65U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x64U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x64U] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x63U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x63U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x62U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x62U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x61U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x61U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x60U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x60U] 
                                                       >> 0xfU)))))))
                                                 : 
                                                ((0x20U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5fU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5fU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5eU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5eU] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5dU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5dU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5cU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5cU] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5bU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5bU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5aU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5aU] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x59U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x59U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x58U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x58U] 
                                                       >> 0xfU)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x57U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x57U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x56U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x56U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x55U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x55U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x54U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x54U] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x53U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x53U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x52U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x52U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x51U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x51U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x50U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x50U] 
                                                       >> 0xfU))))))
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4fU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4fU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4eU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4eU] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4dU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4dU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4cU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4cU] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4bU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4bU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4aU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4aU] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x49U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x49U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x48U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x48U] 
                                                       >> 0xfU)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x47U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x47U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x46U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x46U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x45U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x45U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x44U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x44U] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x43U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x43U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x42U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x42U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x41U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x41U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x40U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x40U] 
                                                       >> 0xfU))))))))
                                             : ((0x40U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                 ? 
                                                ((0x20U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3fU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3fU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3eU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3eU] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3dU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3dU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3cU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3cU] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3bU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3bU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3aU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3aU] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x39U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x39U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x38U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x38U] 
                                                       >> 0xfU)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x37U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x37U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x36U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x36U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x35U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x35U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x34U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x34U] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x33U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x33U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x32U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x32U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x31U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x31U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x30U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x30U] 
                                                       >> 0xfU))))))
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2fU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2fU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2eU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2eU] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2dU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2dU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2cU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2cU] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2bU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2bU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2aU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2aU] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x29U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x29U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x28U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x28U] 
                                                       >> 0xfU)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x27U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x27U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x26U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x26U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x25U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x25U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x24U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x24U] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x23U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x23U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x22U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x22U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x21U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x21U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x20U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x20U] 
                                                       >> 0xfU)))))))
                                                 : 
                                                ((0x20U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1fU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1fU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1eU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1eU] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1dU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1dU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1cU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1cU] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1bU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1bU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1aU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1aU] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x19U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x19U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x18U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x18U] 
                                                       >> 0xfU)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x17U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x17U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x16U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x16U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x15U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x15U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x14U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x14U] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x13U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x13U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x12U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x12U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x11U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x11U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x10U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x10U] 
                                                       >> 0xfU))))))
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xfU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xfU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xeU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xeU] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xdU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xdU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xcU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xcU] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xbU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xbU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xaU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xaU] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[9U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[9U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[8U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[8U] 
                                                       >> 0xfU)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[7U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[7U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[6U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[6U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[5U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[5U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[4U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[4U] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[3U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[3U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[2U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[2U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[1U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[1U] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0U] 
                                                       >> 0xfU))))))))))));
    if ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 = 0xaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 = 0x2aU;
    } else if ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 = 0xaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 = 0x2aU;
    } else if ((0x80U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
        if ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7fU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7fU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7fU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7fU]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7eU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7eU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7eU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7eU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7eU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7eU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7eU]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7dU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7dU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7dU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7dU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7dU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7dU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7dU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7cU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7cU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7cU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7cU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7cU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7cU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7cU]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7bU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7bU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7bU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7bU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7bU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7bU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7bU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7aU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7aU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7aU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7aU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7aU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7aU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x7aU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x79U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x79U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x79U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x79U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x79U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x79U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x79U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x78U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x78U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x78U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x78U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x78U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x78U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x78U]);
                    }
                } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x77U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x77U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x77U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x77U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x77U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x77U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x77U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x76U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x76U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x76U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x76U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x76U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x76U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x76U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x75U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x75U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x75U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x75U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x75U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x75U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x75U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x74U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x74U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x74U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x74U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x74U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x74U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x74U]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x73U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x73U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x73U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x73U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x73U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x73U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x73U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x72U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x72U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x72U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x72U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x72U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x72U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x72U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x71U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x71U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x71U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x71U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x71U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x71U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x71U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x70U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x70U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x70U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x70U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x70U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x70U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x70U]);
                }
            } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6fU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6eU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6dU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6cU]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6bU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x6aU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x69U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x69U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x69U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x69U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x69U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x69U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x69U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x68U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x68U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x68U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x68U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x68U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x68U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x68U]);
                }
            } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x67U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x67U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x67U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x67U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x67U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x67U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x67U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x66U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x66U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x66U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x66U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x66U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x66U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x66U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x65U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x65U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x65U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x65U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x65U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x65U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x65U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x64U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x64U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x64U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x64U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x64U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x64U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x64U]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x63U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x63U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x63U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x63U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x63U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x63U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x63U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x62U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x62U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x62U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x62U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x62U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x62U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x62U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x61U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x61U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x61U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x61U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x61U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x61U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x61U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x60U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x60U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x60U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x60U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x60U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x60U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x60U]);
            }
        } else if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5fU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5eU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5dU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5cU]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5bU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x5aU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x59U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x59U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x59U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x59U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x59U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x59U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x59U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x58U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x58U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x58U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x58U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x58U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x58U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x58U]);
                }
            } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x57U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x57U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x57U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x57U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x57U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x57U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x57U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x56U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x56U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x56U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x56U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x56U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x56U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x56U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x55U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x55U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x55U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x55U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x55U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x55U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x55U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x54U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x54U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x54U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x54U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x54U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x54U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x54U]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x53U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x53U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x53U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x53U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x53U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x53U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x53U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x52U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x52U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x52U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x52U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x52U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x52U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x52U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x51U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x51U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x51U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x51U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x51U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x51U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x51U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x50U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x50U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x50U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x50U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x50U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x50U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x50U]);
            }
        } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4fU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4eU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4dU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4cU]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4bU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x4aU]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x49U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x49U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x49U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x49U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x49U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x49U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x49U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x48U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x48U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x48U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x48U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x48U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x48U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x48U]);
            }
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x47U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x47U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x47U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x47U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x47U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x47U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x47U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x46U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x46U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x46U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x46U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x46U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x46U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x46U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x45U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x45U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x45U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x45U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x45U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x45U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x45U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x44U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x44U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x44U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x44U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x44U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x44U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x44U]);
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x43U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x43U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x43U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x43U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x43U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x43U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x43U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x42U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x42U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x42U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x42U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x42U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x42U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x42U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x41U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x41U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x41U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x41U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x41U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x41U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x41U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x40U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x40U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x40U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x40U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x40U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x40U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x40U]);
        }
    } else if ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
        if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3fU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3eU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3dU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3cU]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3bU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x3aU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x39U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x39U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x39U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x39U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x39U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x39U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x39U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x38U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x38U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x38U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x38U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x38U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x38U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x38U]);
                }
            } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x37U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x37U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x37U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x37U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x37U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x37U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x37U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x36U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x36U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x36U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x36U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x36U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x36U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x36U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x35U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x35U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x35U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x35U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x35U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x35U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x35U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x34U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x34U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x34U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x34U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x34U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x34U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x34U]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x33U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x33U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x33U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x33U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x33U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x33U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x33U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x32U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x32U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x32U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x32U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x32U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x32U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x32U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x31U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x31U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x31U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x31U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x31U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x31U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x31U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x30U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x30U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x30U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x30U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x30U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x30U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x30U]);
            }
        } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2fU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2eU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2dU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2cU]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2bU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x2aU]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x29U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x29U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x29U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x29U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x29U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x29U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x29U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x28U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x28U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x28U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x28U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x28U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x28U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x28U]);
            }
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x27U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x27U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x27U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x27U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x27U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x27U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x27U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x26U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x26U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x26U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x26U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x26U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x26U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x26U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x25U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x25U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x25U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x25U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x25U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x25U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x25U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x24U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x24U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x24U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x24U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x24U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x24U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x24U]);
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x23U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x23U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x23U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x23U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x23U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x23U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x23U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x22U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x22U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x22U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x22U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x22U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x22U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x22U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x21U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x21U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x21U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x21U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x21U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x21U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x21U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x20U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x20U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x20U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x20U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x20U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x20U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x20U]);
        }
    } else if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1fU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1eU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1dU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1cU]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1bU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x1aU]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x19U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x19U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x19U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x19U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x18U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x18U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x18U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x18U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x18U]);
            }
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x17U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x17U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x17U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x17U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x17U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x16U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x16U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x16U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x16U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x15U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x15U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x15U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x15U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x14U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x14U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x14U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x14U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x14U]);
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x13U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x13U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x13U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x13U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x12U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x12U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x12U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x12U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x11U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x11U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x11U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x11U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x10U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x10U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0x10U]);
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xfU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xfU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xfU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xfU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xeU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xeU]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xdU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xdU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xdU]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xcU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xcU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xcU]);
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xbU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xbU]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xaU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xaU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0xaU]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[9U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[9U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[8U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[8U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[8U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[8U]);
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[7U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[7U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[6U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[6U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[5U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[5U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[4U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[4U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[4U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[4U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[4U]);
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[3U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[3U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[2U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[2U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[2U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[2U]);
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[1U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[1U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[1U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[1U]);
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0U] 
                                      >> 0x10U)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_14_TO_7_1___05FETC___05Fq35 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_write_addr_0_write_buffer_BITS_6_TO_0_1_w_ETC___05Fq36 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__write_buffer[0U]);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_2___05FVAL_4 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr) 
                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_e 
        = ((7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__wb_state)) 
           & (0x100U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_f 
        = ((8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__wb_state)) 
           & (0x100U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed__024D_IN 
        = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected__024D_IN 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0U] 
        = ((((0x16U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xdU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xdU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x16dU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x16dU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x16U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xdU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x16dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[1U] 
        = ((((0x16U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x16eU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x16eU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x16U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x16eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[2U] 
        = ((((0x16U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x16fU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x16fU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x16U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x16fU])));
    if ((0x17U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[4U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[5U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[6U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[7U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[8U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[5U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[9U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0xaU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0xbU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0xcU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[9U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0xdU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0xeU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0xfU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0x10U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xdU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0x11U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0x12U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU];
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x170U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[4U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x171U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[5U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x172U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[6U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x173U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[7U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x174U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[8U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x175U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[9U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x176U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0xaU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x177U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0xbU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x178U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0xcU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x179U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0xdU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x17aU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0xeU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x17bU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0xfU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x17cU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0x10U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x17dU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0x11U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x17eU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41115[0x12U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x17fU];
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result__024EN) {
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result, vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result__024D_IN);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7406[0U] 
        = ((((0xfU == (0xfU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xfU == (0xfU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7406[1U] 
        = ((((0xfU == (0xfU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xfU == (0xfU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7406[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x80U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7406[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x81U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7406[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x82U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7406[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x83U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7406[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x84U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7406[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x85U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7406[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x86U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7406[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x87U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_started__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_started)) 
           & (5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_started__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_started)) 
           & (0xbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_25 
        = ((0xcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)) 
           | (0xbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__busy)) 
           & (0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__CAN_FIRE_RL_tsc_wkv_collect_results 
        = (((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__busy)) 
            & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__result_ready)) 
           & (0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_data_load 
        = ((2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)) 
           & (0x300U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_load_data 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_data_loaded)) 
           & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_data_loaded__024EN 
        = ((2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)) 
           & (0x300U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_batch_idx__024D_IN 
        = ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_batch_idx))
            ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_batch_idx))));
    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_batch_idx))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_batch_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq1 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq7 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq10 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq13 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq16 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq19 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq22 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq49 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq52 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq55 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq58 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq61 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq64 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq67 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq70 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq25 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xfU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq28 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xfU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq31 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xeU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq34 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xeU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq37 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xdU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq40 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xdU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq43 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xcU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq46 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xcU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq3 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq9 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq12 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq15 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq18 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq21 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq24 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq51 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq54 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq57 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq60 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq63 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq66 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq69 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq72 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq2 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq8 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq11 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq14 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq17 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq20 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq50 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq53 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq56 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq59 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq62 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq65 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq68 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq71 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq27 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xfU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xfU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq30 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xfU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq33 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xeU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xeU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq36 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xeU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq39 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xdU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xdU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq42 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xdU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq45 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xcU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xcU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq48 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xcU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq26 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xfU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq29 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xfU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xfU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq32 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xeU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xeU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq35 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xeU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xeU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq38 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xdU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xdU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq41 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xdU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xdU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq44 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xcU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq47 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xcU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xcU] 
                                          >> 7U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq1 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq7 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq10 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq13 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x29U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq16 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x29U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq19 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x28U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq22 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x28U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq49 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq52 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq55 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq58 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq61 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x19U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq64 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x19U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq67 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x18U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq70 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x18U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq25 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xbU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq28 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xbU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq31 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xaU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq34 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xaU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq37 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[9U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq40 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[9U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq43 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[8U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq46 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[8U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq3 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq9 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq12 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq15 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x29U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x29U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq18 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x29U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq21 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x28U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x28U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq24 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x28U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq51 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq54 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq57 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq60 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq63 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x19U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x19U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq66 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x19U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq69 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x18U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x18U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq72 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x18U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq2 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq8 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq11 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x2aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq14 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x29U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x29U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq17 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x29U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x29U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq20 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x28U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x28U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x28U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x28U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq50 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq53 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq56 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq59 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x1aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq62 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x19U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x19U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq65 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x19U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x19U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq68 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x18U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x18U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq71 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x18U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x18U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq27 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xbU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xbU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq30 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xbU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq33 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xaU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xaU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq36 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xaU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq39 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[9U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[9U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq42 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[9U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq45 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[8U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq48 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[8U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq26 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xbU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq29 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xbU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xbU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq32 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xaU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xaU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq35 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xaU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0xaU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq38 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[9U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[9U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq41 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[9U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[9U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq44 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[8U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq47 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[8U] 
                                          >> 7U)));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_batch_idx))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq1 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x27U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq4 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x27U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq7 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x26U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq10 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x26U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq13 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x25U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq16 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x25U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq19 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x24U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq22 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x24U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq49 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x17U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq52 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x17U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq55 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x16U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq58 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x16U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq61 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x15U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq64 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x15U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq67 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x14U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq70 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x14U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq25 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[7U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq28 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[7U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq31 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[6U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq34 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[6U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq37 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[5U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq40 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[5U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq43 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[4U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq46 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[4U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq3 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x27U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x27U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq6 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x27U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq9 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x26U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x26U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq12 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x26U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq15 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x25U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x25U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq18 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x25U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq21 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x24U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x24U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq24 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x24U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq51 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x17U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x17U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq54 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x17U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq57 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x16U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x16U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq60 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x16U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq63 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x15U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x15U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq66 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x15U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq69 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x14U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x14U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq72 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x14U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq2 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x27U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x27U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq5 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x27U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x27U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq8 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x26U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x26U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq11 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x26U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x26U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq14 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x25U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x25U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq17 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x25U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x25U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq20 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x24U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x24U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq23 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x24U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x24U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq50 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x17U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x17U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq53 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x17U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x17U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq56 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x16U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x16U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq59 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x16U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x16U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq62 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x15U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x15U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq65 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x15U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x15U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq68 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x14U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x14U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq71 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x14U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x14U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq27 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[7U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[7U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq30 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[7U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq33 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[6U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[6U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq36 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[6U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq39 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[5U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[5U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq42 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[5U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq45 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[4U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[4U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq48 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[4U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq26 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[7U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[7U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq29 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[7U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[7U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq32 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[6U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[6U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq35 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[6U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[6U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq38 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[5U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[5U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq41 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[5U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[5U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq44 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[4U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[4U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq47 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[4U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[4U] 
                                      >> 7U)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq1 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x23U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq4 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x23U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq7 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x22U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq10 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x22U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq13 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x21U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq16 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x21U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq19 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x20U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq22 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x20U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq49 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x13U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq52 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x13U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq55 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x12U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq58 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x12U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq61 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x11U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq64 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x11U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq67 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x10U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq70 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x10U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq25 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[3U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq28 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[3U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq31 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[2U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq34 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[2U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq37 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[1U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq40 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[1U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq43 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq46 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq3 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x23U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x23U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq6 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x23U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq9 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x22U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x22U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq12 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x22U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq15 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x21U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x21U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq18 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x21U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq21 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x20U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x20U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq24 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x20U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq51 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x13U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x13U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq54 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x13U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq57 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x12U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x12U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq60 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x12U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq63 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x11U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x11U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq66 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x11U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq69 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x10U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x10U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq72 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x10U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq2 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x23U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x23U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq5 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x23U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x23U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq8 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x22U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x22U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq11 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x22U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x22U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq14 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x21U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x21U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq17 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x21U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x21U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq20 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x20U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x20U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq23 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x20U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x20U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq50 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x13U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x13U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq53 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x13U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x13U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq56 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x12U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x12U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq59 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x12U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x12U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq62 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x11U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x11U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq65 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x11U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x11U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq68 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x10U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x10U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq71 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x10U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0x10U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq27 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[3U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[3U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq30 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[3U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq33 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[2U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[2U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq36 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[2U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq39 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[1U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[1U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq42 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[1U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq45 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq48 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq26 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[3U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[3U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq29 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[3U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[3U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq32 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[2U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[2U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq35 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[2U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[2U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq38 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[1U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[1U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq41 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[1U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[1U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq44 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq47 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__data0_reg[0U] 
                                      >> 7U)));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_58 
        = ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           | (0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_62 
        = ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           | (0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r1_load_done 
        = ((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r0_load_done 
        = ((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((0xdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)) 
              & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                 & (0x37U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww0 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)) 
              & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                 & (0x31U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)) 
              & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                 & (0x2bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)) 
              & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                 & (0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv0 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)) 
              & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                 & (0x49U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((0x12U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)) 
              & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                 & (0x43U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_r__024EN 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_v__024EN 
        = (IData)(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                   & (0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (0x3bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (0x39U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww2 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (0x35U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww1 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (0x33U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (0x2dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww2 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww1 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_r2 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_r1 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_r0 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_v2 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_v1 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (0x13U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_v0 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (0xfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_k2 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (0xbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_k1 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_k0 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              & (3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_k0 
        = ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__brams_ready));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_r0 
        = ((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__brams_ready));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_v0 
        = ((0xdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__brams_ready));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r2_load 
        = ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r0_load 
        = ((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v1_load 
        = ((0x12U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r1_load 
        = ((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k0_load 
        = ((2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v0_load 
        = ((0xeU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k1_load 
        = ((6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k2_load 
        = ((0xaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v2_load 
        = ((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           & (0x100U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
    if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17fU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16fU] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15fU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14fU] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13fU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12fU] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11fU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10fU] 
                                                     >> 0x1fU)))))));
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & 0x2aU);
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17fU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17bU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16fU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16bU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16aU] 
                                                  >> 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15aU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14aU] 
                                              >> 0x10U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13aU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12aU] 
                                              >> 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11aU] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10aU] 
                                          >> 0x10U)));
        }
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17fU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16fU] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15fU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14fU] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13fU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12fU] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11fU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10fU] 
                                                     >> 0xfU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17eU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16eU] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15eU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14eU] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13eU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12eU] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11eU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10eU] 
                                                     >> 0x1fU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17eU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16eU] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15eU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14eU] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13eU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12eU] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11eU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10eU] 
                                                     >> 0xfU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17dU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16dU] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15dU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14dU] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13dU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12dU] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11dU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10dU] 
                                                     >> 0x1fU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17dU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16dU] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15dU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14dU] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13dU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12dU] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11dU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10dU] 
                                                     >> 0xfU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17cU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16cU] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15cU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14cU] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13cU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12cU] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11cU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10cU] 
                                                     >> 0x1fU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17cU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16cU] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15cU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14cU] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13cU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12cU] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11cU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10cU] 
                                                     >> 0xfU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17bU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16bU] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15bU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14bU] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13bU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12bU] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11bU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10bU] 
                                                     >> 0x1fU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17bU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16bU] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15bU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14bU] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13bU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12bU] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11bU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10bU] 
                                                     >> 0xfU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed) 
                               >> 3U))) && (1U & ((4U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17aU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16aU] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15aU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14aU] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13aU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12aU] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11aU] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10aU] 
                                                     >> 0x1fU)))))));
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfaU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfaU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfaU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfaU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfaU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeaU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeaU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeaU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeaU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeaU] 
                                                  >> 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdaU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdaU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcaU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcaU] 
                                              >> 0x10U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbaU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbaU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaaU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaaU] 
                                              >> 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9aU] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8aU] 
                                          >> 0x10U)));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7aU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6aU] 
                                              >> 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5aU] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4aU] 
                                          >> 0x10U)));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3aU] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2aU] 
                                          >> 0x10U)));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1aU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1aU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1aU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1aU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1aU] 
                                      >> 0x10U)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaU] 
                                      >> 0x10U)));
    }
}
