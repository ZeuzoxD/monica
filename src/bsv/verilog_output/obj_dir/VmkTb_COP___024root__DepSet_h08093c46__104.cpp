// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__107(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__107\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
        if ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & 0x2aU);
        } else if ((0x80U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                            = (0xffU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17fU] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17fU] 
                                                     >> 0x17U)));
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                            = (0x7fU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17fU] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17fU] 
                                                     >> 0x10U)));
                                    } else {
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                            = (0xffU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17fU] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17fU] 
                                                     >> 7U)));
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                            = (0x7fU 
                                               & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17fU]);
                                    }
                                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17eU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17eU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17eU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17eU]);
                                }
                            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17dU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17dU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17dU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17dU]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17cU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17cU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17cU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17cU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17cU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17cU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17cU]);
                            }
                        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17bU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17bU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17bU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17bU]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17aU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17aU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17aU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17aU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17aU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17aU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17aU]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x179U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x179U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x179U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x179U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x179U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x179U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x179U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x178U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x178U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x178U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x178U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x178U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x178U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x178U]);
                        }
                    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x177U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x177U] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x177U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x177U] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x177U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x177U] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x177U]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x176U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x176U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x176U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x176U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x176U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x176U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x176U]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x175U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x175U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x175U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x175U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x175U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x175U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x175U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x174U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x174U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x174U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x174U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x174U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x174U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x174U]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x173U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x173U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x173U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x173U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x173U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x173U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x173U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x172U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x172U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x172U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x172U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x172U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x172U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x172U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x171U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x171U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x171U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x171U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x171U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x171U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x171U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x170U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x170U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x170U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x170U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x170U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x170U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x170U]);
                    }
                } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16fU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16fU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16fU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16fU]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16eU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16eU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16eU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16eU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16eU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16eU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16eU]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16dU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16dU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16dU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16dU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16dU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16dU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16dU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16cU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16cU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16cU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16cU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16cU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16cU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16cU]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16bU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16bU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16bU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16bU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16bU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16bU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16bU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16aU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16aU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16aU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16aU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16aU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16aU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16aU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x169U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x169U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x169U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x169U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x169U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x169U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x169U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x168U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x168U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x168U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x168U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x168U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x168U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x168U]);
                    }
                } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x167U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x167U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x167U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x167U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x167U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x167U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x167U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x166U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x166U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x166U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x166U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x166U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x166U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x166U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x165U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x165U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x165U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x165U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x165U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x165U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x165U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x164U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x164U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x164U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x164U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x164U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x164U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x164U]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x163U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x163U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x163U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x163U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x163U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x163U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x163U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x162U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x162U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x162U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x162U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x162U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x162U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x162U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x161U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x161U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x161U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x161U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x161U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x161U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x161U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x160U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x160U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x160U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x160U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x160U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x160U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x160U]);
                }
            } else if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15fU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15fU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15fU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15fU]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15eU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15eU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15eU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15eU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15eU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15eU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15eU]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15dU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15dU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15dU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15dU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15dU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15dU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15dU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15cU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15cU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15cU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15cU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15cU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15cU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15cU]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15bU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15bU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15bU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15bU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15bU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15bU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15bU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15aU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15aU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15aU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15aU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15aU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15aU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15aU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x159U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x159U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x159U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x159U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x159U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x159U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x159U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x158U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x158U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x158U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x158U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x158U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x158U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x158U]);
                    }
                } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x157U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x157U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x157U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x157U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x157U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x157U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x157U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x156U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x156U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x156U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x156U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x156U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x156U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x156U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x155U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x155U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x155U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x155U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x155U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x155U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x155U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x154U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x154U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x154U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x154U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x154U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x154U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x154U]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x153U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x153U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x153U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x153U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x153U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x153U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x153U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x152U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x152U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x152U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x152U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x152U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x152U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x152U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x151U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x151U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x151U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x151U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x151U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x151U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x151U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x150U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x150U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x150U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x150U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x150U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x150U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x150U]);
                }
            } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14fU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14eU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14dU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14cU]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14bU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14aU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x149U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x149U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x149U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x149U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x149U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x149U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x149U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x148U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x148U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x148U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x148U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x148U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x148U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x148U]);
                }
            } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x147U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x147U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x147U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x147U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x147U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x147U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x147U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x146U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x146U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x146U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x146U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x146U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x146U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x146U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x145U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x145U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x145U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x145U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x145U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x145U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x145U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x144U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x144U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x144U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x144U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x144U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x144U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x144U]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x143U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x143U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x143U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x143U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x143U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x143U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x143U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x142U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x142U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x142U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x142U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x142U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x142U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x142U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x141U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x141U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x141U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x141U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x141U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x141U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x141U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x140U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x140U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x140U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x140U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x140U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x140U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x140U]);
            }
        } else if ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13fU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13fU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13fU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13fU]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13eU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13eU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13eU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13eU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13eU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13eU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13eU]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13dU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13dU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13dU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13dU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13dU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13dU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13dU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13cU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13cU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13cU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13cU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13cU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13cU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13cU]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13bU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13bU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13bU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13bU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13bU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13bU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13bU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13aU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13aU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13aU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13aU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13aU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13aU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13aU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x139U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x139U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x139U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x139U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x139U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x139U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x139U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x138U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x138U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x138U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x138U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x138U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x138U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x138U]);
                    }
                } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x137U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x137U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x137U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x137U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x137U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x137U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x137U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x136U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x136U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x136U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x136U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x136U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x136U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x136U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x135U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x135U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x135U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x135U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x135U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x135U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x135U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x134U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x134U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x134U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x134U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x134U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x134U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x134U]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x133U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x133U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x133U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x133U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x133U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x133U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x133U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x132U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x132U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x132U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x132U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x132U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x132U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x132U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x131U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x131U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x131U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x131U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x131U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x131U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x131U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x130U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x130U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x130U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x130U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x130U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x130U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x130U]);
                }
            } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12fU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12eU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12dU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12cU]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12bU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12aU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x129U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x129U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x129U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x129U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x129U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x129U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x129U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x128U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x128U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x128U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x128U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x128U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x128U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x128U]);
                }
            } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x127U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x127U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x127U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x127U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x127U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x127U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x127U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x126U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x126U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x126U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x126U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x126U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x126U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x126U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x125U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x125U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x125U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x125U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x125U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x125U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x125U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x124U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x124U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x124U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x124U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x124U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x124U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x124U]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x123U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x123U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x123U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x123U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x123U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x123U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x123U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x122U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x122U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x122U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x122U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x122U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x122U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x122U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x121U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x121U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x121U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x121U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x121U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x121U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x121U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x120U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x120U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x120U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x120U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x120U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x120U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x120U]);
            }
        } else if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11fU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11eU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11dU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11cU]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11bU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11aU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x119U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x119U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x119U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x119U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x119U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x119U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x119U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x118U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x118U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x118U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x118U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x118U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x118U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x118U]);
                }
            } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x117U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x117U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x117U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x117U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x117U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x117U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x117U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x116U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x116U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x116U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x116U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x116U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x116U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x116U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x115U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x115U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x115U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x115U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x115U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x115U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x115U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x114U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x114U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x114U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x114U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x114U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x114U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x114U]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x113U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x113U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x113U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x113U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x113U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x113U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x113U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x112U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x112U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x112U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x112U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x112U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x112U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x112U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x111U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x111U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x111U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x111U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x111U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x111U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x111U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x110U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x110U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x110U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x110U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x110U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x110U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x110U]);
            }
        } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10fU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10eU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10dU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10cU]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10bU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10aU]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x109U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x109U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x109U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x109U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x109U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x109U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x109U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x108U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x108U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x108U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x108U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x108U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x108U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x108U]);
            }
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x107U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x107U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x107U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x107U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x107U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x107U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x107U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x106U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x106U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x106U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x106U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x106U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x106U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x106U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x105U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x105U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x105U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x105U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x105U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x105U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x105U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x104U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x104U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x104U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x104U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x104U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x104U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x104U]);
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x103U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x103U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x103U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x103U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x103U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x103U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x103U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x102U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x102U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x102U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x102U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x102U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x102U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x102U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x101U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x101U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x101U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x101U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x101U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x101U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x101U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x100U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x100U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x100U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x100U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x100U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x100U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x100U]);
        }
    } else if ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
        if ((0x80U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                            = (0xffU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xffU] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xffU] 
                                                     >> 0x17U)));
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                            = (0x7fU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xffU] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xffU] 
                                                     >> 0x10U)));
                                    } else {
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                            = (0xffU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xffU] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xffU] 
                                                     >> 7U)));
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                            = (0x7fU 
                                               & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xffU]);
                                    }
                                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfeU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfeU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfeU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfeU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfeU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfeU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfeU]);
                                }
                            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfdU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfdU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfdU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfdU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfdU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfdU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfdU]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfcU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfcU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfcU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfcU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfcU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfcU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfcU]);
                            }
                        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfbU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfbU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfbU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfbU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfbU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfbU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfbU]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfaU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfaU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfaU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfaU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfaU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfaU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfaU]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf9U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf9U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf9U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf9U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf9U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf9U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf9U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf8U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf8U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf8U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf8U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf8U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf8U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf8U]);
                        }
                    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf7U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf7U] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf7U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf7U] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf7U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf7U] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf7U]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf6U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf6U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf6U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf6U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf6U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf6U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf6U]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf5U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf5U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf5U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf5U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf5U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf5U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf5U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf4U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf4U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf4U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf4U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf4U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf4U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf4U]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf3U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf3U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf3U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf3U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf3U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf3U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf3U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf2U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf2U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf2U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf2U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf2U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf2U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf2U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf1U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf1U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf1U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf1U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf1U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf1U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf1U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf0U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf0U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf0U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf0U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf0U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf0U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf0U]);
                    }
                } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xefU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xefU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xefU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xefU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xefU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xefU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xefU]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeeU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeeU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeeU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeeU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeeU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeeU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeeU]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xedU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xedU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xedU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xedU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xedU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xedU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xedU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xecU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xecU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xecU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xecU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xecU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xecU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xecU]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xebU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xebU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xebU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xebU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xebU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xebU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xebU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeaU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeaU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeaU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeaU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeaU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeaU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeaU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe9U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe9U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe9U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe9U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe9U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe9U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe9U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe8U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe8U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe8U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe8U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe8U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe8U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe8U]);
                    }
                } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe7U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe7U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe7U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe7U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe7U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe7U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe7U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe6U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe6U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe6U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe6U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe6U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe6U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe6U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe5U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe5U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe5U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe5U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe5U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe5U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe5U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe4U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe4U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe4U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe4U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe4U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe4U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe4U]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe3U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe3U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe3U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe3U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe3U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe3U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe3U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe2U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe2U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe2U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe2U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe2U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe2U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe2U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe1U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe1U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe1U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe1U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe1U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe1U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe1U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe0U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe0U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe0U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe0U]);
                }
            } else if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdfU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdfU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdfU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdfU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdfU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdfU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdfU]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdeU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdeU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdeU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdeU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdeU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdeU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdeU]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xddU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xddU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xddU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xddU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xddU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xddU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xddU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdcU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdcU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdcU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdcU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdcU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdcU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdcU]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdbU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdbU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdbU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdbU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdbU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdbU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdbU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdaU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdaU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdaU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdaU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdaU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdaU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdaU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd9U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd9U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd9U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd9U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd9U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd9U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd9U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd8U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd8U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd8U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd8U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd8U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd8U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd8U]);
                    }
                } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd7U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd7U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd7U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd7U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd7U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd7U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd7U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd6U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd6U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd6U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd6U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd6U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd6U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd6U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd5U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd5U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd5U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd5U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd5U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd5U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd5U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd4U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd4U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd4U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd4U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd4U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd4U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd4U]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd3U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd3U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd3U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd3U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd3U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd3U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd3U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd2U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd2U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd2U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd2U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd2U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd2U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd2U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd1U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd1U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd1U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd1U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd1U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd1U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd1U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd0U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd0U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd0U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd0U]);
                }
            } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcfU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcfU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcfU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcfU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcfU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcfU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcfU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xceU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xceU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xceU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xceU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xceU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xceU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xceU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcdU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcdU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcdU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcdU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcdU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcdU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcdU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xccU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xccU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xccU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xccU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xccU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xccU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xccU]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcbU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcbU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcbU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcbU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcbU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcbU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcbU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcaU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcaU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcaU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcaU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcaU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcaU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcaU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc9U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc9U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc9U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc9U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc9U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc9U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc9U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc8U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc8U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc8U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc8U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc8U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc8U]);
                }
            } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc7U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc7U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc7U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc7U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc7U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc7U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc7U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc6U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc6U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc6U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc6U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc6U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc6U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc6U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc5U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc5U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc5U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc5U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc5U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc5U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc5U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc4U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc4U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc4U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc4U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc4U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc4U]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc3U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc3U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc3U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc3U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc3U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc3U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc3U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc2U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc2U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc2U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc2U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc2U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc1U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc1U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc1U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc1U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc1U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc1U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc0U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc0U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc0U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc0U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc0U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc0U]);
            }
        } else if ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbfU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbfU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbfU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbfU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbfU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbfU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbfU]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbeU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbeU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbeU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbeU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbeU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbeU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbeU]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbdU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbdU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbdU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbdU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbdU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbdU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbdU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbcU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbcU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbcU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbcU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbcU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbcU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbcU]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbbU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbbU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbbU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbbU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbbU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbbU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbbU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbaU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbaU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbaU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbaU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbaU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbaU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbaU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb9U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb9U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb9U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb9U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb9U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb9U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb9U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb8U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb8U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb8U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb8U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb8U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb8U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb8U]);
                    }
                } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb7U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb7U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb7U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb7U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb7U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb7U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb7U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb6U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb6U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb6U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb6U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb6U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb6U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb6U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb5U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb5U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb5U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb5U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb5U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb5U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb5U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb4U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb4U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb4U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb4U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb4U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb4U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb4U]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb3U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb3U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb3U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb3U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb3U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb3U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb3U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb2U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb2U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb2U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb2U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb2U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb2U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb2U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb1U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb1U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb1U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb1U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb1U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb1U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb1U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb0U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb0U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb0U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb0U]);
                }
            } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xafU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xafU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xafU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xafU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xafU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xafU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xafU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaeU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaeU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaeU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaeU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaeU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaeU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaeU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xadU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xadU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xadU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xadU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xadU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xadU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xadU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xacU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xacU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xacU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xacU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xacU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xacU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xacU]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xabU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xabU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xabU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xabU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xabU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xabU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xabU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaaU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaaU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaaU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaaU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaaU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaaU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaaU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa9U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa9U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa9U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa9U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa9U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa9U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa9U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa8U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa8U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa8U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa8U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa8U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa8U]);
                }
            } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa7U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa7U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa7U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa7U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa7U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa7U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa7U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa6U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa6U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa6U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa6U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa6U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa6U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa6U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa5U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa5U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa5U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa5U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa5U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa5U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa5U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa4U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa4U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa4U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa4U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa4U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa4U]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa3U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa3U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa3U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa3U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa3U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa3U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa3U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa2U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa2U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa2U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa2U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa2U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa1U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa1U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa1U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa1U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa1U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa1U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa0U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa0U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa0U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa0U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa0U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa0U]);
            }
        } else if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9fU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9eU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9dU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9cU]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9bU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9aU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x99U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x99U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x99U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x99U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x99U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x99U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x99U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x98U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x98U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x98U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x98U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x98U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x98U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x98U]);
                }
            } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x97U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x97U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x97U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x97U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x97U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x97U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x97U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x96U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x96U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x96U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x96U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x96U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x96U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x96U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x95U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x95U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x95U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x95U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x95U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x95U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x95U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x94U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x94U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x94U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x94U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x94U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x94U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x94U]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x93U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x93U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x93U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x93U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x93U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x93U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x93U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x92U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x92U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x92U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x92U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x92U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x92U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x92U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x91U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x91U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x91U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x91U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x91U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x91U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x91U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x90U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x90U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x90U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x90U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x90U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x90U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x90U]);
            }
        } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8fU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8eU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8dU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8cU]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8bU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8aU]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x89U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x89U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x89U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x89U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x89U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x89U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x89U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x88U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x88U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x88U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x88U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x88U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x88U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x88U]);
            }
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x87U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x87U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x87U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x87U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x87U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x87U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x87U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x86U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x86U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x86U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x86U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x86U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x86U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x86U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x85U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x85U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x85U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x85U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x85U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x85U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x85U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x84U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x84U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x84U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x84U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x84U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x84U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x84U]);
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x83U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x83U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x83U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x83U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x83U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x83U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x83U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x82U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x82U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x82U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x82U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x82U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x82U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x82U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x81U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x81U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x81U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x81U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x81U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x81U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x81U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x80U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x80U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x80U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x80U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x80U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x80U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x80U]);
        }
    } else if ((0x80U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
        if ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7fU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7fU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7fU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7fU]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7eU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7eU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7eU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7eU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7eU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7eU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7eU]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7dU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7dU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7dU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7dU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7dU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7dU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7dU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7cU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7cU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7cU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7cU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7cU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7cU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7cU]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7bU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7bU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7bU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7bU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7bU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7bU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7bU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7aU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7aU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7aU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7aU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7aU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7aU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7aU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x79U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x79U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x79U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x79U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x79U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x79U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x79U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x78U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x78U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x78U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x78U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x78U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x78U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x78U]);
                    }
                } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x77U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x77U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x77U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x77U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x77U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x77U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x77U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x76U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x76U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x76U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x76U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x76U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x76U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x76U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x75U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x75U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x75U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x75U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x75U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x75U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x75U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x74U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x74U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x74U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x74U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x74U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x74U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x74U]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x73U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x73U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x73U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x73U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x73U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x73U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x73U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x72U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x72U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x72U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x72U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x72U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x72U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x72U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x71U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x71U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x71U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x71U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x71U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x71U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x71U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x70U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x70U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x70U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x70U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x70U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x70U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x70U]);
                }
            } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6fU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6eU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6dU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6cU]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6bU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6aU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x69U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x69U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x69U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x69U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x69U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x69U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x69U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x68U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x68U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x68U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x68U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x68U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x68U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x68U]);
                }
            } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x67U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x67U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x67U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x67U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x67U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x67U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x67U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x66U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x66U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x66U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x66U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x66U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x66U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x66U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x65U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x65U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x65U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x65U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x65U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x65U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x65U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x64U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x64U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x64U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x64U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x64U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x64U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x64U]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x63U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x63U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x63U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x63U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x63U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x63U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x63U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x62U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x62U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x62U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x62U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x62U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x62U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x62U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x61U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x61U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x61U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x61U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x61U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x61U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x61U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x60U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x60U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x60U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x60U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x60U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x60U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x60U]);
            }
        } else if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5fU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5eU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5dU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5cU]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5bU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5aU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x59U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x59U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x59U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x59U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x59U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x59U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x59U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x58U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x58U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x58U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x58U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x58U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x58U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x58U]);
                }
            } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x57U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x57U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x57U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x57U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x57U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x57U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x57U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x56U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x56U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x56U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x56U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x56U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x56U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x56U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x55U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x55U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x55U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x55U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x55U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x55U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x55U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x54U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x54U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x54U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x54U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x54U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x54U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x54U]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x53U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x53U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x53U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x53U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x53U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x53U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x53U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x52U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x52U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x52U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x52U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x52U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x52U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x52U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x51U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x51U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x51U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x51U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x51U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x51U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x51U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x50U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x50U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x50U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x50U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x50U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x50U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x50U]);
            }
        } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4fU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4eU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4dU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4cU]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4bU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4aU]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x49U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x49U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x49U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x49U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x49U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x49U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x49U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x48U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x48U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x48U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x48U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x48U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x48U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x48U]);
            }
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x47U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x47U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x47U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x47U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x47U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x47U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x47U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x46U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x46U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x46U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x46U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x46U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x46U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x46U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x45U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x45U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x45U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x45U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x45U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x45U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x45U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x44U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x44U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x44U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x44U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x44U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x44U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x44U]);
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x43U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x43U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x43U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x43U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x43U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x43U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x43U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x42U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x42U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x42U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x42U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x42U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x42U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x42U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x41U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x41U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x41U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x41U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x41U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x41U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x41U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x40U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x40U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x40U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x40U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x40U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x40U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x40U]);
        }
    } else if ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
        if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3fU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3eU]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3dU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3cU]);
                    }
                } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3bU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3aU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x39U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x39U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x39U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x39U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x39U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x39U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x39U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x38U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x38U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x38U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x38U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x38U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x38U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x38U]);
                }
            } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x37U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x37U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x37U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x37U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x37U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x37U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x37U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x36U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x36U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x36U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x36U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x36U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x36U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x36U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x35U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x35U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x35U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x35U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x35U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x35U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x35U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x34U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x34U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x34U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x34U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x34U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x34U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x34U]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x33U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x33U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x33U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x33U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x33U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x33U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x33U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x32U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x32U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x32U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x32U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x32U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x32U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x32U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x31U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x31U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x31U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x31U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x31U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x31U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x31U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x30U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x30U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x30U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x30U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x30U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x30U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x30U]);
            }
        } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2fU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2eU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2dU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2cU]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2bU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2aU]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x29U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x29U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x29U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x29U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x29U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x29U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x29U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x28U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x28U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x28U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x28U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x28U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x28U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x28U]);
            }
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x27U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x27U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x27U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x27U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x27U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x27U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x27U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x26U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x26U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x26U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x26U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x26U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x26U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x26U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x25U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x25U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x25U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x25U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x25U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x25U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x25U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x24U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x24U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x24U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x24U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x24U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x24U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x24U]);
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x23U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x23U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x23U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x23U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x23U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x23U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x23U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x22U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x22U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x22U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x22U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x22U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x22U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x22U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x21U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x21U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x21U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x21U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x21U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x21U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x21U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x20U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x20U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x20U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x20U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x20U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x20U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x20U]);
        }
    } else if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1fU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1eU]);
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1dU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1cU]);
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1bU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1aU]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x19U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x19U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x19U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x19U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x18U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x18U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x18U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x18U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x18U]);
            }
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14U]);
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10U]);
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeU]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdU]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcU]);
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbU]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaU]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[9U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[9U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[8U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[8U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[8U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[8U]);
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[7U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[7U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[6U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[6U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[5U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[5U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[4U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[4U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[4U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[4U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[4U]);
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[3U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[3U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[2U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[2U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[2U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[2U]);
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[1U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[1U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[1U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[1U]);
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0U] 
                                      >> 0x10U)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0U]);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__busy) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result__024EN)) 
              & (0x300U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[0U] 
        = ((((0x2f4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x179U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x179U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x179U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[0U] 
        = ((((0x2f4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x179U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x179U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x179U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[0U] 
        = ((((0x2f4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x179U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x179U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x179U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[0U] 
        = ((((0x2f4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x179U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x179U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x179U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0U] 
        = ((((0x91U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x48U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x48U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x90U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x48U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[1U] 
        = ((((0x93U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x49U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x49U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x92U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x49U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[2U] 
        = ((((0x95U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4aU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4aU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x94U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[3U] 
        = ((((0x97U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4bU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4bU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x96U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[4U] 
        = ((((0x99U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4cU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4cU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x98U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4cU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x19U] 
        = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0x14U]);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[0U] 
        = ((((0x2f4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x179U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x179U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x179U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[5U];
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[0U] 
        = ((((0xaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40836[0U] 
        = ((((0x15U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x151U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x151U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x15U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x151U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40836[1U] 
        = ((((0x15U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x152U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x152U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x15U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x152U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40836[2U] 
        = ((((0x15U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x153U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x153U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x15U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x153U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40836[3U] 
        = ((((0x15U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x154U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x154U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x15U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x154U])));
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x2aU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40836[(__Vilp1 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__024put_data_data 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq23)) 
            & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq24)))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh16232)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_30)
                ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq22) 
                    << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq23) 
                                 << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq24)))
                : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BIT_15_08_EQ_INV_compute_p_8_BIT___05FETC___05F_d909)
                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh8848)
                                 : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_pp_8_BITS_14_TO_7_93_ULT_ETC___05F_d921)
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BITS_14_TO_7_93_ULT_compute_p_8_B_ETC___05F_d910)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq22)
                                         : (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq46)))
                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh8848))) 
                               << 0xfU)) | ((0x100U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795))
                                             ? ((0x7f80U 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh8872)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                                      >> 1U)))
                                             : ((0x7f80U 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh8872) 
                                                     - 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_13)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_283)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_285)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_287)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_289)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_291)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_293)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_295)
                                                              ? 8U
                                                              : 7U)
                                                             : 6U)
                                                            : 5U)
                                                           : 4U)
                                                          : 3U)
                                                         : 2U)
                                                        : 1U)
                                                       : 0U)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_13)
                                                       ? 
                                                      (0x1feU 
                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_283)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_285)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_287)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_289)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_291)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_293)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_295)
                                                                  ? 0U
                                                                  : 
                                                                 (0xc0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                                                     << 6U)))
                                                                 : 
                                                                (0xe0U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                                                    << 5U)))
                                                                : 
                                                               (0xf0U 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                                                   << 4U)))
                                                               : 
                                                              (0xf8U 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                                                  << 3U)))
                                                              : 
                                                             (0xfcU 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                                                 << 2U)))
                                                             : 
                                                            (0xfeU 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                                                << 1U)))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795)) 
                                                          << 1U))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__024put_data_data 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq20)) 
            & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq21)))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh15357)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_35)
                ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq19) 
                    << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq20) 
                                 << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq21)))
                : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BIT_31_80_EQ_INV_compute_p_8_BIT___05FETC___05F_d781)
                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh7943)
                                 : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_pp_8_BITS_30_TO_23_65_UL_ETC___05F_d793)
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BITS_30_TO_23_65_ULT_compute_p_8___05FETC___05F_d782)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq19)
                                         : (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq43)))
                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh7943))) 
                               << 0xfU)) | ((0x100U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890))
                                             ? ((0x7f80U 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh7967)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                                      >> 1U)))
                                             : ((0x7f80U 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh7967) 
                                                     - 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_14)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_269)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_271)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_273)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_275)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_277)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_279)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_281)
                                                              ? 8U
                                                              : 7U)
                                                             : 6U)
                                                            : 5U)
                                                           : 4U)
                                                          : 3U)
                                                         : 2U)
                                                        : 1U)
                                                       : 0U)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_14)
                                                       ? 
                                                      (0x1feU 
                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_269)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_271)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_273)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_275)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_277)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_279)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_281)
                                                                  ? 0U
                                                                  : 
                                                                 (0xc0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                                                     << 6U)))
                                                                 : 
                                                                (0xe0U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                                                    << 5U)))
                                                                : 
                                                               (0xf0U 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                                                   << 4U)))
                                                               : 
                                                              (0xf8U 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                                                  << 3U)))
                                                              : 
                                                             (0xfcU 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                                                 << 2U)))
                                                             : 
                                                            (0xfeU 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                                                << 1U)))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890)) 
                                                          << 1U))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890))))))));
}
