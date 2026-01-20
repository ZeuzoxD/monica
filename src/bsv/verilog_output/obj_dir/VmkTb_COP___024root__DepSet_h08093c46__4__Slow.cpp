// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_ATTR_COLD void VmkTb_COP___024root___stl_sequent__TOP__3(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___stl_sequent__TOP__3\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x200U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
        if ((0x100U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & 0x2aU);
        } else if ((0x80U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                            = (0xffU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17fU] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17fU] 
                                                     >> 0x17U)));
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                            = (0x7fU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17fU] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17fU] 
                                                     >> 0x10U)));
                                    } else {
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                            = (0xffU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17fU] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17fU] 
                                                     >> 7U)));
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                            = (0x7fU 
                                               & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17fU]);
                                    }
                                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17eU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17eU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17eU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17eU]);
                                }
                            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17dU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17dU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17dU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17dU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17cU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17cU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17cU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17cU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17cU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17cU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17cU]);
                            }
                        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17bU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17bU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17bU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17bU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17aU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17aU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17aU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17aU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17aU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17aU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17aU]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x179U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x179U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x179U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x179U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x179U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x179U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x179U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x178U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x178U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x178U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x178U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x178U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x178U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x178U]);
                        }
                    } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x177U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x177U] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x177U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x177U] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x177U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x177U] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x177U]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x176U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x176U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x176U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x176U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x176U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x176U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x176U]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x175U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x175U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x175U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x175U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x175U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x175U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x175U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x174U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x174U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x174U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x174U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x174U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x174U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x174U]);
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x173U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x173U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x173U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x173U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x173U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x173U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x173U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x172U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x172U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x172U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x172U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x172U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x172U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x172U]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x171U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x171U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x171U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x171U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x171U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x171U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x171U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x170U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x170U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x170U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x170U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x170U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x170U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x170U]);
                    }
                } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16fU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16fU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16fU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16fU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16eU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16eU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16eU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16eU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16eU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16eU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16eU]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16dU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16dU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16dU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16dU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16dU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16dU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16dU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16cU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16cU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16cU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16cU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16cU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16cU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16cU]);
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16bU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16bU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16bU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16bU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16bU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16bU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16bU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16aU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16aU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16aU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16aU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16aU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16aU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16aU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x169U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x169U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x169U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x169U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x169U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x169U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x169U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x168U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x168U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x168U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x168U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x168U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x168U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x168U]);
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x167U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x167U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x167U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x167U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x167U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x167U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x167U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x166U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x166U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x166U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x166U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x166U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x166U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x166U]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x165U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x165U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x165U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x165U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x165U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x165U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x165U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x164U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x164U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x164U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x164U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x164U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x164U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x164U]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x163U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x163U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x163U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x163U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x163U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x163U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x163U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x162U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x162U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x162U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x162U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x162U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x162U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x162U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x161U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x161U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x161U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x161U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x161U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x161U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x161U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x160U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x160U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x160U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x160U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x160U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x160U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x160U]);
                }
            } else if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15fU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15fU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15fU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15fU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15eU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15eU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15eU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15eU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15eU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15eU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15eU]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15dU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15dU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15dU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15dU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15dU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15dU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15dU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15cU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15cU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15cU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15cU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15cU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15cU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15cU]);
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15bU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15bU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15bU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15bU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15bU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15bU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15bU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15aU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15aU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15aU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15aU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15aU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15aU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15aU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x159U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x159U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x159U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x159U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x159U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x159U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x159U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x158U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x158U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x158U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x158U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x158U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x158U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x158U]);
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x157U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x157U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x157U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x157U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x157U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x157U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x157U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x156U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x156U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x156U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x156U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x156U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x156U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x156U]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x155U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x155U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x155U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x155U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x155U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x155U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x155U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x154U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x154U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x154U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x154U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x154U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x154U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x154U]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x153U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x153U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x153U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x153U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x153U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x153U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x153U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x152U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x152U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x152U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x152U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x152U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x152U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x152U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x151U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x151U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x151U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x151U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x151U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x151U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x151U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x150U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x150U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x150U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x150U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x150U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x150U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x150U]);
                }
            } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14fU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14eU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14dU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14cU]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14bU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14aU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x149U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x149U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x149U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x149U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x149U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x149U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x149U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x148U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x148U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x148U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x148U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x148U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x148U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x148U]);
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x147U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x147U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x147U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x147U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x147U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x147U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x147U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x146U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x146U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x146U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x146U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x146U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x146U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x146U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x145U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x145U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x145U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x145U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x145U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x145U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x145U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x144U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x144U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x144U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x144U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x144U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x144U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x144U]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x143U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x143U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x143U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x143U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x143U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x143U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x143U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x142U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x142U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x142U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x142U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x142U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x142U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x142U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x141U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x141U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x141U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x141U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x141U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x141U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x141U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x140U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x140U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x140U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x140U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x140U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x140U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x140U]);
            }
        } else if ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13fU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13fU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13fU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13fU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13eU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13eU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13eU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13eU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13eU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13eU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13eU]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13dU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13dU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13dU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13dU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13dU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13dU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13dU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13cU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13cU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13cU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13cU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13cU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13cU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13cU]);
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13bU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13bU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13bU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13bU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13bU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13bU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13bU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13aU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13aU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13aU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13aU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13aU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13aU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13aU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x139U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x139U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x139U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x139U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x139U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x139U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x139U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x138U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x138U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x138U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x138U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x138U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x138U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x138U]);
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x137U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x137U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x137U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x137U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x137U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x137U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x137U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x136U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x136U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x136U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x136U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x136U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x136U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x136U]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x135U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x135U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x135U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x135U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x135U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x135U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x135U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x134U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x134U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x134U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x134U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x134U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x134U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x134U]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x133U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x133U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x133U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x133U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x133U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x133U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x133U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x132U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x132U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x132U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x132U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x132U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x132U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x132U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x131U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x131U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x131U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x131U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x131U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x131U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x131U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x130U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x130U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x130U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x130U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x130U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x130U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x130U]);
                }
            } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12fU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12eU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12dU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12cU]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12bU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12aU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x129U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x129U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x129U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x129U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x129U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x129U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x129U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x128U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x128U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x128U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x128U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x128U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x128U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x128U]);
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x127U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x127U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x127U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x127U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x127U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x127U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x127U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x126U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x126U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x126U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x126U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x126U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x126U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x126U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x125U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x125U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x125U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x125U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x125U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x125U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x125U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x124U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x124U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x124U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x124U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x124U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x124U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x124U]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x123U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x123U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x123U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x123U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x123U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x123U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x123U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x122U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x122U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x122U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x122U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x122U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x122U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x122U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x121U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x121U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x121U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x121U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x121U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x121U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x121U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x120U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x120U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x120U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x120U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x120U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x120U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x120U]);
            }
        } else if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11fU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11eU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11dU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11cU]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11bU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11aU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x119U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x119U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x119U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x119U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x119U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x119U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x119U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x118U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x118U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x118U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x118U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x118U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x118U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x118U]);
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x117U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x117U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x117U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x117U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x117U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x117U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x117U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x116U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x116U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x116U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x116U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x116U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x116U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x116U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x115U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x115U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x115U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x115U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x115U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x115U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x115U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x114U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x114U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x114U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x114U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x114U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x114U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x114U]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x113U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x113U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x113U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x113U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x113U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x113U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x113U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x112U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x112U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x112U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x112U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x112U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x112U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x112U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x111U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x111U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x111U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x111U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x111U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x111U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x111U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x110U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x110U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x110U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x110U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x110U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x110U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x110U]);
            }
        } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10fU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10eU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10dU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10cU]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10bU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10aU]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x109U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x109U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x109U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x109U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x109U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x109U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x109U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x108U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x108U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x108U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x108U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x108U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x108U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x108U]);
            }
        } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x107U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x107U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x107U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x107U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x107U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x107U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x107U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x106U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x106U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x106U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x106U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x106U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x106U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x106U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x105U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x105U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x105U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x105U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x105U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x105U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x105U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x104U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x104U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x104U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x104U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x104U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x104U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x104U]);
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x103U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x103U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x103U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x103U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x103U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x103U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x103U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x102U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x102U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x102U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x102U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x102U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x102U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x102U]);
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x101U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x101U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x101U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x101U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x101U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x101U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x101U]);
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x100U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x100U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x100U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x100U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x100U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x100U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x100U]);
        }
    } else if ((0x100U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
        if ((0x80U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                            = (0xffU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xffU] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xffU] 
                                                     >> 0x17U)));
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                            = (0x7fU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xffU] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xffU] 
                                                     >> 0x10U)));
                                    } else {
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                            = (0xffU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xffU] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xffU] 
                                                     >> 7U)));
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                            = (0x7fU 
                                               & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xffU]);
                                    }
                                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfeU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfeU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfeU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfeU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfeU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfeU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfeU]);
                                }
                            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfdU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfdU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfdU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfdU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfdU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfdU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfdU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfcU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfcU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfcU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfcU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfcU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfcU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfcU]);
                            }
                        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfbU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfbU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfbU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfbU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfbU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfbU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfbU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfaU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfaU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfaU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfaU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfaU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfaU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfaU]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf9U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf9U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf9U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf9U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf9U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf9U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf9U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf8U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf8U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf8U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf8U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf8U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf8U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf8U]);
                        }
                    } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf7U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf7U] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf7U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf7U] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf7U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf7U] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf7U]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf6U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf6U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf6U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf6U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf6U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf6U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf6U]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf5U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf5U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf5U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf5U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf5U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf5U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf5U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf4U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf4U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf4U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf4U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf4U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf4U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf4U]);
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf3U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf3U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf3U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf3U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf3U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf3U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf3U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf2U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf2U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf2U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf2U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf2U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf2U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf2U]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf1U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf1U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf1U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf1U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf1U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf1U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf1U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf0U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf0U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf0U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf0U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf0U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf0U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf0U]);
                    }
                } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xefU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xefU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xefU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xefU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xefU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xefU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xefU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeeU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeeU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeeU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeeU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeeU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeeU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeeU]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xedU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xedU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xedU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xedU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xedU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xedU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xedU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xecU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xecU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xecU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xecU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xecU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xecU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xecU]);
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xebU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xebU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xebU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xebU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xebU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xebU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xebU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeaU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeaU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeaU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeaU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeaU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeaU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeaU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe9U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe9U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe9U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe9U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe9U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe9U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe9U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe8U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe8U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe8U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe8U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe8U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe8U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe8U]);
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe7U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe7U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe7U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe7U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe7U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe7U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe7U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe6U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe6U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe6U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe6U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe6U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe6U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe6U]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe5U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe5U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe5U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe5U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe5U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe5U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe5U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe4U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe4U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe4U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe4U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe4U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe4U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe4U]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe3U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe3U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe3U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe3U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe3U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe3U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe3U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe2U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe2U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe2U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe2U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe2U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe2U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe2U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe1U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe1U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe1U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe1U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe1U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe1U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe1U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe0U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe0U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe0U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe0U]);
                }
            } else if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdfU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdfU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdfU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdfU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdfU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdfU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdfU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdeU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdeU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdeU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdeU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdeU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdeU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdeU]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xddU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xddU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xddU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xddU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xddU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xddU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xddU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdcU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdcU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdcU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdcU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdcU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdcU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdcU]);
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdbU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdbU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdbU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdbU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdbU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdbU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdbU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdaU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdaU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdaU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdaU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdaU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdaU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdaU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd9U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd9U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd9U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd9U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd9U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd9U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd9U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd8U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd8U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd8U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd8U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd8U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd8U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd8U]);
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd7U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd7U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd7U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd7U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd7U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd7U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd7U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd6U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd6U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd6U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd6U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd6U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd6U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd6U]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd5U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd5U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd5U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd5U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd5U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd5U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd5U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd4U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd4U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd4U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd4U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd4U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd4U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd4U]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd3U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd3U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd3U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd3U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd3U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd3U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd3U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd2U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd2U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd2U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd2U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd2U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd2U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd2U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd1U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd1U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd1U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd1U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd1U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd1U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd1U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd0U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd0U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd0U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd0U]);
                }
            } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcfU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcfU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcfU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcfU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcfU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcfU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcfU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xceU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xceU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xceU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xceU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xceU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xceU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xceU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcdU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcdU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcdU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcdU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcdU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcdU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcdU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xccU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xccU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xccU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xccU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xccU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xccU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xccU]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcbU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcbU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcbU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcbU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcbU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcbU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcbU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcaU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcaU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcaU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcaU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcaU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcaU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcaU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc9U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc9U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc9U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc9U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc9U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc9U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc9U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc8U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc8U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc8U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc8U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc8U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc8U]);
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc7U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc7U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc7U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc7U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc7U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc7U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc7U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc6U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc6U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc6U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc6U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc6U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc6U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc6U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc5U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc5U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc5U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc5U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc5U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc5U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc5U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc4U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc4U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc4U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc4U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc4U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc4U]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc3U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc3U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc3U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc3U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc3U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc3U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc3U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc2U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc2U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc2U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc2U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc2U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc1U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc1U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc1U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc1U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc1U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc1U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc0U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc0U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc0U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc0U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc0U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc0U]);
            }
        } else if ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbfU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbfU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbfU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbfU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbfU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbfU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbfU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbeU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbeU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbeU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbeU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbeU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbeU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbeU]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbdU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbdU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbdU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbdU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbdU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbdU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbdU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbcU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbcU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbcU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbcU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbcU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbcU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbcU]);
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbbU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbbU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbbU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbbU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbbU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbbU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbbU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbaU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbaU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbaU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbaU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbaU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbaU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbaU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb9U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb9U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb9U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb9U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb9U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb9U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb9U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb8U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb8U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb8U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb8U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb8U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb8U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb8U]);
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb7U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb7U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb7U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb7U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb7U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb7U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb7U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb6U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb6U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb6U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb6U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb6U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb6U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb6U]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb5U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb5U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb5U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb5U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb5U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb5U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb5U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb4U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb4U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb4U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb4U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb4U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb4U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb4U]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb3U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb3U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb3U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb3U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb3U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb3U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb3U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb2U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb2U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb2U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb2U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb2U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb2U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb2U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb1U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb1U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb1U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb1U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb1U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb1U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb1U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb0U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb0U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb0U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb0U]);
                }
            } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xafU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xafU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xafU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xafU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xafU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xafU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xafU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaeU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaeU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaeU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaeU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaeU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaeU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaeU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xadU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xadU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xadU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xadU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xadU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xadU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xadU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xacU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xacU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xacU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xacU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xacU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xacU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xacU]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xabU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xabU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xabU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xabU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xabU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xabU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xabU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaaU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaaU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaaU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaaU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaaU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaaU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaaU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa9U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa9U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa9U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa9U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa9U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa9U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa9U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa8U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa8U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa8U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa8U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa8U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa8U]);
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa7U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa7U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa7U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa7U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa7U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa7U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa7U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa6U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa6U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa6U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa6U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa6U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa6U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa6U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa5U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa5U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa5U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa5U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa5U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa5U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa5U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa4U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa4U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa4U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa4U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa4U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa4U]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa3U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa3U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa3U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa3U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa3U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa3U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa3U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa2U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa2U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa2U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa2U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa2U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa1U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa1U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa1U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa1U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa1U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa1U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa0U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa0U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa0U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa0U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa0U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa0U]);
            }
        } else if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9fU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9eU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9dU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9cU]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9bU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9aU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x99U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x99U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x99U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x99U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x99U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x99U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x99U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x98U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x98U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x98U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x98U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x98U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x98U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x98U]);
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x97U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x97U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x97U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x97U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x97U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x97U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x97U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x96U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x96U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x96U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x96U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x96U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x96U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x96U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x95U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x95U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x95U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x95U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x95U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x95U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x95U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x94U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x94U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x94U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x94U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x94U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x94U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x94U]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x93U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x93U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x93U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x93U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x93U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x93U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x93U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x92U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x92U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x92U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x92U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x92U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x92U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x92U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x91U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x91U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x91U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x91U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x91U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x91U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x91U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x90U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x90U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x90U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x90U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x90U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x90U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x90U]);
            }
        } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8fU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8eU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8dU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8cU]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8bU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8aU]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x89U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x89U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x89U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x89U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x89U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x89U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x89U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x88U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x88U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x88U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x88U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x88U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x88U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x88U]);
            }
        } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x87U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x87U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x87U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x87U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x87U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x87U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x87U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x86U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x86U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x86U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x86U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x86U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x86U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x86U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x85U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x85U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x85U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x85U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x85U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x85U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x85U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x84U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x84U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x84U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x84U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x84U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x84U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x84U]);
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x83U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x83U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x83U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x83U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x83U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x83U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x83U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x82U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x82U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x82U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x82U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x82U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x82U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x82U]);
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x81U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x81U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x81U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x81U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x81U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x81U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x81U]);
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x80U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x80U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x80U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x80U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x80U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x80U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x80U]);
        }
    } else if ((0x80U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
        if ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7fU] 
                                               >> 0x17U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7fU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7fU] 
                                               >> 7U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7fU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7eU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7eU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7eU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7eU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7eU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7eU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7eU]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7dU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7dU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7dU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7dU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7dU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7dU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7dU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7cU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7cU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7cU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7cU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7cU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7cU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7cU]);
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7bU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7bU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7bU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7bU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7bU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7bU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7bU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7aU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7aU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7aU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7aU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7aU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7aU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7aU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x79U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x79U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x79U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x79U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x79U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x79U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x79U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x78U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x78U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x78U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x78U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x78U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x78U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x78U]);
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x77U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x77U] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x77U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x77U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x77U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x77U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x77U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x76U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x76U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x76U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x76U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x76U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x76U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x76U]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x75U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x75U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x75U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x75U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x75U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x75U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x75U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x74U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x74U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x74U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x74U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x74U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x74U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x74U]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x73U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x73U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x73U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x73U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x73U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x73U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x73U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x72U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x72U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x72U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x72U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x72U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x72U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x72U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x71U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x71U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x71U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x71U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x71U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x71U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x71U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x70U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x70U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x70U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x70U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x70U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x70U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x70U]);
                }
            } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6fU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6eU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6dU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6cU]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6bU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6aU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x69U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x69U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x69U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x69U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x69U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x69U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x69U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x68U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x68U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x68U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x68U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x68U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x68U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x68U]);
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x67U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x67U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x67U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x67U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x67U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x67U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x67U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x66U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x66U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x66U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x66U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x66U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x66U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x66U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x65U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x65U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x65U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x65U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x65U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x65U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x65U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x64U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x64U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x64U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x64U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x64U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x64U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x64U]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x63U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x63U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x63U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x63U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x63U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x63U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x63U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x62U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x62U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x62U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x62U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x62U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x62U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x62U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x61U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x61U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x61U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x61U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x61U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x61U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x61U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x60U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x60U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x60U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x60U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x60U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x60U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x60U]);
            }
        } else if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5fU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5eU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5dU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5cU]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5bU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5aU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x59U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x59U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x59U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x59U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x59U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x59U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x59U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x58U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x58U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x58U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x58U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x58U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x58U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x58U]);
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x57U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x57U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x57U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x57U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x57U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x57U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x57U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x56U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x56U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x56U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x56U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x56U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x56U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x56U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x55U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x55U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x55U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x55U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x55U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x55U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x55U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x54U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x54U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x54U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x54U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x54U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x54U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x54U]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x53U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x53U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x53U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x53U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x53U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x53U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x53U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x52U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x52U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x52U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x52U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x52U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x52U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x52U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x51U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x51U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x51U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x51U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x51U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x51U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x51U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x50U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x50U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x50U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x50U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x50U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x50U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x50U]);
            }
        } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4fU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4eU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4dU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4cU]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4bU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4aU]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x49U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x49U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x49U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x49U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x49U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x49U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x49U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x48U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x48U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x48U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x48U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x48U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x48U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x48U]);
            }
        } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x47U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x47U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x47U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x47U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x47U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x47U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x47U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x46U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x46U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x46U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x46U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x46U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x46U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x46U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x45U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x45U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x45U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x45U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x45U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x45U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x45U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x44U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x44U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x44U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x44U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x44U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x44U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x44U]);
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x43U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x43U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x43U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x43U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x43U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x43U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x43U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x42U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x42U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x42U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x42U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x42U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x42U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x42U]);
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x41U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x41U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x41U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x41U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x41U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x41U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x41U]);
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x40U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x40U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x40U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x40U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x40U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x40U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x40U]);
        }
    } else if ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
        if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3fU] 
                                                   >> 0x17U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3fU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3eU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3dU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3cU]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3bU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3aU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x39U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x39U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x39U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x39U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x39U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x39U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x39U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x38U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x38U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x38U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x38U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x38U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x38U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x38U]);
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x37U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x37U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x37U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x37U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x37U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x37U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x37U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x36U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x36U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x36U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x36U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x36U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x36U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x36U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x35U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x35U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x35U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x35U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x35U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x35U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x35U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x34U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x34U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x34U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x34U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x34U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x34U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x34U]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x33U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x33U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x33U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x33U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x33U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x33U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x33U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x32U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x32U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x32U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x32U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x32U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x32U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x32U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x31U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x31U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x31U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x31U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x31U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x31U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x31U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x30U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x30U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x30U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x30U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x30U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x30U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x30U]);
            }
        } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2fU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2eU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2dU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2cU]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2bU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2aU]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x29U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x29U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x29U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x29U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x29U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x29U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x29U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x28U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x28U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x28U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x28U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x28U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x28U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x28U]);
            }
        } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x27U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x27U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x27U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x27U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x27U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x27U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x27U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x26U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x26U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x26U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x26U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x26U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x26U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x26U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x25U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x25U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x25U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x25U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x25U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x25U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x25U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x24U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x24U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x24U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x24U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x24U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x24U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x24U]);
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x23U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x23U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x23U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x23U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x23U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x23U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x23U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x22U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x22U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x22U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x22U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x22U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x22U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x22U]);
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x21U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x21U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x21U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x21U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x21U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x21U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x21U]);
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x20U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x20U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x20U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x20U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x20U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x20U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x20U]);
        }
    } else if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
        if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1fU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1eU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1dU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1cU]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1bU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1aU]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x19U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x19U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x19U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x19U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x18U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x18U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x18U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x18U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x18U]);
            }
        } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14U]);
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12U]);
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11U]);
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10U]);
        }
    } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
        if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeU]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdU]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcU]);
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbU]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaU]);
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[9U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[9U]);
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[8U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[8U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[8U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[8U]);
        }
    } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[7U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[7U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[6U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[6U]);
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[5U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[5U]);
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[4U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[4U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[4U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[4U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[4U]);
        }
    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[3U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[3U]);
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[2U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[2U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[2U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[2U]);
        }
    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[1U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[1U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[1U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[1U]);
        }
    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index), 3U))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0U] 
                                      >> 0x10U)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0U]);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__init_counter__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__brams_ready)) 
           & (0xaU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__init_counter)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_processing_complete__024D_IN 
        = ((4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_state)) 
           & (0xbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_started__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_started)) 
           & (5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_started__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_started)) 
           & (0xbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete_5907_AND_readback_values_598_ETC___05F_d48825 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete) 
           & (IData)(((((((((((((((((((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0x3f803f80U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0U]) 
                                                                                & (0x3f803f80U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[1U])) 
                                                                                & (0x41603f80U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U])) 
                                                                                & (0x41604160U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U])) 
                                                                                & (0x41604160U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U])) 
                                                                                & (0x42184218U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])) 
                                                                                & (0x42184218U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U])) 
                                                                                & (0x40004218U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[7U])) 
                                                                                & (0x40004000U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[8U])) 
                                                                                & (0x40004000U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U])) 
                                                                                & (0x41804180U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU])) 
                                                                                & (0x41804180U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU])) 
                                                                                & (0x42284180U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xcU])) 
                                                                                & (0x42284228U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xdU])) 
                                                                                & (0x42284228U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU])) 
                                                                                & (0x40404040U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU])) 
                                                                                & (0x40404040U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U])) 
                                                                                & (0x41904040U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x11U])) 
                                                                                & (0x41904190U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x12U])) 
                                                                                & (0x41904190U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U])) 
                                                                                & (0x42384238U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U])) 
                                                                                & (0x42384238U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U])) 
                                                                                & (0x40804238U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x16U])) 
                                                                                & (0x40804080U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x17U])) 
                                                                                & (0x40804080U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U])) 
                                                                                & (0x41a041a0U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U])) 
                                                                                & (0x41a041a0U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU])) 
                                                                                & (0x424841a0U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1bU])) 
                                                                                & (0x42484248U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1cU])) 
                                                                                & (0x42484248U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU])) 
                                                                                & (0x40a040a0U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU])) 
                                                                                & (0x40a040a0U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU])) 
                                                                                & (0x421040a0U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x20U])) 
                                                                                & (0x42104210U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x21U])) 
                                                                                & (0x42104210U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U])) 
                                                                                & (0x42884288U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U])) 
                                                                                & (0x42884288U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U])) 
                                                                                & (0x41004288U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x25U])) 
                                                                                & (0x41004100U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x26U])) 
                                                                                & (0x41004100U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U])) 
                                                                               & (0x42204220U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U])) 
                                                                              & (0x42204220U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U])) 
                                                                             & (0x42984220U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2aU])) 
                                                                            & (0x42984298U 
                                                                               == 
                                                                               vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2bU])) 
                                                                           & (0x42984298U 
                                                                              == 
                                                                              vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2cU])) 
                                                                          & (0x41104110U 
                                                                             == 
                                                                             vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2dU])) 
                                                                         & (0x41104110U 
                                                                            == 
                                                                            vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2eU])) 
                                                                        & (0x42304110U 
                                                                           == 
                                                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2fU])) 
                                                                       & (0x42304230U 
                                                                          == 
                                                                          vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x30U])) 
                                                                      & (0x42304230U 
                                                                         == 
                                                                         vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x31U])) 
                                                                     & (0x42a042a0U 
                                                                        == 
                                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x32U])) 
                                                                    & (0x42a042a0U 
                                                                       == 
                                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x33U])) 
                                                                   & (0x412042a0U 
                                                                      == 
                                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x34U])) 
                                                                  & (0x41204120U 
                                                                     == 
                                                                     vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x35U])) 
                                                                 & (0x41204120U 
                                                                    == 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x36U])) 
                                                                & (0x42404240U 
                                                                   == 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x37U])) 
                                                               & (0x42404240U 
                                                                  == 
                                                                  vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x38U])) 
                                                              & (0x42a84240U 
                                                                 == 
                                                                 vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x39U])) 
                                                             & (0x42a842a8U 
                                                                == 
                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3aU])) 
                                                            & (0x42a842a8U 
                                                               == 
                                                               vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3bU])) 
                                                           & (0x41304130U 
                                                              == 
                                                              vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3cU])) 
                                                          & (0x41304130U 
                                                             == 
                                                             vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3dU])) 
                                                         & (0x42504130U 
                                                            == 
                                                            vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3eU])) 
                                                        & (0x42504250U 
                                                           == 
                                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3fU])) 
                                                       & (0x42504250U 
                                                          == 
                                                          vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x40U])) 
                                                      & (0x42b042b0U 
                                                         == 
                                                         vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x41U])) 
                                                     & (0x42b042b0U 
                                                        == 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x42U])) 
                                                    & (0x414042b0U 
                                                       == 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x43U])) 
                                                   & (0x41404140U 
                                                      == 
                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x44U])) 
                                                  & (0x41404140U 
                                                     == 
                                                     vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x45U])) 
                                                 & (0x42604260U 
                                                    == 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x46U])) 
                                                & (0x42604260U 
                                                   == 
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x47U])) 
                                               & (0x42b84260U 
                                                  == 
                                                  vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x48U])) 
                                              & (0x42b842b8U 
                                                 == 
                                                 vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x49U])) 
                                             & (0x42b842b8U 
                                                == 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4aU])) 
                                            & (0x41504150U 
                                               == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4bU])) 
                                           & (0x41504150U 
                                              == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4cU])) 
                                          & (0x42704150U 
                                             == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4dU])) 
                                         & (0x42704270U 
                                            == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4eU])) 
                                        & (0x42704270U 
                                           == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4fU])) 
                                       & (0x42c042c0U 
                                          == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x50U])) 
                                      & (0x42c042c0U 
                                         == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x51U])) 
                                     & (0x40a042c0U 
                                        == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x52U])) 
                                    & (0x40a040a0U 
                                       == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x53U])) 
                                   & (0x40a040a0U == 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x54U])) 
                                  & (0x41b041b0U == 
                                     vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x55U])) 
                                 & (0x41b041b0U == 
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x56U])) 
                                & (0x426041b0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x57U])) 
                               & (0x42604260U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x58U])) 
                              & (0x42604260U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x59U])) 
                             & (0x40c040c0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5aU])) 
                            & (0x40c040c0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5bU])) 
                           & (0x420040c0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5cU])) 
                          & (0x42004200U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5dU])) 
                         & (0x42004200U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5eU])) 
                        & (0x42684268U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5fU])) 
                       & (0x42684268U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x60U])) 
                      & (0x4268U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x61U]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_valid__024EN 
        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage4) 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__result_valid__024EN 
        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__stage4 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__result_valid)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_27__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_27__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_27__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_28__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_28__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_28__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_29__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_29__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_29__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_30__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_30__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_30__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_31__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_31__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_31__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_32__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_32__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_32__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_33__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_33__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_33__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_34__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_34__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_34__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_35__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_35__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_35__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_36__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_36__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_36__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_37__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_37__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_37__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_38__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_38__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_38__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_39__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_39__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_39__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_40__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_40__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_40__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_41__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_41__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_41__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_42__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_42__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_42__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_43__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_43__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_43__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_44__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_44__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_44__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_45__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_45__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_45__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_46__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_46__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_46__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_47__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_47__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_47__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_48__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_48__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_48__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_49__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_49__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_49__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_50__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_50__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_50__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_51__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_51__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_51__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_52__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_52__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_52__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_53__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_53__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_53__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_54__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_54__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_54__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_55__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_55__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_55__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_56__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_56__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_56__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_57__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_57__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_57__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_58__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_58__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_58__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_59__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_59__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_59__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_60__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_60__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_60__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_initDelay__024EN 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady)) 
           & (2U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_initDelay)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__IF_s2_exp_4_EQ_129_6_THEN_IF_s2_sign_7_THEN_0___05FETC___05F_d87 
        = (0x7fU & ((0x7cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_exp))
                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_sign)
                         ? (0x70U | (0xfU & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_man) 
                                                >> 3U))))
                         : (8U | (7U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_man) 
                                        >> 4U)))) : 
                    ((0x7dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_exp))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_sign)
                          ? (0x60U | (0x1fU & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_man) 
                                                  >> 2U))))
                          : (0x10U | (0xfU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_man) 
                                              >> 3U))))
                      : ((0x7eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_exp))
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_sign)
                              ? (0x3fU & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_man) 
                                             >> 1U)))
                              : (0x20U | (0x1fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_man) 
                                                   >> 2U))))
                          : ((0x7fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_exp))
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_sign)
                                  ? (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_man))
                                  : (0x40U | (0x3fU 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_man) 
                                                 >> 1U))))
                              : ((0x80U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_exp))
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_sign)
                                      ? (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_man))
                                      : (0x60U | (0x1fU 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_man) 
                                                     >> 2U))))
                                  : ((0x81U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_exp))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_sign)
                                          ? 0U : (0x70U 
                                                  | (0xfU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_man) 
                                                        >> 3U))))
                                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_sign)
                                          ? (0x78U 
                                             | (7U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_man) 
                                                    >> 4U))))
                                          : (4U | (3U 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s2_man) 
                                                      >> 5U)))))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__IF_s2_exp_4_EQ_129_6_THEN_IF_s2_sign_7_THEN_0___05FETC___05F_d87 
        = (0x7fU & ((0x7cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_exp))
                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_sign)
                         ? (0x70U | (0xfU & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_man) 
                                                >> 3U))))
                         : (8U | (7U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_man) 
                                        >> 4U)))) : 
                    ((0x7dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_exp))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_sign)
                          ? (0x60U | (0x1fU & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_man) 
                                                  >> 2U))))
                          : (0x10U | (0xfU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_man) 
                                              >> 3U))))
                      : ((0x7eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_exp))
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_sign)
                              ? (0x3fU & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_man) 
                                             >> 1U)))
                              : (0x20U | (0x1fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_man) 
                                                   >> 2U))))
                          : ((0x7fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_exp))
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_sign)
                                  ? (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_man))
                                  : (0x40U | (0x3fU 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_man) 
                                                 >> 1U))))
                              : ((0x80U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_exp))
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_sign)
                                      ? (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_man))
                                      : (0x60U | (0x1fU 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_man) 
                                                     >> 2U))))
                                  : ((0x81U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_exp))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_sign)
                                          ? 0U : (0x70U 
                                                  | (0xfU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_man) 
                                                        >> 3U))))
                                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_sign)
                                          ? (0x78U 
                                             | (7U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_man) 
                                                    >> 4U))))
                                          : (4U | (3U 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s2_man) 
                                                      >> 5U)))))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__IF_s2_exp_4_EQ_129_6_THEN_IF_s2_sign_7_THEN_0___05FETC___05F_d87 
        = (0x7fU & ((0x7cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_exp))
                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_sign)
                         ? (0x70U | (0xfU & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_man) 
                                                >> 3U))))
                         : (8U | (7U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_man) 
                                        >> 4U)))) : 
                    ((0x7dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_exp))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_sign)
                          ? (0x60U | (0x1fU & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_man) 
                                                  >> 2U))))
                          : (0x10U | (0xfU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_man) 
                                              >> 3U))))
                      : ((0x7eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_exp))
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_sign)
                              ? (0x3fU & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_man) 
                                             >> 1U)))
                              : (0x20U | (0x1fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_man) 
                                                   >> 2U))))
                          : ((0x7fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_exp))
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_sign)
                                  ? (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_man))
                                  : (0x40U | (0x3fU 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_man) 
                                                 >> 1U))))
                              : ((0x80U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_exp))
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_sign)
                                      ? (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_man))
                                      : (0x60U | (0x1fU 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_man) 
                                                     >> 2U))))
                                  : ((0x81U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_exp))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_sign)
                                          ? 0U : (0x70U 
                                                  | (0xfU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_man) 
                                                        >> 3U))))
                                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_sign)
                                          ? (0x78U 
                                             | (7U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_man) 
                                                    >> 4U))))
                                          : (4U | (3U 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s2_man) 
                                                      >> 5U)))))))))));
}
