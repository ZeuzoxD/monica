// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__105(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__105\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
        if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                = (0x7fU & 0x2aU);
        } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17dU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17dU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17dU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17eU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17eU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17eU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17eU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x179U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x179U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x179U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x179U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x179U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x179U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x179U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17aU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17aU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17aU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17aU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17aU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17aU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17aU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17bU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17bU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17bU] 
                                               >> 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x175U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x175U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x175U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x175U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x175U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x175U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x175U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x176U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x176U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x176U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x176U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x176U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x176U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x176U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x177U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x177U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x177U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x177U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x177U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x177U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x177U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x171U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x171U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x171U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x171U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x171U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x171U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x171U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x172U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x172U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x172U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x172U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x172U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x172U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x172U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x173U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x173U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x173U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x173U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x173U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x173U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x173U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16fU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16fU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16fU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16fU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16fU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16fU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16fU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x169U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x169U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x169U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x169U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x169U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x169U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x169U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16aU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16aU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16bU] 
                                           >> 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x165U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x165U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x165U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x165U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x165U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x165U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x165U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x166U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x166U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x166U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x166U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x166U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x166U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x166U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x167U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x167U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x167U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x167U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x167U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x167U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x167U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x161U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x161U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x161U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x161U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x161U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x161U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x161U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x162U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x162U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x162U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x162U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x162U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x162U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x162U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x163U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x163U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x163U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x163U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x163U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x163U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x163U] 
                                                  >> 0x10U)));
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15fU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15fU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15fU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15fU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15fU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15fU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15fU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x159U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x159U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x159U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x159U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x159U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x159U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x159U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15aU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15aU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15bU] 
                                           >> 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x155U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x155U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x155U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x155U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x155U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x155U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x155U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x156U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x156U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x156U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x156U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x156U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x156U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x156U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x157U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x157U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x157U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x157U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x157U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x157U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x157U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x151U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x151U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x151U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x151U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x151U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x151U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x151U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x152U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x152U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x152U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x152U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x152U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x152U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x152U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x153U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x153U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x153U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x153U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x153U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x153U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x153U] 
                                                  >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14fU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x149U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x149U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x149U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x149U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x149U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x149U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x149U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14bU] 
                                                  >> 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x145U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x145U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x145U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x145U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x145U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x145U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x145U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x146U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x146U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x146U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x146U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x146U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x146U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x146U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x147U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x147U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x147U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x147U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x147U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x147U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x147U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x141U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x141U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x141U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x141U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x141U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x141U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x141U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x142U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x142U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x142U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x142U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x142U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x142U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x142U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x143U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x143U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x143U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x143U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x143U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x143U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x143U] 
                                              >> 0x10U)));
            }
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13fU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13fU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13fU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13fU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13fU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13fU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13fU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x139U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x139U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x139U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x139U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x139U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x139U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x139U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13aU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13aU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13bU] 
                                           >> 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x135U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x135U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x135U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x135U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x135U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x135U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x135U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x136U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x136U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x136U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x136U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x136U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x136U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x136U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x137U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x137U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x137U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x137U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x137U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x137U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x137U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x131U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x131U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x131U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x131U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x131U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x131U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x131U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x132U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x132U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x132U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x132U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x132U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x132U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x132U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x133U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x133U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x133U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x133U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x133U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x133U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x133U] 
                                                  >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12fU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x129U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x129U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x129U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x129U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x129U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x129U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x129U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12bU] 
                                                  >> 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x125U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x125U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x125U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x125U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x125U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x125U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x125U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x126U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x126U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x126U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x126U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x126U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x126U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x126U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x127U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x127U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x127U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x127U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x127U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x127U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x127U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x121U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x121U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x121U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x121U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x121U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x121U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x121U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x122U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x122U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x122U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x122U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x122U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x122U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x122U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x123U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x123U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x123U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x123U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x123U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x123U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x123U] 
                                              >> 0x10U)));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11fU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x119U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x119U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x119U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x119U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x119U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x119U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x119U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11bU] 
                                                  >> 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x115U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x115U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x115U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x115U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x115U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x115U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x115U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x116U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x116U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x116U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x116U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x116U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x116U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x116U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x117U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x117U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x117U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x117U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x117U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x117U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x117U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x111U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x111U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x111U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x111U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x111U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x111U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x111U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x112U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x112U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x112U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x112U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x112U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x112U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x112U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x113U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x113U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x113U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x113U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x113U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x113U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x113U] 
                                              >> 0x10U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10fU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x109U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x109U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x109U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x109U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x109U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x109U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x109U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10bU] 
                                              >> 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x105U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x105U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x105U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x105U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x105U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x105U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x105U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x106U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x106U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x106U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x106U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x106U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x106U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x106U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x107U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x107U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x107U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x107U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x107U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x107U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x107U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x101U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x101U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x101U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x101U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x101U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x101U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x101U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x102U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x102U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x102U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x102U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x102U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x102U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x102U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x103U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x103U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x103U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x103U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x103U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x103U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x103U] 
                                          >> 0x10U)));
        }
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index) 
                               >> 5U))) && (1U & ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17dU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x179U] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x175U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x171U] 
                                                       >> 0x1fU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16dU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x169U] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x165U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x161U] 
                                                       >> 0x1fU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15dU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x159U] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x155U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x151U] 
                                                       >> 0x1fU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14dU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x149U] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x145U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x141U] 
                                                       >> 0x1fU)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13dU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x139U] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x135U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x131U] 
                                                       >> 0x1fU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12dU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x129U] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x125U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x121U] 
                                                       >> 0x1fU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11dU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x119U] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x115U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x111U] 
                                                       >> 0x1fU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10dU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x109U] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x105U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x101U] 
                                                       >> 0x1fU)))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index) 
                               >> 5U))) && (1U & ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17eU] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17aU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x176U] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x172U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16eU] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16aU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x166U] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x162U] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15eU] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15aU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x156U] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x152U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14eU] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14aU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x146U] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x142U] 
                                                       >> 0xfU)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13eU] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13aU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x136U] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x132U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12eU] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12aU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x126U] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x122U] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11eU] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11aU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x116U] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x112U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10eU] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10aU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x106U] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x102U] 
                                                       >> 0xfU)))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index) 
                               >> 5U))) && (1U & ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17eU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17aU] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x176U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x172U] 
                                                       >> 0x1fU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16eU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16aU] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x166U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x162U] 
                                                       >> 0x1fU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15eU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15aU] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x156U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x152U] 
                                                       >> 0x1fU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14eU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14aU] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x146U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x142U] 
                                                       >> 0x1fU)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13eU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13aU] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x136U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x132U] 
                                                       >> 0x1fU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12eU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12aU] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x126U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x122U] 
                                                       >> 0x1fU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11eU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11aU] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x116U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x112U] 
                                                       >> 0x1fU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10eU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10aU] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x106U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x102U] 
                                                       >> 0x1fU)))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index) 
                               >> 5U))) && (1U & ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17fU] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17bU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x177U] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x173U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16fU] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16bU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x167U] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x163U] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15fU] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15bU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x157U] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x153U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14fU] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14bU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x147U] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x143U] 
                                                       >> 0xfU)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13fU] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13bU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x137U] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x133U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12fU] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12bU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x127U] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x123U] 
                                                       >> 0xfU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11fU] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11bU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x117U] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x113U] 
                                                       >> 0xfU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10fU] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10bU] 
                                                       >> 0xfU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x107U] 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x103U] 
                                                       >> 0xfU)))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index) 
                               >> 5U))) && (1U & ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17fU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17bU] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x177U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x173U] 
                                                       >> 0x1fU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16fU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16bU] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x167U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x163U] 
                                                       >> 0x1fU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15fU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15bU] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x157U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x153U] 
                                                       >> 0x1fU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14fU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x14bU] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x147U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x143U] 
                                                       >> 0x1fU)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13fU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13bU] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x137U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x133U] 
                                                       >> 0x1fU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12fU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12bU] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x127U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x123U] 
                                                       >> 0x1fU))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11fU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11bU] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x117U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x113U] 
                                                       >> 0x1fU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10fU] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x10bU] 
                                                       >> 0x1fU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))
                                                       ? 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x107U] 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x103U] 
                                                       >> 0x1fU)))))))));
    } else if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfdU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfdU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfdU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfdU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfdU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfdU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfdU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfdU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfeU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfeU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfeU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfeU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfeU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfeU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfeU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfeU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfeU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xffU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xffU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xffU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xffU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xffU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xffU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xffU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xffU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xffU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf9U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf9U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf9U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf9U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf9U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf9U] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf9U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf9U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfaU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfaU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfaU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfaU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfaU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfaU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfaU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfaU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfaU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfbU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfbU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfbU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfbU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfbU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfbU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfbU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfbU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfbU] 
                                               >> 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf5U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf5U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf5U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf5U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf5U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf5U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf5U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf5U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf6U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf6U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf6U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf6U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf6U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf6U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf6U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf6U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf6U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf7U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf7U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf7U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf7U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf7U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf7U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf7U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf7U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf7U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf1U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf1U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf1U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf1U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf1U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf1U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf1U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf1U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf2U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf2U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf2U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf2U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf2U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf2U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf2U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf2U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf2U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf3U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf3U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf3U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf3U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf3U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf3U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf3U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf3U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xf3U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xedU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xedU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xedU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xedU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xedU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xedU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xedU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xedU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeeU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeeU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeeU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeeU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeeU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeeU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeeU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeeU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeeU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xefU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xefU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xefU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xefU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xefU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xefU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xefU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xefU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xefU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe9U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe9U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe9U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe9U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe9U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe9U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe9U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe9U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeaU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeaU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeaU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeaU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeaU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeaU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeaU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeaU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeaU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xebU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xebU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xebU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xebU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xebU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xebU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xebU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xebU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xebU] 
                                           >> 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe5U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe5U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe5U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe5U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe5U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe5U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe5U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe5U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe6U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe6U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe6U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe6U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe6U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe6U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe6U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe6U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe6U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe7U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe7U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe7U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe1U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe1U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe1U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe1U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe1U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe1U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe1U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe2U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe2U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe2U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe2U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe2U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe2U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe2U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe3U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe3U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe3U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe3U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe3U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe3U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe3U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe3U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xe3U] 
                                                  >> 0x10U)));
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xddU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xddU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xddU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xddU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xddU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xddU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xddU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xddU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdeU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdeU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdeU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdeU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdeU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdeU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdeU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdeU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdeU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdfU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdfU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdfU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdfU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdfU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdfU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd9U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd9U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd9U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd9U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd9U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd9U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd9U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd9U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdaU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdaU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdaU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdaU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdaU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdaU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdaU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdaU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdaU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdbU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdbU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdbU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdbU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdbU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdbU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdbU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdbU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdbU] 
                                           >> 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd5U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd5U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd5U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd5U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd5U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd5U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd5U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd5U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd6U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd6U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd6U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd6U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd6U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd6U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd6U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd6U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd6U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd7U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd7U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd7U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd1U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd1U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd1U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd1U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd1U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd1U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd1U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd2U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd2U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd2U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd2U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd2U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd2U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd2U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd3U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd3U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd3U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd3U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd3U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd3U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd3U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd3U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xd3U] 
                                                  >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcdU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcdU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xceU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xceU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xceU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xceU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xceU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xceU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xceU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xceU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xceU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcfU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcfU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcfU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcfU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcfU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcfU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcfU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcfU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcfU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc9U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc9U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc9U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc9U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc9U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc9U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc9U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc9U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcaU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcaU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcaU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcaU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcaU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcaU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcaU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcaU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcaU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcbU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcbU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xcbU] 
                                                  >> 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc5U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc6U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc6U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc7U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc7U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc7U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc7U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc7U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc7U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc7U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc7U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc7U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc1U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc1U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc1U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc1U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc1U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc1U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc1U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc1U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc2U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc2U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc2U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc2U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc2U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc2U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc2U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc2U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc2U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xc3U] 
                                              >> 0x10U)));
            }
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbdU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbdU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbdU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbdU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbdU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbdU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbdU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbdU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbeU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbeU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbeU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbeU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbeU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbeU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbeU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbeU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbeU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbfU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbfU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbfU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbfU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbfU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbfU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb9U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb9U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb9U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb9U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb9U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb9U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb9U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb9U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbaU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbaU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbaU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbaU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbaU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbaU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbaU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbaU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbaU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbbU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbbU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbbU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbbU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbbU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbbU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbbU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbbU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbbU] 
                                           >> 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb5U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb5U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb5U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb5U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb5U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb5U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb5U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb5U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb6U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb6U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb6U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb6U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb6U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb6U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb6U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb6U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb6U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb7U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb7U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb7U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb1U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb1U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb1U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb1U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb1U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb1U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb1U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb2U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb2U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb2U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb2U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb2U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb2U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb2U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb3U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb3U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb3U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb3U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb3U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb3U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb3U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb3U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xb3U] 
                                                  >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xadU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xadU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xadU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xadU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xadU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xadU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xadU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xadU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaeU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaeU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xafU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xafU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xafU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xafU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xafU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xafU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xafU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xafU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xafU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa9U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa9U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa9U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa9U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa9U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa9U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa9U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa9U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaaU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaaU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaaU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaaU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaaU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaaU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaaU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaaU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaaU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xabU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xabU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xabU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xabU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xabU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xabU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xabU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xabU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xabU] 
                                                  >> 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa5U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa6U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa6U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa7U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa7U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa7U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa7U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa7U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa7U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa7U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa7U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa7U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa1U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa1U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa1U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa1U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa1U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa1U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa1U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa1U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa2U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa2U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa2U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa2U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa2U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa2U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa2U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa2U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa2U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xa3U] 
                                              >> 0x10U)));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9dU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9eU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9eU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9fU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9fU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9fU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x99U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x99U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x99U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x99U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x99U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x99U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x99U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x99U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9aU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9aU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9bU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9bU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x9bU] 
                                                  >> 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x95U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x95U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x95U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x95U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x95U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x95U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x95U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x95U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x96U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x96U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x96U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x96U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x96U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x96U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x96U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x96U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x96U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x97U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x97U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x97U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x97U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x97U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x97U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x97U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x97U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x97U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x91U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x91U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x91U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x91U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x91U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x91U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x91U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x91U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x92U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x92U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x92U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x92U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x92U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x92U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x92U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x92U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x92U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x93U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x93U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x93U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x93U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x93U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x93U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x93U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x93U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x93U] 
                                              >> 0x10U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8fU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x89U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x89U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x89U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x89U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x89U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x89U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x89U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x89U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x8bU] 
                                              >> 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x85U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x85U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x85U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x85U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x85U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x85U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x85U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x85U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x86U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x86U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x86U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x86U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x86U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x86U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x86U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x86U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x86U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x87U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x87U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x87U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x87U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x87U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x87U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x87U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x87U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x87U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x81U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x81U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x81U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x81U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x81U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x81U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x81U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x81U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x82U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x82U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x82U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x82U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x82U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x82U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x82U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x82U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x82U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x83U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x83U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x83U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x83U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x83U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x83U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x83U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x83U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x83U] 
                                          >> 0x10U)));
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7dU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7eU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7eU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7fU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7fU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7fU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7fU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7fU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7fU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7fU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7fU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7fU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x79U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x79U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x79U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x79U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x79U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x79U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x79U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x79U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7aU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7aU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7aU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7aU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7aU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7bU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7bU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x7bU] 
                                           >> 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x75U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x75U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x75U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x75U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x75U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x75U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x75U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x75U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x76U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x76U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x76U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x76U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x76U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x76U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x76U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x76U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x76U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x77U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x77U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x77U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x77U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x77U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x77U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x77U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x77U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x77U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x71U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x71U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x71U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x71U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x71U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x71U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x71U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x71U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x72U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x72U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x72U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x72U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x72U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x72U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x72U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x72U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x72U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x73U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x73U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x73U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x73U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x73U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x73U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x73U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x73U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x73U] 
                                                  >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6dU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6eU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6eU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6fU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6fU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6fU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x69U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x69U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x69U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x69U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x69U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x69U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x69U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x69U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6aU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6aU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6bU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6bU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x6bU] 
                                                  >> 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x65U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x65U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x65U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x65U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x65U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x65U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x65U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x65U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x66U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x66U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x66U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x66U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x66U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x66U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x66U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x66U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x66U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x67U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x67U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x67U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x67U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x67U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x67U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x67U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x67U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x67U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x61U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x61U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x61U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x61U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x61U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x61U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x61U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x61U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x62U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x62U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x62U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x62U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x62U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x62U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x62U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x62U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x62U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x63U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x63U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x63U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x63U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x63U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x63U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x63U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x63U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x63U] 
                                              >> 0x10U)));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5dU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5eU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5eU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5fU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5fU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5fU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x59U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x59U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x59U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x59U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x59U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x59U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x59U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x59U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5aU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5aU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5bU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5bU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x5bU] 
                                                  >> 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x55U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x55U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x55U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x55U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x55U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x55U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x55U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x55U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x56U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x56U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x56U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x56U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x56U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x56U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x56U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x56U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x56U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x57U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x57U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x57U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x57U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x57U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x57U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x57U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x57U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x57U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x51U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x51U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x51U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x51U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x51U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x51U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x51U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x51U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x52U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x52U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x52U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x52U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x52U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x52U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x52U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x52U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x52U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x53U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x53U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x53U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x53U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x53U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x53U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x53U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x53U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x53U] 
                                              >> 0x10U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4fU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x49U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x49U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x49U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x49U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x49U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x49U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x49U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x49U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x4bU] 
                                              >> 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x45U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x45U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x45U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x45U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x45U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x45U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x45U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x45U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x46U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x46U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x46U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x46U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x46U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x46U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x46U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x46U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x46U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x47U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x47U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x47U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x47U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x47U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x47U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x47U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x47U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x47U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x41U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x41U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x41U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x41U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x41U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x41U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x41U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x41U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x42U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x42U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x42U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x42U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x42U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x42U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x42U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x42U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x42U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x43U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x43U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x43U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x43U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x43U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x43U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x43U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x43U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x43U] 
                                          >> 0x10U)));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3dU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3eU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3eU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3fU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3fU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3fU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x39U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x39U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x39U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x39U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x39U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x39U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x39U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x39U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3aU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3aU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3bU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3bU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x3bU] 
                                                  >> 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x35U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x35U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x35U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x35U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x35U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x35U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x35U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x35U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x36U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x36U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x36U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x36U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x36U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x36U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x36U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x36U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x36U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x37U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x37U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x37U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x37U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x37U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x37U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x37U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x37U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x37U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x31U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x31U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x31U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x31U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x31U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x31U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x31U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x31U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x32U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x32U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x32U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x32U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x32U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x32U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x32U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x32U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x32U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x33U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x33U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x33U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x33U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x33U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x33U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x33U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x33U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x33U] 
                                              >> 0x10U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2fU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x29U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x29U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x29U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x29U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x29U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x29U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x29U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x29U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x2bU] 
                                              >> 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x25U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x25U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x25U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x25U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x25U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x25U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x25U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x25U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x26U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x26U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x26U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x26U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x26U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x26U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x26U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x26U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x26U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x27U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x27U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x27U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x27U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x27U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x27U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x27U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x27U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x27U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x21U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x21U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x21U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x21U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x21U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x21U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x21U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x21U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x22U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x22U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x22U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x22U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x22U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x22U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x22U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x22U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x22U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x23U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x23U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x23U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x23U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x23U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x23U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x23U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x23U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x23U] 
                                          >> 0x10U)));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1fU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x19U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x19U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x19U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x19U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x19U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x19U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x19U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x19U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x1bU] 
                                              >> 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x15U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x16U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x17U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x11U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x12U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0x13U] 
                                          >> 0x10U)));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xdU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xeU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xfU] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[9U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[9U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[9U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[9U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[9U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[9U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[9U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[9U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xaU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[0xbU] 
                                          >> 0x10U)));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[5U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[5U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[5U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[5U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[5U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[5U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[5U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[5U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[6U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[6U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[6U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[6U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[6U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[6U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[6U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[6U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[6U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[7U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[7U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[7U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[7U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[7U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[7U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[7U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[7U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[7U] 
                                      >> 0x10U)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[1U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[1U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[1U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[1U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[1U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[1U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[1U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[1U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[2U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[2U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[2U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[2U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[2U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[2U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[2U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[2U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[2U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[3U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[3U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[3U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[3U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[3U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[3U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[3U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[3U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer[3U] 
                                      >> 0x10U)));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s2_new_exp__024D_IN 
        = ((0x81U >= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_exp))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__IF_s1_exp_4_EQ_129_6_THEN_IF_s1_sign_7_THEN_IF_ETC___05F_d36)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_sign)
                ? 0U : 0x7fU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s2_new_exp__024D_IN 
        = ((0x81U >= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_exp))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__IF_s1_exp_4_EQ_129_6_THEN_IF_s1_sign_7_THEN_IF_ETC___05F_d36)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_sign)
                ? 0U : 0x7fU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s2_new_exp__024D_IN 
        = ((0x81U >= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_exp))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__IF_s1_exp_4_EQ_129_6_THEN_IF_s1_sign_7_THEN_IF_ETC___05F_d36)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_sign)
                ? 0U : 0x7fU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s2_new_exp__024D_IN 
        = ((0x81U >= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_exp))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__IF_s1_exp_4_EQ_129_6_THEN_IF_s1_sign_7_THEN_IF_ETC___05F_d36)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_sign)
                ? 0U : 0x7fU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s2_new_exp__024D_IN 
        = ((0x81U >= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_exp))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__IF_s1_exp_4_EQ_129_6_THEN_IF_s1_sign_7_THEN_IF_ETC___05F_d36)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_sign)
                ? 0U : 0x7fU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage1__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__busy) 
           & (0x60U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_0 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_2 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_6 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_8 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_10 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_12 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_14 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__exp_sum___05Fh11600 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_a_abs) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_a_abs) 
                                   >> 7U))) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__b_exp_eff___05Fh12482)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__exp_sum___05Fh12483 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_b_abs) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_b_abs) 
                                   >> 7U))) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__b_exp_eff___05Fh12482)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_a_abs) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_a_abs))) 
           * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__b_full_mant___05Fh12479));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_b_abs) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_b_abs))) 
           * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__b_full_mant___05Fh12479));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_a_BIT_15_1_vec_a_BIT_31___05FETC___05Fq1 
        = (1U & ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                  ? ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index) 
                               >> 8U))) && (1U & ((0x80U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x17fU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x17fU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x17eU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x17eU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x17dU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x17dU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x17cU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x17cU] 
                                                          >> 0xfU))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x17bU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x17bU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x17aU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x17aU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x179U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x179U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x178U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x178U] 
                                                          >> 0xfU)))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x177U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x177U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x176U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x176U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x175U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x175U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x174U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x174U] 
                                                          >> 0xfU))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x173U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x173U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x172U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x172U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x171U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x171U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x170U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x170U] 
                                                          >> 0xfU))))))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x16fU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x16fU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x16eU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x16eU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x16dU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x16dU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x16cU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x16cU] 
                                                          >> 0xfU))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x16bU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x16bU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x16aU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x16aU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x169U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x169U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x168U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x168U] 
                                                          >> 0xfU)))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x167U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x167U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x166U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x166U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x165U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x165U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x164U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x164U] 
                                                          >> 0xfU))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x163U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x163U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x162U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x162U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x161U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x161U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x160U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x160U] 
                                                          >> 0xfU)))))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x15fU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x15fU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x15eU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x15eU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x15dU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x15dU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x15cU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x15cU] 
                                                          >> 0xfU))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x15bU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x15bU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x15aU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x15aU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x159U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x159U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x158U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x158U] 
                                                          >> 0xfU)))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x157U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x157U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x156U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x156U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x155U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x155U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x154U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x154U] 
                                                          >> 0xfU))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x153U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x153U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x152U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x152U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x151U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x151U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x150U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x150U] 
                                                          >> 0xfU))))))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x14fU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x14fU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x14eU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x14eU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x14dU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x14dU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x14cU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x14cU] 
                                                          >> 0xfU))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x14bU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x14bU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x14aU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x14aU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x149U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x149U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x148U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x148U] 
                                                          >> 0xfU)))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x147U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x147U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x146U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x146U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x145U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x145U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x144U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x144U] 
                                                          >> 0xfU))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x143U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x143U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x142U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x142U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x141U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x141U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x140U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x140U] 
                                                          >> 0xfU))))))))
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x13fU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x13fU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x13eU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x13eU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x13dU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x13dU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x13cU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x13cU] 
                                                          >> 0xfU))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x13bU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x13bU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x13aU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x13aU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x139U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x139U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x138U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x138U] 
                                                          >> 0xfU)))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x137U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x137U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x136U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x136U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x135U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x135U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x134U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x134U] 
                                                          >> 0xfU))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x133U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x133U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x132U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x132U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x131U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x131U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x130U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x130U] 
                                                          >> 0xfU))))))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x12fU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x12fU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x12eU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x12eU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x12dU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x12dU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x12cU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x12cU] 
                                                          >> 0xfU))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x12bU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x12bU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x12aU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x12aU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x129U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x129U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x128U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x128U] 
                                                          >> 0xfU)))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x127U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x127U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x126U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x126U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x125U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x125U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x124U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x124U] 
                                                          >> 0xfU))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x123U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x123U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x122U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x122U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x121U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x121U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x120U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x120U] 
                                                          >> 0xfU)))))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x11fU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x11fU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x11eU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x11eU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x11dU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x11dU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x11cU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x11cU] 
                                                          >> 0xfU))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x11bU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x11bU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x11aU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x11aU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x119U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x119U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x118U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x118U] 
                                                          >> 0xfU)))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x117U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x117U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x116U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x116U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x115U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x115U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x114U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x114U] 
                                                          >> 0xfU))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x113U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x113U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x112U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x112U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x111U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x111U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x110U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x110U] 
                                                          >> 0xfU))))))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x10fU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x10fU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x10eU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x10eU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x10dU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x10dU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x10cU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x10cU] 
                                                          >> 0xfU))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x10bU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x10bU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x10aU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x10aU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x109U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x109U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x108U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x108U] 
                                                          >> 0xfU)))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x107U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x107U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x106U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x106U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x105U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x105U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x104U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x104U] 
                                                          >> 0xfU))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x103U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x103U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x102U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x102U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x101U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x101U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x100U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x100U] 
                                                          >> 0xfU)))))))))))
                  : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                      ? ((0x80U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                          ? ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                              ? ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                  ? ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xffU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xffU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xfeU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xfeU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xfdU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xfdU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xfcU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xfcU] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xfbU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xfbU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xfaU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xfaU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf9U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf9U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf8U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf8U] 
                                                   >> 0xfU)))))
                                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf7U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf7U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf6U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf6U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf5U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf5U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf4U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf4U] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf3U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf3U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf2U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf2U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf1U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf1U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf0U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xf0U] 
                                                   >> 0xfU))))))
                                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xefU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xefU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xeeU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xeeU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xedU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xedU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xecU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xecU] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xebU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xebU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xeaU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xeaU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe9U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe9U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe8U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe8U] 
                                                   >> 0xfU)))))
                                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe7U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe7U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe6U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe6U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe5U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe5U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe4U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe4U] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe3U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe3U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe2U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe2U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe1U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe1U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe0U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xe0U] 
                                                   >> 0xfU)))))))
                              : ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                  ? ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xdfU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xdfU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xdeU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xdeU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xddU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xddU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xdcU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xdcU] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xdbU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xdbU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xdaU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xdaU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd9U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd9U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd8U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd8U] 
                                                   >> 0xfU)))))
                                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd7U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd7U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd6U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd6U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd5U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd5U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd4U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd4U] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd3U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd3U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd2U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd2U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd1U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd1U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd0U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xd0U] 
                                                   >> 0xfU))))))
                                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xcfU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xcfU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xceU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xceU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xcdU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xcdU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xccU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xccU] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xcbU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xcbU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xcaU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xcaU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc9U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc9U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc8U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc8U] 
                                                   >> 0xfU)))))
                                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc7U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc7U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc6U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc6U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc5U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc5U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc4U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc4U] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc3U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc3U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc2U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc2U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc1U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc1U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc0U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xc0U] 
                                                   >> 0xfU))))))))
                          : ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                              ? ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                  ? ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xbfU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xbfU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xbeU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xbeU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xbdU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xbdU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xbcU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xbcU] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xbbU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xbbU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xbaU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xbaU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb9U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb9U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb8U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb8U] 
                                                   >> 0xfU)))))
                                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb7U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb7U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb6U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb6U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb5U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb5U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb4U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb4U] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb3U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb3U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb2U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb2U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb1U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb1U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb0U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xb0U] 
                                                   >> 0xfU))))))
                                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xafU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xafU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xaeU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xaeU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xadU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xadU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xacU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xacU] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xabU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xabU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xaaU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xaaU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa9U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa9U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa8U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa8U] 
                                                   >> 0xfU)))))
                                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa7U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa7U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa6U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa6U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa5U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa5U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa4U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa4U] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa3U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa3U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa2U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa2U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa1U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa1U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa0U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xa0U] 
                                                   >> 0xfU)))))))
                              : ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                  ? ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x9fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x9fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x9eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x9eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x9dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x9dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x9cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x9cU] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x9bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x9bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x9aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x9aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x99U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x99U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x98U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x98U] 
                                                   >> 0xfU)))))
                                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x97U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x97U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x96U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x96U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x95U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x95U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x94U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x94U] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x93U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x93U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x92U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x92U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x91U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x91U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x90U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x90U] 
                                                   >> 0xfU))))))
                                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x8fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x8fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x8eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x8eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x8dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x8dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x8cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x8cU] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x8bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x8bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x8aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x8aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x89U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x89U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x88U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x88U] 
                                                   >> 0xfU)))))
                                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x87U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x87U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x86U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x86U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x85U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x85U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x84U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x84U] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x83U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x83U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x82U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x82U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x81U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x81U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x80U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x80U] 
                                                   >> 0xfU)))))))))
                      : ((0x80U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                          ? ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                              ? ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                  ? ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x7fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x7fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x7eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x7eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x7dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x7dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x7cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x7cU] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x7bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x7bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x7aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x7aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x79U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x79U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x78U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x78U] 
                                                   >> 0xfU)))))
                                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x77U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x77U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x76U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x76U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x75U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x75U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x74U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x74U] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x73U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x73U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x72U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x72U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x71U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x71U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x70U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x70U] 
                                                   >> 0xfU))))))
                                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x6fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x6fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x6eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x6eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x6dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x6dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x6cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x6cU] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x6bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x6bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x6aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x6aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x69U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x69U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x68U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x68U] 
                                                   >> 0xfU)))))
                                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x67U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x67U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x66U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x66U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x65U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x65U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x64U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x64U] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x63U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x63U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x62U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x62U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x61U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x61U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x60U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x60U] 
                                                   >> 0xfU)))))))
                              : ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                  ? ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x5fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x5fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x5eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x5eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x5dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x5dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x5cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x5cU] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x5bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x5bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x5aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x5aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x59U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x59U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x58U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x58U] 
                                                   >> 0xfU)))))
                                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x57U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x57U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x56U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x56U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x55U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x55U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x54U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x54U] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x53U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x53U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x52U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x52U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x51U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x51U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x50U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x50U] 
                                                   >> 0xfU))))))
                                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x4fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x4fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x4eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x4eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x4dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x4dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x4cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x4cU] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x4bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x4bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x4aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x4aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x49U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x49U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x48U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x48U] 
                                                   >> 0xfU)))))
                                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x47U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x47U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x46U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x46U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x45U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x45U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x44U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x44U] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x43U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x43U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x42U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x42U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x41U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x41U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x40U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x40U] 
                                                   >> 0xfU))))))))
                          : ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                              ? ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                  ? ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x3fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x3fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x3eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x3eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x3dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x3dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x3cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x3cU] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x3bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x3bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x3aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x3aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x39U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x39U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x38U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x38U] 
                                                   >> 0xfU)))))
                                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x37U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x37U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x36U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x36U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x35U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x35U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x34U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x34U] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x33U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x33U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x32U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x32U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x31U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x31U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x30U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x30U] 
                                                   >> 0xfU))))))
                                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x2fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x2fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x2eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x2eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x2dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x2dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x2cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x2cU] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x2bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x2bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x2aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x2aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x29U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x29U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x28U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x28U] 
                                                   >> 0xfU)))))
                                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x27U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x27U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x26U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x26U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x25U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x25U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x24U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x24U] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x23U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x23U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x22U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x22U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x21U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x21U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x20U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x20U] 
                                                   >> 0xfU)))))))
                              : ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                  ? ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x1fU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x1fU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x1eU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x1eU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x1dU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x1dU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x1cU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x1cU] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x1bU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x1bU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x1aU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x1aU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x19U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x19U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x18U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x18U] 
                                                   >> 0xfU)))))
                                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x17U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x17U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x16U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x16U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x15U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x15U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x14U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x14U] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x13U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x13U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x12U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x12U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x11U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x11U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x10U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0x10U] 
                                                   >> 0xfU))))))
                                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xfU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xfU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xeU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xeU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xdU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xdU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xcU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xcU] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xbU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xbU] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xaU] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0xaU] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[9U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[9U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[8U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[8U] 
                                                   >> 0xfU)))))
                                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[7U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[7U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[6U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[6U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[5U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[5U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[4U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[4U] 
                                                   >> 0xfU))))
                                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[3U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[3U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[2U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[2U] 
                                                   >> 0xfU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[1U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[1U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                   ? 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0U] 
                                                   >> 0x1fU)
                                                   : 
                                                  (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a[0U] 
                                                   >> 0xfU))))))))))));
}
